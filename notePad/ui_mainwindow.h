/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Untitled
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionNew;
    QAction *actionNew_Window;
    QAction *actionPage_Setup;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionSearch_with_Bing;
    QAction *actionFind;
    QAction *actionFind_Next;
    QAction *actionFind_Previous;
    QAction *actionReplace;
    QAction *actionGo_To;
    QAction *actionSelect_All;
    QAction *actionTime_Date;
    QAction *actionWord_Wrap;
    QAction *actionFont;
    QAction *actionStatus_Bar;
    QAction *actionZoom_In;
    QAction *actionZoom_Out;
    QAction *actionRestore_Default_Zoom;
    QAction *actionView_Help;
    QAction *actionSend_Feedback;
    QAction *actionAbout_Notepad;
    QAction *actionRedo;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuFormat;
    QMenu *menuView;
    QMenu *menuZoom;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Untitled)
    {
        if (Untitled->objectName().isEmpty())
            Untitled->setObjectName("Untitled");
        Untitled->resize(800, 600);
        actionOpen = new QAction(Untitled);
        actionOpen->setObjectName("actionOpen");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionSave = new QAction(Untitled);
        actionSave->setObjectName("actionSave");
        actionSave_As = new QAction(Untitled);
        actionSave_As->setObjectName("actionSave_As");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/saveAs.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon1);
        actionNew = new QAction(Untitled);
        actionNew->setObjectName("actionNew");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon2);
        actionNew_Window = new QAction(Untitled);
        actionNew_Window->setObjectName("actionNew_Window");
        actionNew_Window->setIcon(icon2);
        actionPage_Setup = new QAction(Untitled);
        actionPage_Setup->setObjectName("actionPage_Setup");
        actionPrint = new QAction(Untitled);
        actionPrint->setObjectName("actionPrint");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon3);
        actionExit = new QAction(Untitled);
        actionExit->setObjectName("actionExit");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon4);
        actionUndo = new QAction(Untitled);
        actionUndo->setObjectName("actionUndo");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon5);
        actionCut = new QAction(Untitled);
        actionCut->setObjectName("actionCut");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon6);
        actionCopy = new QAction(Untitled);
        actionCopy->setObjectName("actionCopy");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon7);
        actionPaste = new QAction(Untitled);
        actionPaste->setObjectName("actionPaste");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon8);
        actionDelete = new QAction(Untitled);
        actionDelete->setObjectName("actionDelete");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon9);
        actionSearch_with_Bing = new QAction(Untitled);
        actionSearch_with_Bing->setObjectName("actionSearch_with_Bing");
        actionFind = new QAction(Untitled);
        actionFind->setObjectName("actionFind");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFind->setIcon(icon10);
        actionFind_Next = new QAction(Untitled);
        actionFind_Next->setObjectName("actionFind_Next");
        actionFind_Previous = new QAction(Untitled);
        actionFind_Previous->setObjectName("actionFind_Previous");
        actionReplace = new QAction(Untitled);
        actionReplace->setObjectName("actionReplace");
        actionGo_To = new QAction(Untitled);
        actionGo_To->setObjectName("actionGo_To");
        actionSelect_All = new QAction(Untitled);
        actionSelect_All->setObjectName("actionSelect_All");
        actionTime_Date = new QAction(Untitled);
        actionTime_Date->setObjectName("actionTime_Date");
        actionWord_Wrap = new QAction(Untitled);
        actionWord_Wrap->setObjectName("actionWord_Wrap");
        actionFont = new QAction(Untitled);
        actionFont->setObjectName("actionFont");
        actionStatus_Bar = new QAction(Untitled);
        actionStatus_Bar->setObjectName("actionStatus_Bar");
        actionStatus_Bar->setCheckable(true);
        actionZoom_In = new QAction(Untitled);
        actionZoom_In->setObjectName("actionZoom_In");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/zoomin.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_In->setIcon(icon11);
        actionZoom_Out = new QAction(Untitled);
        actionZoom_Out->setObjectName("actionZoom_Out");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/zoomout.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_Out->setIcon(icon12);
        actionRestore_Default_Zoom = new QAction(Untitled);
        actionRestore_Default_Zoom->setObjectName("actionRestore_Default_Zoom");
        actionView_Help = new QAction(Untitled);
        actionView_Help->setObjectName("actionView_Help");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionView_Help->setIcon(icon13);
        actionSend_Feedback = new QAction(Untitled);
        actionSend_Feedback->setObjectName("actionSend_Feedback");
        actionAbout_Notepad = new QAction(Untitled);
        actionAbout_Notepad->setObjectName("actionAbout_Notepad");
        actionRedo = new QAction(Untitled);
        actionRedo->setObjectName("actionRedo");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon14);
        centralwidget = new QWidget(Untitled);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        Untitled->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Untitled);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuFormat = new QMenu(menubar);
        menuFormat->setObjectName("menuFormat");
        menuView = new QMenu(menubar);
        menuView->setObjectName("menuView");
        menuZoom = new QMenu(menuView);
        menuZoom->setObjectName("menuZoom");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        Untitled->setMenuBar(menubar);
        statusbar = new QStatusBar(Untitled);
        statusbar->setObjectName("statusbar");
        Untitled->setStatusBar(statusbar);
        toolBar = new QToolBar(Untitled);
        toolBar->setObjectName("toolBar");
        Untitled->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuFormat->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionNew_Window);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionPage_Setup);
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionDelete);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSearch_with_Bing);
        menuEdit->addAction(actionFind);
        menuEdit->addAction(actionFind_Next);
        menuEdit->addAction(actionFind_Previous);
        menuEdit->addAction(actionReplace);
        menuEdit->addAction(actionGo_To);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelect_All);
        menuEdit->addAction(actionTime_Date);
        menuFormat->addAction(actionWord_Wrap);
        menuFormat->addAction(actionFont);
        menuView->addAction(menuZoom->menuAction());
        menuView->addAction(actionStatus_Bar);
        menuZoom->addAction(actionZoom_In);
        menuZoom->addAction(actionZoom_Out);
        menuZoom->addAction(actionRestore_Default_Zoom);
        menuHelp->addAction(actionView_Help);
        menuHelp->addAction(actionSend_Feedback);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_Notepad);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave_As);
        toolBar->addAction(actionPrint);
        toolBar->addAction(actionExit);
        toolBar->addSeparator();
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addAction(actionCut);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);
        toolBar->addAction(actionFind);
        toolBar->addSeparator();
        toolBar->addAction(actionZoom_In);
        toolBar->addAction(actionZoom_Out);
        toolBar->addSeparator();
        toolBar->addAction(actionView_Help);

        retranslateUi(Untitled);

        QMetaObject::connectSlotsByName(Untitled);
    } // setupUi

    void retranslateUi(QMainWindow *Untitled)
    {
        Untitled->setWindowTitle(QCoreApplication::translate("Untitled", "MainWindow", nullptr));
        actionOpen->setText(QCoreApplication::translate("Untitled", "Open...", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("Untitled", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("Untitled", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("Untitled", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_As->setText(QCoreApplication::translate("Untitled", "Save As...", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_As->setShortcut(QCoreApplication::translate("Untitled", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew->setText(QCoreApplication::translate("Untitled", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("Untitled", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew_Window->setText(QCoreApplication::translate("Untitled", "New Window", nullptr));
#if QT_CONFIG(shortcut)
        actionNew_Window->setShortcut(QCoreApplication::translate("Untitled", "Ctrl+Shift+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPage_Setup->setText(QCoreApplication::translate("Untitled", "Page Setup...", nullptr));
        actionPrint->setText(QCoreApplication::translate("Untitled", "Print...", nullptr));
#if QT_CONFIG(shortcut)
        actionPrint->setShortcut(QCoreApplication::translate("Untitled", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("Untitled", "Exit", nullptr));
        actionUndo->setText(QCoreApplication::translate("Untitled", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("Untitled", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("Untitled", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("Untitled", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("Untitled", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("Untitled", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("Untitled", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("Untitled", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDelete->setText(QCoreApplication::translate("Untitled", "Delete", nullptr));
#if QT_CONFIG(shortcut)
        actionDelete->setShortcut(QCoreApplication::translate("Untitled", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSearch_with_Bing->setText(QCoreApplication::translate("Untitled", "Search with Bing...", nullptr));
#if QT_CONFIG(shortcut)
        actionSearch_with_Bing->setShortcut(QCoreApplication::translate("Untitled", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind->setText(QCoreApplication::translate("Untitled", "Find...", nullptr));
#if QT_CONFIG(shortcut)
        actionFind->setShortcut(QCoreApplication::translate("Untitled", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind_Next->setText(QCoreApplication::translate("Untitled", "Find Next", nullptr));
#if QT_CONFIG(shortcut)
        actionFind_Next->setShortcut(QCoreApplication::translate("Untitled", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind_Previous->setText(QCoreApplication::translate("Untitled", "Find Previous", nullptr));
#if QT_CONFIG(shortcut)
        actionFind_Previous->setShortcut(QCoreApplication::translate("Untitled", "Shift+F3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionReplace->setText(QCoreApplication::translate("Untitled", "Replace...", nullptr));
#if QT_CONFIG(shortcut)
        actionReplace->setShortcut(QCoreApplication::translate("Untitled", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGo_To->setText(QCoreApplication::translate("Untitled", "Go To...", nullptr));
#if QT_CONFIG(shortcut)
        actionGo_To->setShortcut(QCoreApplication::translate("Untitled", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelect_All->setText(QCoreApplication::translate("Untitled", "Select All", nullptr));
#if QT_CONFIG(shortcut)
        actionSelect_All->setShortcut(QCoreApplication::translate("Untitled", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTime_Date->setText(QCoreApplication::translate("Untitled", "Time/Date", nullptr));
#if QT_CONFIG(shortcut)
        actionTime_Date->setShortcut(QCoreApplication::translate("Untitled", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionWord_Wrap->setText(QCoreApplication::translate("Untitled", "Word Wrap", nullptr));
        actionFont->setText(QCoreApplication::translate("Untitled", "Font...", nullptr));
        actionStatus_Bar->setText(QCoreApplication::translate("Untitled", "Status Bar", nullptr));
        actionZoom_In->setText(QCoreApplication::translate("Untitled", "Zoom In", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_In->setShortcut(QCoreApplication::translate("Untitled", "Ctrl++", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_Out->setText(QCoreApplication::translate("Untitled", "Zoom Out", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_Out->setShortcut(QCoreApplication::translate("Untitled", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRestore_Default_Zoom->setText(QCoreApplication::translate("Untitled", "Restore Default Zoom", nullptr));
#if QT_CONFIG(shortcut)
        actionRestore_Default_Zoom->setShortcut(QCoreApplication::translate("Untitled", "Ctrl+0", nullptr));
#endif // QT_CONFIG(shortcut)
        actionView_Help->setText(QCoreApplication::translate("Untitled", "View Help", nullptr));
        actionSend_Feedback->setText(QCoreApplication::translate("Untitled", "Send Feedback", nullptr));
        actionAbout_Notepad->setText(QCoreApplication::translate("Untitled", "About Notepad", nullptr));
        actionRedo->setText(QCoreApplication::translate("Untitled", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("Untitled", "Ctrl+Shift+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        menuFile->setTitle(QCoreApplication::translate("Untitled", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("Untitled", "Edit", nullptr));
        menuFormat->setTitle(QCoreApplication::translate("Untitled", "Format", nullptr));
        menuView->setTitle(QCoreApplication::translate("Untitled", "View", nullptr));
        menuZoom->setTitle(QCoreApplication::translate("Untitled", "Zoom", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("Untitled", "Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Untitled", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Untitled: public Ui_Untitled {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
