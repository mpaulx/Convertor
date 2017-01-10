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

    QString lungime = ui->inputLungime->text();
      if (lungime.length() != 0){
         QString FromLungimeComboBox = ui->FromLungime->currentText();
         QString toLungimeComboBox = ui->ToLungime->currentText();
           // qDebug(qUtf8Printable(FromLungimeComboBox));

            if( FromLungimeComboBox == "m"){ // Verificam daca convertim din metri
                if (toLungimeComboBox == "m"){
                    float metru = lungime.toFloat() * 1;
                    QString rezultat = QString::number(metru);
                    ui->outputLungime->setText(rezultat);
                }

                 else if (toLungimeComboBox == "cm"){
                     float centimetru = lungime.toFloat() * 100;
                     QString rezultat = QString::number(centimetru);
                     ui->outputLungime->setText(rezultat);
                 }
                 else if (toLungimeComboBox == "ft"){
                    float picior = lungime.toFloat() * 3.280839895013123;
                    QString rezultat = QString::number(picior);
                    ui->outputLungime->setText(rezultat);
                }
                 else if (toLungimeComboBox == "in"){
                    float inch = lungime.toFloat() * 39.37007;
                    QString rezultat = QString::number(inch);
                    ui->outputLungime->setText(rezultat);
                }
                 else if (toLungimeComboBox == "km"){
                    float kilometru = lungime.toFloat() * 0.001;
                    QString rezultat = QString::number(kilometru);
                    ui->outputLungime->setText(rezultat);
                }
                 else if (toLungimeComboBox == "mm"){
                    float milimetru = lungime.toFloat() * 1000;
                    QString rezultat = QString::number(milimetru);
                    ui->outputLungime->setText(rezultat);
                }


            }

            if( FromLungimeComboBox == "cm"){ // Verificam daca convertim din cm
                      if (toLungimeComboBox == "m"){
                          float metru = lungime.toFloat() * 0.01;
                          QString rezultat = QString::number(metru);
                          ui->outputLungime->setText(rezultat);
                      }

                       else if (toLungimeComboBox == "cm"){
                           float centimetru = lungime.toFloat() * 1;
                           QString rezultat = QString::number(centimetru);
                           ui->outputLungime->setText(rezultat);
                       }
                       else if (toLungimeComboBox == "ft"){
                          float picior = lungime.toFloat() * 0.03280839895013123;
                          QString rezultat = QString::number(picior);
                          ui->outputLungime->setText(rezultat);
                      }
                       else if (toLungimeComboBox == "in"){
                          float inch = lungime.toFloat() * 0.3937007874015748;
                          QString rezultat = QString::number(inch);
                          ui->outputLungime->setText(rezultat);
                      }
                       else if (toLungimeComboBox == "km"){
                          float kilometru = lungime.toFloat() * 0.00001;
                          QString rezultat = QString::number(kilometru);
                          ui->outputLungime->setText(rezultat);
                      }
                       else if (toLungimeComboBox == "mm"){
                          float milimetru = lungime.toFloat() * 10;
                          QString rezultat = QString::number(milimetru);
                          ui->outputLungime->setText(rezultat);
                      }


                  }

            if( FromLungimeComboBox == "ft"){ // Verificam daca convertim din ft
                      if (toLungimeComboBox == "m"){
                          float metru = lungime.toFloat() * 0.3048;
                          QString rezultat = QString::number(metru);
                          ui->outputLungime->setText(rezultat);
                      }

                       else if (toLungimeComboBox == "cm"){
                           float centimetru = lungime.toFloat() * 30.48;
                           QString rezultat = QString::number(centimetru);
                           ui->outputLungime->setText(rezultat);
                       }
                       else if (toLungimeComboBox == "ft"){
                          float picior = lungime.toFloat() * 1;
                          QString rezultat = QString::number(picior);
                          ui->outputLungime->setText(rezultat);
                      }
                       else if (toLungimeComboBox == "in"){
                          float inch = lungime.toFloat() * 12.000000000000002;
                          QString rezultat = QString::number(inch);
                          ui->outputLungime->setText(rezultat);
                      }
                       else if (toLungimeComboBox == "km"){
                          float kilometru = lungime.toFloat() * 0.00030480000000000004;
                          QString rezultat = QString::number(kilometru);
                          ui->outputLungime->setText(rezultat);
                      }
                       else if (toLungimeComboBox == "mm"){
                          float milimetru = lungime.toFloat() * 304.8;
                          QString rezultat = QString::number(milimetru);
                          ui->outputLungime->setText(rezultat);
                      }


                  }



            if( FromLungimeComboBox == "in"){ // Verificam daca convertim din inch
                      if (toLungimeComboBox == "m"){
                          float metru = lungime.toFloat() * 0.0254;
                          QString rezultat = QString::number(metru);
                          ui->outputLungime->setText(rezultat);
                      }

                       else if (toLungimeComboBox == "cm"){
                           float centimetru = lungime.toFloat() * 2.54;
                           QString rezultat = QString::number(centimetru);
                           ui->outputLungime->setText(rezultat);
                       }
                       else if (toLungimeComboBox == "ft"){
                          float picior = lungime.toFloat() * 0.08333333333333333;
                          QString rezultat = QString::number(picior);
                          ui->outputLungime->setText(rezultat);
                      }
                       else if (toLungimeComboBox == "in"){
                          float inch = lungime.toFloat() * 1;
                          QString rezultat = QString::number(inch);
                          ui->outputLungime->setText(rezultat);
                      }
                       else if (toLungimeComboBox == "km"){
                          float kilometru = lungime.toFloat() * 0.000025399999999999997;
                          QString rezultat = QString::number(kilometru);
                          ui->outputLungime->setText(rezultat);
                      }
                       else if (toLungimeComboBox == "mm"){
                          float milimetru = lungime.toFloat() * 25.4;
                          QString rezultat = QString::number(milimetru);
                          ui->outputLungime->setText(rezultat);
                      }


                  }









      }

}
