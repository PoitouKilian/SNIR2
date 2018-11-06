#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


//Push Boutton



void MainWindow::on_pushButtonLinux_clicked()
{
    ui->textBrowserAffichage->append("Bouton Linux");
}

void MainWindow::on_pushButtonWindows_clicked()
{
    ui->textBrowserAffichage->append("Bouton Windows");
}

void MainWindow::on_pushButtonOSXLion_clicked()
{
    ui->textBrowserAffichage->append("Bouton OS X Lion");
}


//Bouton Radio



void MainWindow::on_radioButtonWindows_clicked()
{
    ui->textBrowserAffichage->append("Radio Windows");
}

void MainWindow::on_radioButtonOSXLion_clicked()
{
    ui->textBrowserAffichage->append("Radio OS X Lion");
}

void MainWindow::on_radioButtonLinux_clicked()
{
    ui->textBrowserAffichage->append("Radio Linux");
}


//Bouton Coche



void MainWindow::on_checkBoxLinux_stateChanged(int arg1)
{
    if(arg1==2)
    {
        ui->textBrowserAffichage->append("Linux coche");
    }
    else
    {
        ui->textBrowserAffichage->append("Linux decoche");
    }

}

void MainWindow::on_checkBoxOSXLion_stateChanged(int arg1)
{
    if(arg1==2)
    {
        ui->textBrowserAffichage->append("OS X Lion coche");
    }
    else
    {
        ui->textBrowserAffichage->append("OS X Lion decoche");
    }
}

void MainWindow::on_checkBoxWindows_stateChanged(int arg1)
{
    if(arg1==2)
    {
        ui->textBrowserAffichage->append("Windows coche");
    }
    else
    {
        ui->textBrowserAffichage->append("Windows decoche");
    }
}


//Combo Box


void MainWindow::on_comboBoxOS_currentTextChanged(const QString &arg1)
{
    ui->textBrowserAffichage->append(arg1);
}


//Ecriture Text

void MainWindow::on_lineEditEcriture_textChanged(const QString &arg1)
{
    ui->textBrowserAffichage->append(arg1);
}



//Barre d'outil


void MainWindow::on_actionJava_triggered()
{
    ui->textBrowserAffichage->append("Java");
}

void MainWindow::on_actionC_triggered()
{
    ui->textBrowserAffichage->append("C");
}

void MainWindow::on_actionCpp_triggered()
{
    ui->textBrowserAffichage->append("C++");
}

void MainWindow::on_actionPHP_triggered()
{
    ui->textBrowserAffichage->append("PHP");
}

void MainWindow::on_actionJavascript_triggered()
{
    ui->textBrowserAffichage->append("Javascript");
}
