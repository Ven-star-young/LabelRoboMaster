/********************************************************************************
** Form generated from reading UI file 'labeldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABELDIALOG_H
#define UI_LABELDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LabelDialog
{
public:
    QComboBox *class_box;
    QLabel *class_label;
    QLabel *color_label;
    QComboBox *color_box;
    QPushButton *deleteButton;
    QPushButton *cancelButton;
    QPushButton *saveButton;

    void setupUi(QDialog *LabelDialog)
    {
        if (LabelDialog->objectName().isEmpty())
            LabelDialog->setObjectName(QString::fromUtf8("LabelDialog"));
        LabelDialog->resize(382, 131);
        QFont font;
        font.setPointSize(12);
        LabelDialog->setFont(font);
        class_box = new QComboBox(LabelDialog);
        class_box->addItem(QString());
        class_box->addItem(QString());
        class_box->addItem(QString());
        class_box->addItem(QString());
        class_box->addItem(QString());
        class_box->addItem(QString());
        class_box->addItem(QString());
        class_box->addItem(QString());
        class_box->addItem(QString());
        class_box->addItem(QString());
        class_box->addItem(QString());
        class_box->addItem(QString());
        class_box->setObjectName(QString::fromUtf8("class_box"));
        class_box->setGeometry(QRect(230, 20, 121, 31));
        class_box->setFont(font);
        class_label = new QLabel(LabelDialog);
        class_label->setObjectName(QString::fromUtf8("class_label"));
        class_label->setGeometry(QRect(180, 20, 41, 31));
        class_label->setFont(font);
        color_label = new QLabel(LabelDialog);
        color_label->setObjectName(QString::fromUtf8("color_label"));
        color_label->setGeometry(QRect(30, 20, 41, 31));
        color_label->setFont(font);
        color_box = new QComboBox(LabelDialog);
        color_box->addItem(QString());
        color_box->addItem(QString());
        color_box->addItem(QString());
        color_box->addItem(QString());
        color_box->setObjectName(QString::fromUtf8("color_box"));
        color_box->setGeometry(QRect(80, 20, 71, 31));
        color_box->setFont(font);
        deleteButton = new QPushButton(LabelDialog);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(30, 80, 81, 31));
        deleteButton->setFont(font);
        cancelButton = new QPushButton(LabelDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(150, 80, 81, 31));
        saveButton = new QPushButton(LabelDialog);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(270, 80, 81, 31));

        retranslateUi(LabelDialog);

        QMetaObject::connectSlotsByName(LabelDialog);
    } // setupUi

    void retranslateUi(QDialog *LabelDialog)
    {
        LabelDialog->setWindowTitle(QCoreApplication::translate("LabelDialog", "Dialog", nullptr));
        class_box->setItemText(0, QCoreApplication::translate("LabelDialog", "\345\223\250\345\205\265", nullptr));
        class_box->setItemText(1, QCoreApplication::translate("LabelDialog", "\350\213\261\351\233\204", nullptr));
        class_box->setItemText(2, QCoreApplication::translate("LabelDialog", "\345\267\245\347\250\213", nullptr));
        class_box->setItemText(3, QCoreApplication::translate("LabelDialog", "3\345\217\267\346\255\245\345\205\265", nullptr));
        class_box->setItemText(4, QCoreApplication::translate("LabelDialog", "4\345\217\267\346\255\245\345\205\265", nullptr));
        class_box->setItemText(5, QCoreApplication::translate("LabelDialog", "5\345\217\267\346\255\245\345\205\265", nullptr));
        class_box->setItemText(6, QCoreApplication::translate("LabelDialog", "\345\211\215\345\223\250\347\253\231", nullptr));
        class_box->setItemText(7, QCoreApplication::translate("LabelDialog", "\345\237\272\345\234\260\345\260\217\350\243\205\347\224\262", nullptr));
        class_box->setItemText(8, QCoreApplication::translate("LabelDialog", "\345\237\272\345\234\260\345\244\247\350\243\205\347\224\262", nullptr));
        class_box->setItemText(9, QCoreApplication::translate("LabelDialog", "3\345\217\267\345\271\263\350\241\241", nullptr));
        class_box->setItemText(10, QCoreApplication::translate("LabelDialog", "4\345\217\267\345\271\263\350\241\241", nullptr));
        class_box->setItemText(11, QCoreApplication::translate("LabelDialog", "5\345\217\267\345\271\263\350\241\241", nullptr));

        class_label->setText(QCoreApplication::translate("LabelDialog", "\347\261\273\345\210\253\357\274\232", nullptr));
        color_label->setText(QCoreApplication::translate("LabelDialog", "\351\242\234\350\211\262\357\274\232", nullptr));
        color_box->setItemText(0, QCoreApplication::translate("LabelDialog", "\350\223\235\350\211\262", nullptr));
        color_box->setItemText(1, QCoreApplication::translate("LabelDialog", "\347\272\242\350\211\262", nullptr));
        color_box->setItemText(2, QCoreApplication::translate("LabelDialog", "\347\206\204\347\201\255", nullptr));
        color_box->setItemText(3, QCoreApplication::translate("LabelDialog", "\347\264\253\350\211\262", nullptr));

        deleteButton->setText(QCoreApplication::translate("LabelDialog", "\345\210\240\351\231\244", nullptr));
        cancelButton->setText(QCoreApplication::translate("LabelDialog", "\345\217\226\346\266\210", nullptr));
        saveButton->setText(QCoreApplication::translate("LabelDialog", "\344\277\235\345\255\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LabelDialog: public Ui_LabelDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABELDIALOG_H
