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


       // Convertire ARIE din ->>
          ui->FromArie->addItem("m²");
          ui->FromArie->addItem("cm²");
          ui->FromArie->addItem("ft²");
          ui->FromArie->addItem("in²");
          ui->FromArie->addItem("km²");
          ui->FromArie->addItem("mm²");
          ui->FromArie->addItem("ha");

          // Convertire ARIE in ->>
          ui->ToArie->addItem("m²");
          ui->ToArie->addItem("cm²");
          ui->ToArie->addItem("ft²");
          ui->ToArie->addItem("in²");
          ui->ToArie->addItem("km²");
          ui->ToArie->addItem("mm²");
          ui->ToArie->addItem("ha");

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


            if( FromLungimeComboBox == "km"){ // Verificam daca convertim din kilometri
                      if (toLungimeComboBox == "m"){
                          float metru = lungime.toFloat() * 1000;
                          QString rezultat = QString::number(metru);
                          ui->outputLungime->setText(rezultat);
                      }

                       else if (toLungimeComboBox == "cm"){
                           float centimetru = lungime.toFloat() * 100000;
                           QString rezultat = QString::number(centimetru);
                           ui->outputLungime->setText(rezultat);
                       }
                       else if (toLungimeComboBox == "ft"){
                          float picior = lungime.toFloat() * 3280.839895013123;
                          QString rezultat = QString::number(picior);
                          ui->outputLungime->setText(rezultat);
                      }
                       else if (toLungimeComboBox == "in"){
                          float inch = lungime.toFloat() * 39370.078740157485;
                          QString rezultat = QString::number(inch);
                          ui->outputLungime->setText(rezultat);
                      }
                       else if (toLungimeComboBox == "km"){
                          float kilometru = lungime.toFloat() * 1;
                          QString rezultat = QString::number(kilometru);
                          ui->outputLungime->setText(rezultat);
                      }
                       else if (toLungimeComboBox == "mm"){
                          float milimetru = lungime.toFloat() * 1000000;
                          QString rezultat = QString::number(milimetru);
                          ui->outputLungime->setText(rezultat);
                      }


                  }


            if( FromLungimeComboBox == "mm"){ // Verificam daca convertim din milimetri
                      if (toLungimeComboBox == "m"){
                          float metru = lungime.toFloat() * 0.001;
                          QString rezultat = QString::number(metru);
                          ui->outputLungime->setText(rezultat);
                      }

                       else if (toLungimeComboBox == "cm"){
                           float centimetru = lungime.toFloat() * 0.1;
                           QString rezultat = QString::number(centimetru);
                           ui->outputLungime->setText(rezultat);
                       }
                       else if (toLungimeComboBox == "ft"){
                          float picior = lungime.toFloat() * 0.0032808398950131233;
                          QString rezultat = QString::number(picior);
                          ui->outputLungime->setText(rezultat);
                      }
                       else if (toLungimeComboBox == "in"){
                          float inch = lungime.toFloat() * 0.03937007874015748;
                          QString rezultat = QString::number(inch);
                          ui->outputLungime->setText(rezultat);
                      }
                       else if (toLungimeComboBox == "km"){
                          float kilometru = lungime.toFloat() * 0.000001;
                          QString rezultat = QString::number(kilometru);
                          ui->outputLungime->setText(rezultat);
                      }
                       else if (toLungimeComboBox == "mm"){
                          float milimetru = lungime.toFloat() * 1;
                          QString rezultat = QString::number(milimetru);
                          ui->outputLungime->setText(rezultat);
                      }


                  }









      }



    QString arie = ui->inputArie->text();
      if (arie.length() != 0){

          QString FromArieComboBox = ui->FromArie->currentText();
          QString ToArieComboBox = ui->ToArie->currentText();


             if( FromArieComboBox == "m²"){ // Verificam daca convertim din metri
                 if (ToArieComboBox == "m²"){
                     float metru = arie.toFloat() * 1;
                     QString rezultat = QString::number(metru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "cm²"){
                     float centimetru = arie.toFloat() * 10000;
                     QString rezultat = QString::number(centimetru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "ft²"){
                     float picior = arie.toFloat() * 10.764262648008613;
                     QString rezultat = QString::number(picior);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "in²"){
                     float inch = arie.toFloat() * 1549.9070055796653;
                     QString rezultat = QString::number(inch);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "km²"){
                     float kilometru = arie.toFloat() * 0.000001;
                     QString rezultat = QString::number(kilometru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "mm²"){
                     float milimetru = arie.toFloat() * 1000000;
                     QString rezultat = QString::number(milimetru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "ha"){
                     float hectar = arie.toFloat() * 0.0001;
                     QString rezultat = QString::number(hectar);
                     ui->outputArie->setText(rezultat);
                 }
      }

             if( FromArieComboBox == "cm²"){ // Verificam daca convertim din centimetri
                 if (ToArieComboBox == "m²"){
                     float metru = arie.toFloat() * 0.0001;
                     QString rezultat = QString::number(metru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "cm²"){
                     float centimetru = arie.toFloat() * 1;
                     QString rezultat = QString::number(centimetru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "ft²"){
                     float picior = arie.toFloat() * 0.0010764262648008613;
                     QString rezultat = QString::number(picior);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "in²"){
                     float inch = arie.toFloat() * 0.15499070055796654;
                     QString rezultat = QString::number(inch);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "km²"){
                     float kilometru = arie.toFloat() * (1e-10);
                     QString rezultat = QString::number(kilometru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "mm²"){
                     float milimetru = arie.toFloat() * 100.00000000000001;
                     QString rezultat = QString::number(milimetru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "ha"){
                     float hectar = arie.toFloat() * (1e-8);
                     QString rezultat = QString::number(hectar);
                     ui->outputArie->setText(rezultat);
                 }
      }


             if( FromArieComboBox == "ft²"){ // Verificam daca convertim din ft
                 if (ToArieComboBox == "m²"){
                     float metru = arie.toFloat() * 0.0929;
                     QString rezultat = QString::number(metru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "cm²"){
                     float centimetru = arie.toFloat() * 928.9999999999999;
                     QString rezultat = QString::number(centimetru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "ft²"){
                     float picior = arie.toFloat() * 1;
                     QString rezultat = QString::number(picior);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "in²"){
                     float inch = arie.toFloat() * 143.9863608183509;
                     QString rezultat = QString::number(inch);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "km²"){
                     float kilometru = arie.toFloat() * (9.289999999999999e-8);
                     QString rezultat = QString::number(kilometru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "mm²"){
                     float milimetru = arie.toFloat() * 92900;
                     QString rezultat = QString::number(milimetru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "ha"){
                     float hectar = arie.toFloat() * 0.000009289999999999999;
                     QString rezultat = QString::number(hectar);
                     ui->outputArie->setText(rezultat);
                 }
      }


}
}

