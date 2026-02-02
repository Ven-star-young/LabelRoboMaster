/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "drawonpic.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QPushButton *openDirectoryPushButton;
    QPushButton *savePushButton;
    QPushButton *addLabelPushButton;
    QPushButton *interpolateButton;
    QPushButton *smartPushButton;
    QPushButton *nextPushButton;
    QPushButton *prevPushButton;
    QCheckBox *autoSaveCheckBox;
    QCheckBox *stayPositionCheckBox;
    QPushButton *illuminateButton;
    QPushButton *histogramEqualizationButton;
    QPushButton *coverBrushButton;
    QPushButton *delImageButton;
    QComboBox *modeComboBox;
    QLabel *modeText;
    QPushButton *configurePushButton;
    QCheckBox *autoEnhanceVCheckBox;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *vboxLayout;
    QListWidget *labelListWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *upLabelButton;
    QPushButton *downLabelButton;
    QGroupBox *groupBox_3;
    QListWidget *fileListWidget;
    QSlider *fileListHorizontalSlider;
    QLabel *fileListLabel;
    DrawOnPic *label;
    QLabel *labelOpenvino;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1500, 800);
        MainWindow->setMinimumSize(QSize(1500, 800));
        MainWindow->setMaximumSize(QSize(1500, 800));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 200, 741));
        openDirectoryPushButton = new QPushButton(groupBox);
        openDirectoryPushButton->setObjectName(QString::fromUtf8("openDirectoryPushButton"));
        openDirectoryPushButton->setGeometry(QRect(0, 70, 200, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/resource/directory.png"), QSize(), QIcon::Normal, QIcon::Off);
        openDirectoryPushButton->setIcon(icon);
        openDirectoryPushButton->setIconSize(QSize(32, 32));
        savePushButton = new QPushButton(groupBox);
        savePushButton->setObjectName(QString::fromUtf8("savePushButton"));
        savePushButton->setGeometry(QRect(0, 120, 200, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/resource/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        savePushButton->setIcon(icon1);
        savePushButton->setIconSize(QSize(32, 32));
        addLabelPushButton = new QPushButton(groupBox);
        addLabelPushButton->setObjectName(QString::fromUtf8("addLabelPushButton"));
        addLabelPushButton->setGeometry(QRect(0, 170, 200, 41));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/resource/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addLabelPushButton->setIcon(icon2);
        addLabelPushButton->setIconSize(QSize(32, 32));
        interpolateButton = new QPushButton(groupBox);
        interpolateButton->setObjectName(QString::fromUtf8("interpolateButton"));
        interpolateButton->setGeometry(QRect(0, 220, 200, 41));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/resource/auto-fix.png"), QSize(), QIcon::Normal, QIcon::Off);
        interpolateButton->setIcon(icon3);
        interpolateButton->setIconSize(QSize(32, 32));
        smartPushButton = new QPushButton(groupBox);
        smartPushButton->setObjectName(QString::fromUtf8("smartPushButton"));
        smartPushButton->setGeometry(QRect(0, 270, 200, 41));
        smartPushButton->setIcon(icon3);
        smartPushButton->setIconSize(QSize(32, 32));
        nextPushButton = new QPushButton(groupBox);
        nextPushButton->setObjectName(QString::fromUtf8("nextPushButton"));
        nextPushButton->setGeometry(QRect(0, 320, 200, 41));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/resource/right-arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        nextPushButton->setIcon(icon4);
        nextPushButton->setIconSize(QSize(32, 32));
        prevPushButton = new QPushButton(groupBox);
        prevPushButton->setObjectName(QString::fromUtf8("prevPushButton"));
        prevPushButton->setGeometry(QRect(0, 370, 200, 41));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/resource/left-arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        prevPushButton->setIcon(icon5);
        prevPushButton->setIconSize(QSize(32, 32));
        autoSaveCheckBox = new QCheckBox(groupBox);
        autoSaveCheckBox->setObjectName(QString::fromUtf8("autoSaveCheckBox"));
        autoSaveCheckBox->setGeometry(QRect(50, 663, 150, 25));
        autoSaveCheckBox->setChecked(true);
        stayPositionCheckBox = new QCheckBox(groupBox);
        stayPositionCheckBox->setObjectName(QString::fromUtf8("stayPositionCheckBox"));
        stayPositionCheckBox->setGeometry(QRect(50, 710, 150, 25));
        illuminateButton = new QPushButton(groupBox);
        illuminateButton->setObjectName(QString::fromUtf8("illuminateButton"));
        illuminateButton->setGeometry(QRect(0, 420, 200, 41));
        histogramEqualizationButton = new QPushButton(groupBox);
        histogramEqualizationButton->setObjectName(QString::fromUtf8("histogramEqualizationButton"));
        histogramEqualizationButton->setGeometry(QRect(0, 470, 200, 41));
        coverBrushButton = new QPushButton(groupBox);
        coverBrushButton->setObjectName(QString::fromUtf8("coverBrushButton"));
        coverBrushButton->setEnabled(false);
        coverBrushButton->setGeometry(QRect(0, 520, 200, 41));
        delImageButton = new QPushButton(groupBox);
        delImageButton->setObjectName(QString::fromUtf8("delImageButton"));
        delImageButton->setGeometry(QRect(0, 570, 200, 41));
        modeComboBox = new QComboBox(groupBox);
        modeComboBox->addItem(QString());
        modeComboBox->addItem(QString());
        modeComboBox->addItem(QString());
        modeComboBox->addItem(QString());
        modeComboBox->setObjectName(QString::fromUtf8("modeComboBox"));
        modeComboBox->setGeometry(QRect(60, 20, 131, 41));
        QFont font;
        font.setPointSize(13);
        modeComboBox->setFont(font);
        modeText = new QLabel(groupBox);
        modeText->setObjectName(QString::fromUtf8("modeText"));
        modeText->setGeometry(QRect(10, 20, 51, 41));
        modeText->setFont(font);
        configurePushButton = new QPushButton(groupBox);
        configurePushButton->setObjectName(QString::fromUtf8("configurePushButton"));
        configurePushButton->setEnabled(true);
        configurePushButton->setGeometry(QRect(0, 620, 200, 41));
        configurePushButton->setIcon(icon3);
        configurePushButton->setIconSize(QSize(32, 32));
        autoEnhanceVCheckBox = new QCheckBox(groupBox);
        autoEnhanceVCheckBox->setObjectName(QString::fromUtf8("autoEnhanceVCheckBox"));
        autoEnhanceVCheckBox->setGeometry(QRect(50, 690, 91, 20));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(1200, 0, 300, 300));
        verticalLayoutWidget = new QWidget(groupBox_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 20, 300, 280));
        vboxLayout = new QVBoxLayout(verticalLayoutWidget);
        vboxLayout->setSpacing(0);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        labelListWidget = new QListWidget(verticalLayoutWidget);
        labelListWidget->setObjectName(QString::fromUtf8("labelListWidget"));

        vboxLayout->addWidget(labelListWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(3, -1, 3, 3);
        upLabelButton = new QPushButton(verticalLayoutWidget);
        upLabelButton->setObjectName(QString::fromUtf8("upLabelButton"));

        horizontalLayout->addWidget(upLabelButton);

        downLabelButton = new QPushButton(verticalLayoutWidget);
        downLabelButton->setObjectName(QString::fromUtf8("downLabelButton"));

        horizontalLayout->addWidget(downLabelButton);


        vboxLayout->addLayout(horizontalLayout);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(1200, 300, 300, 500));
        fileListWidget = new QListWidget(groupBox_3);
        fileListWidget->setObjectName(QString::fromUtf8("fileListWidget"));
        fileListWidget->setGeometry(QRect(0, 40, 300, 460));
        fileListHorizontalSlider = new QSlider(groupBox_3);
        fileListHorizontalSlider->setObjectName(QString::fromUtf8("fileListHorizontalSlider"));
        fileListHorizontalSlider->setGeometry(QRect(0, 20, 160, 20));
        fileListHorizontalSlider->setOrientation(Qt::Horizontal);
        fileListLabel = new QLabel(groupBox_3);
        fileListLabel->setObjectName(QString::fromUtf8("fileListLabel"));
        fileListLabel->setGeometry(QRect(170, 20, 130, 20));
        label = new DrawOnPic(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 0, 1000, 800));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        labelOpenvino = new QLabel(centralWidget);
        labelOpenvino->setObjectName(QString::fromUtf8("labelOpenvino"));
        labelOpenvino->setGeometry(QRect(0, 780, 200, 20));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "LabelMaster 1.3.6", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\345\212\237\350\203\275\345\214\272", nullptr));
        openDirectoryPushButton->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\347\233\256\345\275\225 (O)", nullptr));
#if QT_CONFIG(shortcut)
        openDirectoryPushButton->setShortcut(QCoreApplication::translate("MainWindow", "O", nullptr));
#endif // QT_CONFIG(shortcut)
        savePushButton->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230 (Ctrl+S)", nullptr));
#if QT_CONFIG(shortcut)
        savePushButton->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        addLabelPushButton->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\233\256\346\240\207 (A)", nullptr));
#if QT_CONFIG(shortcut)
        addLabelPushButton->setShortcut(QCoreApplication::translate("MainWindow", "A", nullptr));
#endif // QT_CONFIG(shortcut)
        interpolateButton->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\200\274 (I)", nullptr));
#if QT_CONFIG(shortcut)
        interpolateButton->setShortcut(QCoreApplication::translate("MainWindow", "I", nullptr));
#endif // QT_CONFIG(shortcut)
        smartPushButton->setText(QCoreApplication::translate("MainWindow", "\346\231\272\350\203\275\347\262\227\346\240\207\346\263\250 (Space)", nullptr));
#if QT_CONFIG(shortcut)
        smartPushButton->setShortcut(QCoreApplication::translate("MainWindow", "Space", nullptr));
#endif // QT_CONFIG(shortcut)
        nextPushButton->setText(QCoreApplication::translate("MainWindow", "\344\270\213\344\270\200\344\270\252 (E)", nullptr));
#if QT_CONFIG(shortcut)
        nextPushButton->setShortcut(QCoreApplication::translate("MainWindow", "E", nullptr));
#endif // QT_CONFIG(shortcut)
        prevPushButton->setText(QCoreApplication::translate("MainWindow", "\344\270\212\344\270\200\344\270\252 (Q)", nullptr));
#if QT_CONFIG(shortcut)
        prevPushButton->setShortcut(QCoreApplication::translate("MainWindow", "Q", nullptr));
#endif // QT_CONFIG(shortcut)
        autoSaveCheckBox->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\344\277\235\345\255\230", nullptr));
        stayPositionCheckBox->setText(QCoreApplication::translate("MainWindow", "\344\277\235\346\214\201\347\274\251\346\224\276\344\275\215\347\275\256", nullptr));
        illuminateButton->setText(QCoreApplication::translate("MainWindow", "\346\217\220\351\253\230\344\272\256\345\272\246 (T)", nullptr));
#if QT_CONFIG(shortcut)
        illuminateButton->setShortcut(QCoreApplication::translate("MainWindow", "T", nullptr));
#endif // QT_CONFIG(shortcut)
        histogramEqualizationButton->setText(QCoreApplication::translate("MainWindow", "\347\233\264\346\226\271\345\233\276\345\275\222\344\270\200\345\214\226 (R)", nullptr));
#if QT_CONFIG(shortcut)
        histogramEqualizationButton->setShortcut(QCoreApplication::translate("MainWindow", "R", nullptr));
#endif // QT_CONFIG(shortcut)
        coverBrushButton->setText(QCoreApplication::translate("MainWindow", "\351\273\221\350\211\262\347\254\224\345\210\267 (5)", nullptr));
        delImageButton->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\233\276\347\211\207 (2)", nullptr));
        modeComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\350\243\205\347\224\262\346\235\277", nullptr));
        modeComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\351\243\216\350\275\246", nullptr));
        modeComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\345\267\245\347\250\213", nullptr));
        modeComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "\351\243\216\350\275\246\350\243\205\347\224\262\346\235\277", nullptr));

        modeText->setText(QCoreApplication::translate("MainWindow", "\346\250\241\345\274\217\357\274\232", nullptr));
        configurePushButton->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        autoEnhanceVCheckBox->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\344\272\256\345\272\246\345\242\236\345\274\272", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\346\240\207\346\263\250\345\210\227\350\241\250 (\345\217\214\345\207\273\344\277\256\346\224\271\347\261\273\345\210\253\346\210\226\345\210\240\351\231\244)", nullptr));
        upLabelButton->setText(QCoreApplication::translate("MainWindow", "\342\206\221 (W)", nullptr));
#if QT_CONFIG(shortcut)
        upLabelButton->setShortcut(QCoreApplication::translate("MainWindow", "W", nullptr));
#endif // QT_CONFIG(shortcut)
        downLabelButton->setText(QCoreApplication::translate("MainWindow", "\342\206\223 (S)", nullptr));
#if QT_CONFIG(shortcut)
        downLabelButton->setShortcut(QCoreApplication::translate("MainWindow", "S", nullptr));
#endif // QT_CONFIG(shortcut)
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\345\233\276\347\211\207\346\226\207\344\273\266\345\210\227\350\241\250", nullptr));
        fileListLabel->setText(QCoreApplication::translate("MainWindow", "[0/0]", nullptr));
        label->setText(QString());
        labelOpenvino->setText(QCoreApplication::translate("MainWindow", "openvino: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
