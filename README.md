# RoboWalker 装甲板标注工具

> 本工具在[LabelRoboMaster](https://github.com/MonthMoonBird/LabelRoboMaster) 的基础上进行了修改和优化，以适应战队的需求。原始的说明文档见[这里](./README_original.md)。

## 快速开始
操作系统wsl2+ubuntu22.04

- 克隆仓库

```bash
git clone https://github.com/Ven-star-young/LabelRoboMaster.git
```


- Python环境配置

```bash
conda create -n label_master python=3.12
conda activate label_master
pip install -r requirements.txt
# 然后调整src/label_generator中的输出的路径详细说明见底下部分
```

- 安装LabelMaster依赖
```bash
# step1:QT安装
sudo apt update
sudo apt install qtbase5-dev libqt5svg5-dev

# step2: opencv安装
sudo apt install libopencv-dev

# step3: 其它依赖库
sudo apt install libgl1-mesa-dev
sudo apt install libglu1-mesa-dev freeglut3-dev
sudo apt install git vim cmake-qt-gui build-essential
```
- 编译LabelMaster
```bash
cd LabelRoboMaster
mkdir build
cd build
cmake ..
make
./LabelMaster
```

## 创建预标注数据集


### 使用说明

运行 `src/lable_generator.py` 脚本进行自动标注：

```bash
python src/lable_generator.py --image-dir <图像目录路径> [其他选项]
```

### 命令行参数

#### 必填参数

| 参数 | 简写 | 说明 | 示例 |
|------|------|------|------|
| `--image-dir` | `-i` | 原始图像目录路径（支持 .bmp, .jpg, .png 格式） | `--image-dir ./raw_images` |

#### 可选参数 - 模型相关

| 参数 | 简写 | 说明 | 默认值 | 示例 |
|------|------|------|--------|------|
| `--model` | `-m` | ONNX 模型路径 | `model/cnn.onnx` | `--model ./model/cnn.onnx` |
| `--label` | `-l` | 标签文件路径 | `model/label.txt` | `--label ./model/label.txt` |

#### 可选参数 - 输出相关

| 参数 | 简写 | 说明 | 默认值 | 示例 |
|------|------|------|--------|------|
| `--output-dir` | `-o` | 输出目录路径（仅在复制图像模式下有效） | `output` | `--output-dir ./output` |
| `--no-copy` | - | 不复制图像，直接在原始图像目录生成标签文件 | `False` | `--no-copy` |

#### 可选参数 - 检测器参数

| 参数 | 简写 | 说明 | 默认值 | 示例 |
|------|------|------|--------|------|
| `--thresh` | `-t` | 二值化阈值（用于灯条检测，范围 0-255） | `100` | `--thresh 120` |

### 使用示例

推荐使用：
```
python src/lable_generator.py --image-dir path/to/images --output-dir path/to/output
```


## 数据标注说明

### 标注说明

尽可能将svg投影的图像与装甲板上的图像完全重合.

### 标注流程
- 打开ui界面后左上角导入图片地址，这个时候所有图像的预标注会自动生成
- 若图像中“明显”出现有装甲板（得带有两条完整的灯条）但未被标注出来，可以按"A"键进行手动点四个点（灯条上下边沿的中心）框选后会自动生成一块带有数字的装甲板。
- 观察右上方标注对象（双击更改）来检查标注是否正确，注意红蓝色以及不同的类别
- 确认无误后，点击E键可以自动跳转下一张并保存标注数据

### 使用说明与快捷键
- 鼠标左键单击：选择目标
- 鼠标右键单击：平移图像
- 鼠标滚轮：缩放图像
- 鼠标滚轮按下并移动：拖动平移选中的框

有三个快捷键能够增强图像的方法:
- 按下R键：直方图均衡化
- 按下T键：增强亮度
- W/S键选取目标后按下Y键：可在预标注框roi区域做图像增强