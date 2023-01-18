#include "mainwindow.h"

#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

//MainWindow::MainWindow(QWidget *parent)
//    : QMainWindow(parent)
//{

//    ui = new Ui::MainWindow;
//    ui->setupUi(this);
//}

MainWindow::~MainWindow()
{
    delete ui;
}



// file menu
void MainWindow::on_actionOpen_triggered()
{
    QString fileContent;
    // save the file to disk
    QString filename = QFileDialog::getOpenFileName(this, "Open File");

    if(filename.isEmpty())
    {
        return;
    }

    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return;
    }
    QTextStream in(&file);
    QString line = in.readLine();

    while(!line.isNull())
    {
        fileContent.append(line);
        fileContent.append("\n");
        line = in.readLine();
    }
    file.close();
    ui -> textEdit -> clear();
    ui -> textEdit -> setPlainText(fileContent);
}


void MainWindow::on_actionSave_triggered()
{

}


void MainWindow::on_actionSave_As_triggered()
{
    // save the file to disk
    QString filename = QFileDialog::getSaveFileName(this, "Save As");
    if(filename.isEmpty())
    {
        return;
    }
    QFile file(filename);

    // Open the file
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        return;
    }
    QTextStream out(&file);
    out << ui -> textEdit -> toPlainText() << "\n";

    file.close();
}


void MainWindow::on_actionNew_triggered()
{

}


void MainWindow::on_actionNew_Window_triggered()
{

}


void MainWindow::on_actionPage_Setup_triggered()
{

}


void MainWindow::on_actionPrint_triggered()
{

}


void MainWindow::on_actionExit_triggered()
{

}


// edit menu



void MainWindow::on_actionUndo_triggered()
{

}


void MainWindow::on_actionCut_triggered()
{

}


void MainWindow::on_actionCopy_triggered()
{

}


void MainWindow::on_actionPaste_triggered()
{

}


void MainWindow::on_actionDelete_triggered()
{

}

