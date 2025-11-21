/********************************************************************************
** Form generated from reading UI file 'replacedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLACEDIALOG_H
#define UI_REPLACEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ReplaceDialog
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *SearchText;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *targetText;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *cbCaseSensetive;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rbUp;
    QRadioButton *rbDown;
    QVBoxLayout *verticalLayout;
    QPushButton *btFindNext;
    QPushButton *replace;
    QPushButton *replaceAll;
    QPushButton *btCancel;

    void setupUi(QDialog *ReplaceDialog)
    {
        if (ReplaceDialog->objectName().isEmpty())
            ReplaceDialog->setObjectName("ReplaceDialog");
        ReplaceDialog->resize(435, 162);
        gridLayout_3 = new QGridLayout(ReplaceDialog);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(ReplaceDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        SearchText = new QLineEdit(ReplaceDialog);
        SearchText->setObjectName("SearchText");

        horizontalLayout->addWidget(SearchText);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(ReplaceDialog);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        targetText = new QLineEdit(ReplaceDialog);
        targetText->setObjectName("targetText");

        horizontalLayout_3->addWidget(targetText);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        cbCaseSensetive = new QCheckBox(ReplaceDialog);
        cbCaseSensetive->setObjectName("cbCaseSensetive");

        horizontalLayout_4->addWidget(cbCaseSensetive);

        groupBox = new QGroupBox(ReplaceDialog);
        groupBox->setObjectName("groupBox");
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        rbUp = new QRadioButton(groupBox);
        rbUp->setObjectName("rbUp");

        horizontalLayout_2->addWidget(rbUp);

        rbDown = new QRadioButton(groupBox);
        rbDown->setObjectName("rbDown");

        horizontalLayout_2->addWidget(rbDown);


        horizontalLayout_4->addWidget(groupBox);


        gridLayout_2->addLayout(horizontalLayout_4, 2, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        btFindNext = new QPushButton(ReplaceDialog);
        btFindNext->setObjectName("btFindNext");

        verticalLayout->addWidget(btFindNext);

        replace = new QPushButton(ReplaceDialog);
        replace->setObjectName("replace");

        verticalLayout->addWidget(replace);

        replaceAll = new QPushButton(ReplaceDialog);
        replaceAll->setObjectName("replaceAll");

        verticalLayout->addWidget(replaceAll);

        btCancel = new QPushButton(ReplaceDialog);
        btCancel->setObjectName("btCancel");

        verticalLayout->addWidget(btCancel);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(ReplaceDialog);

        QMetaObject::connectSlotsByName(ReplaceDialog);
    } // setupUi

    void retranslateUi(QDialog *ReplaceDialog)
    {
        ReplaceDialog->setWindowTitle(QCoreApplication::translate("ReplaceDialog", "\346\233\277\346\215\242", nullptr));
        label->setText(QCoreApplication::translate("ReplaceDialog", "\346\237\245\346\211\276\347\233\256\346\240\207\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("ReplaceDialog", "\346\233\277\346\215\242\344\270\272\357\274\232", nullptr));
        cbCaseSensetive->setText(QCoreApplication::translate("ReplaceDialog", "\345\214\272\345\210\206\345\244\247\345\260\217\345\206\231", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ReplaceDialog", "\346\226\271\345\220\221", nullptr));
        rbUp->setText(QCoreApplication::translate("ReplaceDialog", "\345\220\221\344\270\212(U)", nullptr));
        rbDown->setText(QCoreApplication::translate("ReplaceDialog", "\345\220\221\344\270\213(D)", nullptr));
        btFindNext->setText(QCoreApplication::translate("ReplaceDialog", "\346\237\245\346\211\276\344\270\213\344\270\200\344\270\252(F)", nullptr));
        replace->setText(QCoreApplication::translate("ReplaceDialog", "\346\233\277\346\215\242(R)", nullptr));
        replaceAll->setText(QCoreApplication::translate("ReplaceDialog", "\345\205\250\351\203\250\346\233\277\346\215\242(A)", nullptr));
        btCancel->setText(QCoreApplication::translate("ReplaceDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReplaceDialog: public Ui_ReplaceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLACEDIALOG_H
