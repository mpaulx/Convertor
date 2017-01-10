#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Convertire LUNGIME din ->>
       ui->FromLungime->addItem("m");
       ui->FromLungime->addItem("cm");
       ui->FromLungime->addItem("ft");
       ui->FromLungime->addItem("in");
       ui->FromLungime->addItem("km");
       ui->FromLungime->addItem("mm");

       // Convertire LUNGIME in ->>
       ui->ToLungime->addItem("m");
       ui->ToLungime->addItem("cm");
       ui->ToLungime->addItem("ft");
       ui->ToLungime->addItem("in");
       ui->ToLungime->addItem("km");
       ui->ToLungime->addItem("mm");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_calculeazaButton_clicked()
{



}
