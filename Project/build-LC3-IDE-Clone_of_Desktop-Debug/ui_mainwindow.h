/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
	QAction* actionNew;
	QAction* actionOpen;
	QAction* actionSave;
	QAction* actionSave_As;
	QAction* actionCopy;
	QAction* actionCut;
	QAction* actionPaste;
	QAction* actionUndo;
	QAction* actionRedo;
	QAction* actionCompile;
	QAction* actionRun;
	QWidget* centralWidget;
	QTextEdit* textEdit;
	QTextEdit* console;
	QLabel* sourceLable;
	QLabel* consoleLable;
	QMenuBar* menuBar;
	QMenu* menuFile;
	QMenu* menuEdit;
	QMenu* menuBuild;
	QToolBar* mainToolBar;

	void setupUi(QMainWindow* MainWindow)
	{
		if (MainWindow->objectName().isEmpty())
		{
			MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
		}
		MainWindow->resize(651, 567);
		actionNew = new QAction(MainWindow);
		actionNew->setObjectName(QString::fromUtf8("actionNew"));
		QIcon icon;
		icon.addFile(QString::fromUtf8(":/new.png"), QSize(), QIcon::Normal, QIcon::Off);
		actionNew->setIcon(icon);
		actionOpen = new QAction(MainWindow);
		actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
		QIcon icon1;
		icon1.addFile(QString::fromUtf8(":/open.png"), QSize(), QIcon::Normal, QIcon::Off);
		actionOpen->setIcon(icon1);
		actionSave = new QAction(MainWindow);
		actionSave->setObjectName(QString::fromUtf8("actionSave"));
		QIcon icon2;
		icon2.addFile(QString::fromUtf8(":/save.png"), QSize(), QIcon::Normal, QIcon::Off);
		actionSave->setIcon(icon2);
		actionSave_As = new QAction(MainWindow);
		actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
		QIcon icon3;
		icon3.addFile(QString::fromUtf8(":/saveas.png"), QSize(), QIcon::Normal, QIcon::Off);
		actionSave_As->setIcon(icon3);
		actionCopy = new QAction(MainWindow);
		actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
		QIcon icon4;
		icon4.addFile(QString::fromUtf8(":/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
		actionCopy->setIcon(icon4);
		actionCut = new QAction(MainWindow);
		actionCut->setObjectName(QString::fromUtf8("actionCut"));
		QIcon icon5;
		icon5.addFile(QString::fromUtf8(":/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
		actionCut->setIcon(icon5);
		actionPaste = new QAction(MainWindow);
		actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
		QIcon icon6;
		icon6.addFile(QString::fromUtf8(":/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
		actionPaste->setIcon(icon6);
		actionUndo = new QAction(MainWindow);
		actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
		QIcon icon7;
		icon7.addFile(QString::fromUtf8(":/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
		actionUndo->setIcon(icon7);
		actionRedo = new QAction(MainWindow);
		actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
		QIcon icon8;
		icon8.addFile(QString::fromUtf8(":/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
		actionRedo->setIcon(icon8);
		actionCompile = new QAction(MainWindow);
		actionCompile->setObjectName(QString::fromUtf8("actionCompile"));
		QIcon icon9;
		icon9.addFile(QString::fromUtf8(":/compile.png"), QSize(), QIcon::Normal, QIcon::Off);
		actionCompile->setIcon(icon9);
		actionRun = new QAction(MainWindow);
		actionRun->setObjectName(QString::fromUtf8("actionRun"));
		QIcon icon10;
		icon10.addFile(QString::fromUtf8(":/run.png"), QSize(), QIcon::Normal, QIcon::Off);
		actionRun->setIcon(icon10);
		centralWidget = new QWidget(MainWindow);
		centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
		textEdit = new QTextEdit(centralWidget);
		textEdit->setObjectName(QString::fromUtf8("textEdit"));
		textEdit->setGeometry(QRect(11, 38, 631, 331));
		console = new QTextEdit(centralWidget);
		console->setObjectName(QString::fromUtf8("console"));
		console->setGeometry(QRect(11, 394, 631, 91));
		sourceLable = new QLabel(centralWidget);
		sourceLable->setObjectName(QString::fromUtf8("sourceLable"));
		sourceLable->setGeometry(QRect(11, 11, 76, 21));
		consoleLable = new QLabel(centralWidget);
		consoleLable->setObjectName(QString::fromUtf8("consoleLable"));
		consoleLable->setGeometry(QRect(10, 370, 111, 21));
		MainWindow->setCentralWidget(centralWidget);
		menuBar = new QMenuBar(MainWindow);
		menuBar->setObjectName(QString::fromUtf8("menuBar"));
		menuBar->setGeometry(QRect(0, 0, 651, 27));
		menuFile = new QMenu(menuBar);
		menuFile->setObjectName(QString::fromUtf8("menuFile"));
		menuEdit = new QMenu(menuBar);
		menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
		menuBuild = new QMenu(menuBar);
		menuBuild->setObjectName(QString::fromUtf8("menuBuild"));
		MainWindow->setMenuBar(menuBar);
		mainToolBar = new QToolBar(MainWindow);
		mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
		MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

		menuBar->addAction(menuFile->menuAction());
		menuBar->addAction(menuEdit->menuAction());
		menuBar->addAction(menuBuild->menuAction());
		menuFile->addAction(actionNew);
		menuFile->addAction(actionOpen);
		menuFile->addSeparator();
		menuFile->addAction(actionSave);
		menuFile->addAction(actionSave_As);
		menuEdit->addAction(actionCopy);
		menuEdit->addAction(actionCut);
		menuEdit->addAction(actionPaste);
		menuEdit->addSeparator();
		menuEdit->addAction(actionUndo);
		menuEdit->addAction(actionRedo);
		menuBuild->addAction(actionCompile);
		menuBuild->addAction(actionRun);
		mainToolBar->addAction(actionOpen);
		mainToolBar->addAction(actionNew);
		mainToolBar->addAction(actionSave);
		mainToolBar->addAction(actionSave_As);
		mainToolBar->addSeparator();
		mainToolBar->addAction(actionCut);
		mainToolBar->addAction(actionCopy);
		mainToolBar->addAction(actionPaste);
		mainToolBar->addSeparator();
		mainToolBar->addAction(actionUndo);
		mainToolBar->addAction(actionRedo);
		mainToolBar->addSeparator();
		mainToolBar->addAction(actionCompile);
		mainToolBar->addAction(actionRun);

		retranslateUi(MainWindow);

		QMetaObject::connectSlotsByName(MainWindow);
	} // setupUi

	void retranslateUi(QMainWindow* MainWindow)
	{
		MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
		actionNew->setText(QApplication::translate("MainWindow", "New", 0, QApplication::UnicodeUTF8));
		actionOpen->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
		actionSave->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
		actionSave_As->setText(QApplication::translate("MainWindow", "Save As", 0, QApplication::UnicodeUTF8));
		actionCopy->setText(QApplication::translate("MainWindow", "Copy", 0, QApplication::UnicodeUTF8));
		actionCut->setText(QApplication::translate("MainWindow", "Cut", 0, QApplication::UnicodeUTF8));
		actionPaste->setText(QApplication::translate("MainWindow", "Paste", 0, QApplication::UnicodeUTF8));
		actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0, QApplication::UnicodeUTF8));
		actionRedo->setText(QApplication::translate("MainWindow", "Redo", 0, QApplication::UnicodeUTF8));
		actionCompile->setText(QApplication::translate("MainWindow", "Compile", 0, QApplication::UnicodeUTF8));
		actionRun->setText(QApplication::translate("MainWindow", "Run", 0, QApplication::UnicodeUTF8));
		sourceLable->setText(QApplication::translate("MainWindow", "LC3 Source", 0, QApplication::UnicodeUTF8));
		consoleLable->setText(QApplication::translate("MainWindow", "Compile Console", 0, QApplication::UnicodeUTF8));
		menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
		menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
		menuBuild->setTitle(QApplication::translate("MainWindow", "Build", 0, QApplication::UnicodeUTF8));
	} // retranslateUi

};

namespace Ui
{
	class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
