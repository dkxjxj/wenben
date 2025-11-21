/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "codeeditor.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionFind;
    QAction *actionReplace;
    QAction *actionFont;
    QAction *actionLineWrap;
    QAction *actionToolbar;
    QAction *actionStatusBar;
    QAction *actionRedo;
    QAction *actionSelectAll;
    QAction *actionAbout;
    QAction *actionLineNumbers;
    QAction *actionTextColor;
    QAction *actionBackgroundColor;
    QAction *actionTextBackgroundColor;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    CodeEditor *textEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_E;
    QMenu *menu_O;
    QMenu *menu_V;
    QMenu *menu_H;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ruanjian/qtapp/MyNotepad/img/new.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionNew->setIcon(icon);
        actionNew->setMenuRole(QAction::MenuRole::NoRole);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ruanjian/qtapp/MyNotepad/img/OpenFile.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionOpen->setIcon(icon1);
        actionOpen->setMenuRole(QAction::MenuRole::NoRole);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ruanjian/qtapp/MyNotepad/img/save.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSave->setIcon(icon2);
        actionSave->setMenuRole(QAction::MenuRole::NoRole);
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName("actionSaveAs");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ruanjian/qtapp/MyNotepad/img/save-as.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSaveAs->setIcon(icon3);
        actionSaveAs->setMenuRole(QAction::MenuRole::NoRole);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/ruanjian/qtapp/MyNotepad/img/exit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionExit->setIcon(icon4);
        actionExit->setMenuRole(QAction::MenuRole::NoRole);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/ruanjian/qtapp/MyNotepad/img/undo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionUndo->setIcon(icon5);
        actionUndo->setMenuRole(QAction::MenuRole::NoRole);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName("actionCut");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/ruanjian/qtapp/MyNotepad/img/cut.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCut->setIcon(icon6);
        actionCut->setMenuRole(QAction::MenuRole::NoRole);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/ruanjian/qtapp/MyNotepad/img/copy.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCopy->setIcon(icon7);
        actionCopy->setMenuRole(QAction::MenuRole::NoRole);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/ruanjian/qtapp/MyNotepad/img/paste.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPaste->setIcon(icon8);
        actionPaste->setMenuRole(QAction::MenuRole::NoRole);
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName("actionFind");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/ruanjian/qtapp/MyNotepad/img/find.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionFind->setIcon(icon9);
        actionFind->setMenuRole(QAction::MenuRole::NoRole);
        actionReplace = new QAction(MainWindow);
        actionReplace->setObjectName("actionReplace");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/ruanjian/qtapp/MyNotepad/img/replace.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionReplace->setIcon(icon10);
        actionReplace->setMenuRole(QAction::MenuRole::NoRole);
        actionFont = new QAction(MainWindow);
        actionFont->setObjectName("actionFont");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/ruanjian/qtapp/MyNotepad/img/font.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionFont->setIcon(icon11);
        actionFont->setMenuRole(QAction::MenuRole::NoRole);
        actionLineWrap = new QAction(MainWindow);
        actionLineWrap->setObjectName("actionLineWrap");
        actionLineWrap->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/ruanjian/qtapp/MyNotepad/img/wrap.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionLineWrap->setIcon(icon12);
        actionLineWrap->setMenuRole(QAction::MenuRole::NoRole);
        actionToolbar = new QAction(MainWindow);
        actionToolbar->setObjectName("actionToolbar");
        actionToolbar->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/ruanjian/qtapp/MyNotepad/img/tool.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionToolbar->setIcon(icon13);
        actionToolbar->setMenuRole(QAction::MenuRole::NoRole);
        actionStatusBar = new QAction(MainWindow);
        actionStatusBar->setObjectName("actionStatusBar");
        actionStatusBar->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/ruanjian/qtapp/MyNotepad/img/state.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionStatusBar->setIcon(icon14);
        actionStatusBar->setMenuRole(QAction::MenuRole::NoRole);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName("actionRedo");
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/ruanjian/qtapp/MyNotepad/img/redo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionRedo->setIcon(icon15);
        actionRedo->setMenuRole(QAction::MenuRole::NoRole);
        actionSelectAll = new QAction(MainWindow);
        actionSelectAll->setObjectName("actionSelectAll");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/ruanjian/qtapp/MyNotepad/img/select-all.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSelectAll->setIcon(icon16);
        actionSelectAll->setMenuRole(QAction::MenuRole::NoRole);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/ruanjian/qtapp/MyNotepad/img/about.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionAbout->setIcon(icon17);
        actionAbout->setMenuRole(QAction::MenuRole::NoRole);
        actionLineNumbers = new QAction(MainWindow);
        actionLineNumbers->setObjectName("actionLineNumbers");
        actionLineNumbers->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/ruanjian/qtapp/MyNotepad/img/show_line.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionLineNumbers->setIcon(icon18);
        actionLineNumbers->setMenuRole(QAction::MenuRole::NoRole);
        actionTextColor = new QAction(MainWindow);
        actionTextColor->setObjectName("actionTextColor");
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/ruanjian/qtapp/MyNotepad/img/fontcolor.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionTextColor->setIcon(icon19);
        actionTextColor->setMenuRole(QAction::MenuRole::NoRole);
        actionBackgroundColor = new QAction(MainWindow);
        actionBackgroundColor->setObjectName("actionBackgroundColor");
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/ruanjian/qtapp/MyNotepad/img/backgroundcolor.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionBackgroundColor->setIcon(icon20);
        actionBackgroundColor->setMenuRole(QAction::MenuRole::NoRole);
        actionTextBackgroundColor = new QAction(MainWindow);
        actionTextBackgroundColor->setObjectName("actionTextBackgroundColor");
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/ruanjian/qtapp/MyNotepad/img/editor-text-background-color.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionTextBackgroundColor->setIcon(icon21);
        actionTextBackgroundColor->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        textEdit = new CodeEditor(centralwidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_E = new QMenu(menubar);
        menu_E->setObjectName("menu_E");
        menu_O = new QMenu(menubar);
        menu_O->setObjectName("menu_O");
        menu_V = new QMenu(menubar);
        menu_V->setObjectName("menu_V");
        menu_H = new QMenu(menubar);
        menu_H->setObjectName("menu_H");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_O->menuAction());
        menubar->addAction(menu_V->menuAction());
        menubar->addAction(menu_H->menuAction());
        menu->addAction(actionNew);
        menu->addAction(actionOpen);
        menu->addAction(actionSave);
        menu->addAction(actionSaveAs);
        menu->addSeparator();
        menu->addAction(actionExit);
        menu_E->addAction(actionUndo);
        menu_E->addAction(actionRedo);
        menu_E->addAction(actionCut);
        menu_E->addAction(actionCopy);
        menu_E->addAction(actionPaste);
        menu_E->addSeparator();
        menu_E->addAction(actionFind);
        menu_E->addAction(actionReplace);
        menu_E->addSeparator();
        menu_E->addAction(actionSelectAll);
        menu_O->addAction(actionLineWrap);
        menu_O->addAction(actionLineNumbers);
        menu_O->addAction(actionFont);
        menu_O->addAction(actionTextColor);
        menu_O->addSeparator();
        menu_O->addAction(actionTextBackgroundColor);
        menu_O->addAction(actionBackgroundColor);
        menu_V->addAction(actionToolbar);
        menu_V->addAction(actionStatusBar);
        menu_H->addAction(actionAbout);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionSaveAs);
        toolBar->addSeparator();
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addAction(actionCut);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);
        toolBar->addSeparator();
        toolBar->addAction(actionFind);
        toolBar->addAction(actionReplace);
        toolBar->addSeparator();
        toolBar->addAction(actionFont);
        toolBar->addAction(actionLineNumbers);
        toolBar->addAction(actionLineWrap);
        toolBar->addSeparator();
        toolBar->addAction(actionToolbar);
        toolBar->addAction(actionStatusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\357\274\210&N\357\274\211", nullptr));
#if QT_CONFIG(tooltip)
        actionNew->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", nullptr));
#if QT_CONFIG(tooltip)
        actionSave->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaveAs->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&A)", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveAs->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272(&X)", nullptr));
#if QT_CONFIG(tooltip)
        actionExit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actionUndo->setText(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200(&U)", nullptr));
#if QT_CONFIG(tooltip)
        actionUndo->setToolTip(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207(&T)", nullptr));
#if QT_CONFIG(tooltip)
        actionCut->setToolTip(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266(&C)", nullptr));
#if QT_CONFIG(tooltip)
        actionCopy->setToolTip(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264(&P)", nullptr));
#if QT_CONFIG(tooltip)
        actionPaste->setToolTip(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276(&F)", nullptr));
#if QT_CONFIG(tooltip)
        actionFind->setToolTip(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionFind->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionReplace->setText(QCoreApplication::translate("MainWindow", "\346\233\277\346\215\242(&H)", nullptr));
#if QT_CONFIG(tooltip)
        actionReplace->setToolTip(QCoreApplication::translate("MainWindow", "\346\233\277\346\215\242", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionReplace->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFont->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223(&F)", nullptr));
#if QT_CONFIG(tooltip)
        actionFont->setToolTip(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLineWrap->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\346\215\242\350\241\214(&W)", nullptr));
#if QT_CONFIG(tooltip)
        actionLineWrap->setToolTip(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\346\215\242\350\241\214", nullptr));
#endif // QT_CONFIG(tooltip)
        actionToolbar->setText(QCoreApplication::translate("MainWindow", "\345\267\245\345\205\267\346\240\217(&T)", nullptr));
#if QT_CONFIG(tooltip)
        actionToolbar->setToolTip(QCoreApplication::translate("MainWindow", "\345\267\245\345\205\267\346\240\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatusBar->setText(QCoreApplication::translate("MainWindow", "\347\212\266\346\200\201\346\240\217(&S)", nullptr));
#if QT_CONFIG(tooltip)
        actionStatusBar->setToolTip(QCoreApplication::translate("MainWindow", "\347\212\266\346\200\201\346\240\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRedo->setText(QCoreApplication::translate("MainWindow", "\346\201\242\345\244\215(&)", nullptr));
#if QT_CONFIG(tooltip)
        actionRedo->setToolTip(QCoreApplication::translate("MainWindow", "\346\201\242\345\244\215", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelectAll->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211(&A)", nullptr));
#if QT_CONFIG(tooltip)
        actionSelectAll->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSelectAll->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216(&A)", nullptr));
#if QT_CONFIG(tooltip)
        actionAbout->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLineNumbers->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\350\241\214\345\217\267(&L)", nullptr));
#if QT_CONFIG(tooltip)
        actionLineNumbers->setToolTip(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\350\241\214\345\217\267", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionLineNumbers->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTextColor->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
#if QT_CONFIG(tooltip)
        actionTextColor->setToolTip(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
#endif // QT_CONFIG(tooltip)
        actionBackgroundColor->setText(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221\345\231\250\350\203\214\346\231\257\350\211\262", nullptr));
#if QT_CONFIG(tooltip)
        actionBackgroundColor->setToolTip(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221\345\231\250\350\203\214\346\231\257\350\211\262", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTextBackgroundColor->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223\350\203\214\346\231\257\350\211\262", nullptr));
#if QT_CONFIG(tooltip)
        actionTextBackgroundColor->setToolTip(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223\350\203\214\346\231\257\350\211\262", nullptr));
#endif // QT_CONFIG(tooltip)
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\357\274\210&F\357\274\211", nullptr));
        menu_E->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221\357\274\210E\357\274\211", nullptr));
        menu_O->setTitle(QCoreApplication::translate("MainWindow", "\346\240\274\345\274\217\357\274\210O\357\274\211", nullptr));
        menu_V->setTitle(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\357\274\210V\357\274\211", nullptr));
        menu_H->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251\357\274\210H\357\274\211", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
