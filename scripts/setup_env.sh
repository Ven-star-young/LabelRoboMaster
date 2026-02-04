#!/bin/bash

# ============================================
# 完整环境安装脚本
# 包含: 系统依赖 (Qt5/OpenCV) + Python 依赖
# ============================================

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"

# 颜色定义
RED='\033[0;31m'; GREEN='\033[0;32m'; YELLOW='\033[1;33m'; BLUE='\033[0;34m'; NC='\033[0m'

log_info() { echo -e "${BLUE}[INFO]${NC} $1"; }
log_success() { echo -e "${GREEN}[SUCCESS]${NC} $1"; }
log_warn() { echo -e "${YELLOW}[WARN]${NC} $1"; }
log_error() { echo -e "${RED}[ERROR]${NC} $1"; }

# 检查 Python
check_python() {
    if command -v python3 &>/dev/null; then
        PYTHON_CMD="python3"
    elif command -v python &>/dev/null; then
        PYTHON_CMD="python"
    else
        log_error "未找到 Python，请先安装 Python 3.8+"
        exit 1
    fi
    
    local py_version=$($PYTHON_CMD --version 2>&1 | grep -oE '[0-9]+\.[0-9]+' | head -n1)
    log_info "Python 版本: $py_version"
    
    # 检查版本是否 >= 3.8
    if [ "$(printf '%s\n' "3.8" "$py_version" | sort -V | head -n1)" != "3.8" ]; then
        log_error "需要 Python 3.8 或更高版本"
        exit 1
    fi
}

# 检查并创建虚拟环境
setup_venv() {
    local venv_dir="$PROJECT_ROOT/.venv"
    
    if [ -d "$venv_dir" ]; then
        log_info "检测到已有虚拟环境: $venv_dir"
    else
        log_info "创建虚拟环境..."
        $PYTHON_CMD -m venv "$venv_dir"
        log_success "虚拟环境创建成功"
    fi
    
    # 激活虚拟环境
    source "$venv_dir/bin/activate"
    log_info "已激活虚拟环境"
    
    # 升级 pip
    pip install --upgrade pip
}

# 安装 Python 依赖
install_python_deps() {
    local req_file="$PROJECT_ROOT/requirements.txt"
    
    if [ ! -f "$req_file" ]; then
        log_warn "未找到 requirements.txt，跳过 Python 依赖安装"
        return
    fi
    
    log_info "安装 Python 依赖..."
    pip install -r "$req_file"
    log_success "Python 依赖安装完成"
}

# 验证 Python 依赖
verify_python_deps() {
    log_info "验证 Python 依赖..."
    
    local deps=("cv2" "numpy" "tqdm" "matplotlib" "onnxruntime")
    local all_ok=true
    
    for dep in "${deps[@]}"; do
        # 特殊处理 cv2 -> opencv-python
        local pkg_name=$dep
        [ "$dep" = "cv2" ] && pkg_name="opencv-python"
        
        if $PYTHON_CMD -c "import $dep" 2>/dev/null; then
            local version=$($PYTHON_CMD -c "import $dep; print($dep.__version__)" 2>/dev/null || echo "unknown")
            log_success "$dep: $version"
        else
            log_error "$dep: 未安装"
            all_ok=false
        fi
    done
    
    $all_ok || exit 1
}

# 主函数
main() {
    echo "=========================================="
    echo "      完整环境安装脚本"
    echo "=========================================="
    echo ""
    
    # 解析参数
    local use_venv=true
    local skip_system=false
    
    while [[ $# -gt 0 ]]; do
        case $1 in
            --no-venv) use_venv=false; shift ;;
            --skip-system) skip_system=true; shift ;;
            -h|--help)
                echo "用法: $0 [选项]"
                echo ""
                echo "选项:"
                echo "  --no-venv        不使用虚拟环境"
                echo "  --skip-system    跳过系统依赖安装"
                echo "  -h, --help       显示帮助"
                exit 0
                ;;
            *) log_error "未知选项: $1"; exit 1 ;;
        esac
    done
    
    # 1. 安装系统依赖
    if ! $skip_system; then
        if [ -f "$SCRIPT_DIR/install_deps.sh" ]; then
            log_info "安装系统依赖..."
            bash "$SCRIPT_DIR/install_deps.sh"
        else
            log_warn "系统依赖安装脚本不存在，跳过"
        fi
    fi
    
    # 2. 检查 Python
    check_python
    
    # 3. 设置虚拟环境
    if $use_venv; then
        setup_venv
    fi
    
    # 4. 安装 Python 依赖
    install_python_deps
    
    # 5. 验证
    echo ""
    verify_python_deps
    
    echo ""
    log_success "环境配置完成！"
    
    if $use_venv; then
        echo ""
        echo "使用虚拟环境:"
        echo "  source $PROJECT_ROOT/.venv/bin/activate"
    fi
}

main "$@"
