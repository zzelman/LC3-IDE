#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include <iostream>

MainWindow::MainWindow(QWidget* parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
//	this->setCentralWidget(ui->textEdit);
    setWindowTitle("LC3 IDE");

}


MainWindow::~MainWindow()
{
	delete ui;
}


void MainWindow::on_actionNew_triggered()
{
	m_fileName = "";
	ui->textEdit->setPlainText("");
}


void MainWindow::on_actionOpen_triggered()
{
	QString file = QFileDialog::getOpenFileName(this, "Open a file");

	if (!file.isEmpty())
	{
		QFile sFile(file);
		if (sFile.open(QFile::ReadOnly | QFile::Text))
		{
			m_fileName = file;

			QTextStream in(&sFile);
			QString text = in.readAll();
			sFile.close();

			ui->textEdit->setPlainText(text);
		}
	}
}


void MainWindow::on_actionSave_triggered()
{
	if (m_fileName == "")
	{
		return;
	}

	QFile sFile(m_fileName);
	if (sFile.open(QFile::WriteOnly | QFile::Text))
	{
		QTextStream out(&sFile);

		out << ui->textEdit->toPlainText();

		sFile.flush();
		sFile.close();
	}
}


void MainWindow::on_actionSave_As_triggered()
{
	QString file = QFileDialog::getOpenFileName(this, "Open a file");

	if (!file.isEmpty())
	{
		m_fileName = file;
		on_actionSave_triggered();
	}
}


void MainWindow::on_actionCopy_triggered()
{
	ui->textEdit->copy();
}


void MainWindow::on_actionCut_triggered()
{
	ui->textEdit->cut();
}


void MainWindow::on_actionPaste_triggered()
{
	ui->textEdit->paste();
}


void MainWindow::on_actionUndo_triggered()
{
	ui->textEdit->undo();
}


void MainWindow::on_actionRedo_triggered()
{
	ui->textEdit->redo();
}


void MainWindow::on_actionCompile_triggered()
{
    on_actionSave_triggered();

    QString fileName            = "compileLog.txt";
    std::string fileName_std    = "compileLog.txt";

    QFile file(fileName);
    if (file.open(QFile::WriteOnly | QFile::Text))
    {
        file.close();

        // remove old log
        std::string removeCommand = "rm ";
        removeCommand.append(fileName_std);
        std::system(removeCommand.c_str());

        // assemble
        std::string compileCommand = "lc3as \"";
        compileCommand.append(m_fileName.toUtf8().constData());
        compileCommand.append("\"");
        compileCommand.append(" >> ");
        compileCommand.append(fileName_std);

        // compileCommand should now look like: lc3as "[this file]" >> compileLog.txt
        std::system(compileCommand.c_str());

        // show compile log in log console
        QString file(fileName);

        QFile sFile(file);
        if (sFile.open(QFile::ReadOnly | QFile::Text))
        {
            QTextStream in(&sFile);
            QString text = in.readAll();
            sFile.close();

            ui->console->setPlainText(text);
        }
    }
}

void MainWindow::on_actionRun_triggered()
{
    std::string run("lc3sim-tk \"");
    run.append(m_fileName.toUtf8().constData());
    run.erase(run.end()-3, run.end());
    run.append("obj");
    run.append("\" &");

    std::system(run.c_str());
}
