/********************************************************************************
** Form generated from reading UI file 'configuredialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGUREDIALOG_H
#define UI_CONFIGUREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_Configuredialog
{
public:
    QLabel *Label1;
    QSlider *PDSlider;
    QLabel *Label2;
    QSlider *VRSlider;
    QPushButton *cancelPushButton;
    QPushButton *OKPushButton;
    QLabel *pointDistanceLabel;
    QLabel *vRateLabel;

    void setupUi(QDialog *Configuredialog)
    {
        if (Configuredialog->objectName().isEmpty())
            Configuredialog->setObjectName(QString::fromUtf8("Configuredialog"));
        Configuredialog->resize(462, 172);
        Label1 = new QLabel(Configuredialog);
        Label1->setObjectName(QString::fromUtf8("Label1"));
        Label1->setGeometry(QRect(20, 20, 91, 31));
        QFont font;
        font.setPointSize(12);
        Label1->setFont(font);
        PDSlider = new QSlider(Configuredialog);
        PDSlider->setObjectName(QString::fromUtf8("PDSlider"));
        PDSlider->setGeometry(QRect(150, 20, 281, 22));
        PDSlider->setMinimum(1);
        PDSlider->setMaximum(500);
        PDSlider->setOrientation(Qt::Horizontal);
        Label2 = new QLabel(Configuredialog);
        Label2->setObjectName(QString::fromUtf8("Label2"));
        Label2->setGeometry(QRect(20, 70, 71, 31));
        Label2->setFont(font);
        VRSlider = new QSlider(Configuredialog);
        VRSlider->setObjectName(QString::fromUtf8("VRSlider"));
        VRSlider->setGeometry(QRect(150, 70, 281, 22));
        VRSlider->setMinimum(10);
        VRSlider->setMaximum(100);
        VRSlider->setOrientation(Qt::Horizontal);
        cancelPushButton = new QPushButton(Configuredialog);
        cancelPushButton->setObjectName(QString::fromUtf8("cancelPushButton"));
        cancelPushButton->setGeometry(QRect(70, 120, 101, 31));
        cancelPushButton->setFont(font);
        OKPushButton = new QPushButton(Configuredialog);
        OKPushButton->setObjectName(QString::fromUtf8("OKPushButton"));
        OKPushButton->setGeometry(QRect(290, 120, 101, 31));
        OKPushButton->setFont(font);
        pointDistanceLabel = new QLabel(Configuredialog);
        pointDistanceLabel->setObjectName(QString::fromUtf8("pointDistanceLabel"));
        pointDistanceLabel->setGeometry(QRect(110, 20, 41, 31));
        pointDistanceLabel->setFont(font);
        vRateLabel = new QLabel(Configuredialog);
        vRateLabel->setObjectName(QString::fromUtf8("vRateLabel"));
        vRateLabel->setGeometry(QRect(100, 70, 41, 31));
        vRateLabel->setFont(font);

        retranslateUi(Configuredialog);

        QMetaObject::connectSlotsByName(Configuredialog);
    } // setupUi

    void retranslateUi(QDialog *Configuredialog)
    {
        Configuredialog->setWindowTitle(QCoreApplication::translate("Configuredialog", "\350\256\276\347\275\256", nullptr));
        Label1->setText(QCoreApplication::translate("Configuredialog", "\347\202\271\345\220\270\351\231\204\350\267\235\347\246\273\357\274\232", nullptr));
        Label2->setText(QCoreApplication::translate("Configuredialog", "\351\253\230\344\272\256\345\200\215\346\225\260\357\274\232", nullptr));
        cancelPushButton->setText(QCoreApplication::translate("Configuredialog", "\345\217\226\346\266\210", nullptr));
        OKPushButton->setText(QCoreApplication::translate("Configuredialog", "\347\241\256\345\256\232", nullptr));
        pointDistanceLabel->setText(QCoreApplication::translate("Configuredialog", "3.0", nullptr));
        vRateLabel->setText(QCoreApplication::translate("Configuredialog", "4.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Configuredialog: public Ui_Configuredialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGUREDIALOG_H
