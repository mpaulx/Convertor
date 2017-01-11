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

          // Convertire VOLUM din ->>
           ui->FromVolum->addItem("cl");
           ui->FromVolum->addItem("cm³");
           ui->FromVolum->addItem("dl");
           ui->FromVolum->addItem("dm³");
           ui->FromVolum->addItem("ft³");
           ui->FromVolum->addItem("in³");
           ui->FromVolum->addItem("l");
           ui->FromVolum->addItem("m³");
           ui->FromVolum->addItem("ml");

           // Convertire VOLUM in ->>
           ui->ToVolum->addItem("cl");
           ui->ToVolum->addItem("cm³");
           ui->ToVolum->addItem("dl");
           ui->ToVolum->addItem("dm³");
           ui->ToVolum->addItem("ft³");
           ui->ToVolum->addItem("in³");
           ui->ToVolum->addItem("l");
           ui->ToVolum->addItem("m³");
           ui->ToVolum->addItem("ml");

           // Convertire TIMP din ->>
           ui->FromTimp->addItem("s");
           ui->FromTimp->addItem("min");
           ui->FromTimp->addItem("h");
           ui->FromTimp->addItem("zi");
           ui->FromTimp->addItem("sapt");
           ui->FromTimp->addItem("lun");
           ui->FromTimp->addItem("an");
           ui->FromTimp->addItem("dec");
           ui->FromTimp->addItem("sec");


           // Convertire TIMP in ->>
           ui->ToTimp->addItem("s");
           ui->ToTimp->addItem("min");
           ui->ToTimp->addItem("h");
           ui->ToTimp->addItem("zi");
           ui->ToTimp->addItem("sapt");
           ui->ToTimp->addItem("lun");
           ui->ToTimp->addItem("an");
           ui->ToTimp->addItem("dec");
           ui->ToTimp->addItem("sec");

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


             if( FromArieComboBox == "in²"){ // Verificam daca convertim din inch
                 if (ToArieComboBox == "m²"){
                     float metru = arie.toFloat() * 0.0006452;
                     QString rezultat = QString::number(metru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "cm²"){
                     float centimetru = arie.toFloat() * 6.451999999999999;
                     QString rezultat = QString::number(centimetru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "ft²"){
                     float picior = arie.toFloat() * 0.006945102260495156;
                     QString rezultat = QString::number(picior);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "in²"){
                     float inch = arie.toFloat() * 1;
                     QString rezultat = QString::number(inch);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "km²"){
                     float kilometru = arie.toFloat() * (6.452e-10);
                     QString rezultat = QString::number(kilometru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "mm²"){
                     float milimetru = arie.toFloat() * 645.2;
                     QString rezultat = QString::number(milimetru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "ha"){
                     float hectar = arie.toFloat() * (6.452e-8);
                     QString rezultat = QString::number(hectar);
                     ui->outputArie->setText(rezultat);
                 }
      }

             if( FromArieComboBox == "km²"){ // Verificam daca convertim din kilometri
                 if (ToArieComboBox == "m²"){
                     float metru = arie.toFloat() * 1000000;
                     QString rezultat = QString::number(metru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "cm²"){
                     float centimetru = arie.toFloat() * 10000000000;
                     QString rezultat = QString::number(centimetru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "ft²"){
                     float picior = arie.toFloat() * 10764262.648008611;
                     QString rezultat = QString::number(picior);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "in²"){
                     float inch = arie.toFloat() * 1549907005.5796654;
                     QString rezultat = QString::number(inch);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "km²"){
                     float kilometru = arie.toFloat() * 1;
                     QString rezultat = QString::number(kilometru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "mm²"){
                     float milimetru = arie.toFloat() * 1000000000000;
                     QString rezultat = QString::number(milimetru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "ha"){
                     float hectar = arie.toFloat() * 100;
                     QString rezultat = QString::number(hectar);
                     ui->outputArie->setText(rezultat);
                 }
      }

             if( FromArieComboBox == "mm²"){ // Verificam daca convertim din milimetri
                 if (ToArieComboBox == "m²"){
                     float metru = arie.toFloat() * 0.000001;
                     QString rezultat = QString::number(metru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "cm²"){
                     float centimetru = arie.toFloat() * 0.009999999999999998;
                     QString rezultat = QString::number(centimetru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "ft²"){
                     float picior = arie.toFloat() * 0.000010764262648008611;
                     QString rezultat = QString::number(picior);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "in²"){
                     float inch = arie.toFloat() * 0.0015499070055796653;
                     QString rezultat = QString::number(inch);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "km²"){
                     float kilometru = arie.toFloat() * (1e-12);
                     QString rezultat = QString::number(kilometru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "mm²"){
                     float milimetru = arie.toFloat() * 1;
                     QString rezultat = QString::number(milimetru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "ha"){
                     float hectar = arie.toFloat() * (9.999999999999999e-11);
                     QString rezultat = QString::number(hectar);
                     ui->outputArie->setText(rezultat);
                 }
      }


             if( FromArieComboBox == "ha"){ // Verificam daca convertim din hectare
                 if (ToArieComboBox == "m²"){
                     float metru = arie.toFloat() * 10000;
                     QString rezultat = QString::number(metru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "cm²"){
                     float centimetru = arie.toFloat() * 100000000;
                     QString rezultat = QString::number(centimetru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "ft²"){
                     float picior = arie.toFloat() * 107642.62648008612;
                     QString rezultat = QString::number(picior);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "in²"){
                     float inch = arie.toFloat() * 15499070.055796653;
                     QString rezultat = QString::number(inch);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "km²"){
                     float kilometru = arie.toFloat() * 0.01;
                     QString rezultat = QString::number(kilometru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "mm²"){
                     float milimetru = arie.toFloat() * 10000000000;
                     QString rezultat = QString::number(milimetru);
                     ui->outputArie->setText(rezultat);
                 }
                 else if (ToArieComboBox == "ha"){
                     float hectar = arie.toFloat() * 1;
                     QString rezultat = QString::number(hectar);
                     ui->outputArie->setText(rezultat);
                 }
      }

}



    QString volum = ui->InputVolum->text();
      if (volum.length() != 0){

          QString FromVolumComboBox = ui->FromVolum->currentText();
          QString ToVolumComboBox = ui->ToVolum->currentText();

               if( FromVolumComboBox == "cl"){ // Verificam daca convertim din centilitri
                   if (ToVolumComboBox == "cl"){
                       float centilitru = volum.toFloat() * 1;
                       QString rezultat = QString::number(centilitru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "cm³"){
                       float centimetru = volum.toFloat() * 10;
                       QString rezultat = QString::number(centimetru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "dl"){
                       float decilitru = volum.toFloat() * 0.1;
                       QString rezultat = QString::number(decilitru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "dm³"){
                       float decimetru = volum.toFloat() * 0.01;
                       QString rezultat = QString::number(decimetru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "ft³"){
                       float picior = volum.toFloat() * 0.0003531;
                       QString rezultat = QString::number(picior);
                       ui->outputVolum->setText(rezultat);
                   }

                   else if (ToVolumComboBox == "in³"){
                       float inch = volum.toFloat() * 0.6102;
                       QString rezultat = QString::number(inch);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "l"){
                       float litru = volum.toFloat() * 0.01;
                       QString rezultat = QString::number(litru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "m³"){
                       float metru = volum.toFloat() * 0.00001;
                       QString rezultat = QString::number(metru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "ml"){
                       float mililitru = volum.toFloat() * 10;
                       QString rezultat = QString::number(mililitru);
                       ui->outputVolum->setText(rezultat);
                   }
               }

               if( FromVolumComboBox == "cm³"){ // Verificam daca convertim din centrimetri cubi
                   if (ToVolumComboBox == "cl"){
                       float centilitru = volum.toFloat() * 0.1;
                       QString rezultat = QString::number(centilitru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "cm³"){
                       float centimetru = volum.toFloat() * 1;
                       QString rezultat = QString::number(centimetru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "dl"){
                       float decilitru = volum.toFloat() * 0.01;
                       QString rezultat = QString::number(decilitru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "dm³"){
                       float decimetru = volum.toFloat() * 0.001;
                       QString rezultat = QString::number(decimetru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "ft³"){
                       float picior = volum.toFloat() * 0.00003531;
                       QString rezultat = QString::number(picior);
                       ui->outputVolum->setText(rezultat);
                   }

                   else if (ToVolumComboBox == "in³"){
                       float inch = volum.toFloat() * 0.06102;
                       QString rezultat = QString::number(inch);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "l"){
                       float litru = volum.toFloat() * 0.001;
                       QString rezultat = QString::number(litru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "m³"){
                       float metru = volum.toFloat() * 0.000001;
                       QString rezultat = QString::number(metru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "ml"){
                       float mililitru = volum.toFloat() * 1;
                       QString rezultat = QString::number(mililitru);
                       ui->outputVolum->setText(rezultat);
                   }
               }

               if( FromVolumComboBox == "dl"){ // Verificam daca convertim din decilitru
                   if (ToVolumComboBox == "cl"){
                       float centilitru = volum.toFloat() * 10;
                       QString rezultat = QString::number(centilitru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "cm³"){
                       float centimetru = volum.toFloat() * 100;
                       QString rezultat = QString::number(centimetru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "dl"){
                       float decilitru = volum.toFloat() * 1;
                       QString rezultat = QString::number(decilitru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "dm³"){
                       float decimetru = volum.toFloat() * 0.1;
                       QString rezultat = QString::number(decimetru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "ft³"){
                       float picior = volum.toFloat() * 0.003531;
                       QString rezultat = QString::number(picior);
                       ui->outputVolum->setText(rezultat);
                   }

                   else if (ToVolumComboBox == "in³"){
                       float inch = volum.toFloat() * 6.102;
                       QString rezultat = QString::number(inch);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "l"){
                       float litru = volum.toFloat() * 0.1;
                       QString rezultat = QString::number(litru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "m³"){
                       float metru = volum.toFloat() * 0.0001;
                       QString rezultat = QString::number(metru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "ml"){
                       float mililitru = volum.toFloat() * 100;
                       QString rezultat = QString::number(mililitru);
                       ui->outputVolum->setText(rezultat);
                   }
               }

               if( FromVolumComboBox == "dm³"){ // Verificam daca convertim din decimetri cubi
                   if (ToVolumComboBox == "cl"){
                       float centilitru = volum.toFloat() * 100;
                       QString rezultat = QString::number(centilitru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "cm³"){
                       float centimetru = volum.toFloat() * 1000;
                       QString rezultat = QString::number(centimetru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "dl"){
                       float decilitru = volum.toFloat() * 10;
                       QString rezultat = QString::number(decilitru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "dm³"){
                       float decimetru = volum.toFloat() * 1;
                       QString rezultat = QString::number(decimetru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "ft³"){
                       float picior = volum.toFloat() * 0.03531;
                       QString rezultat = QString::number(picior);
                       ui->outputVolum->setText(rezultat);
                   }

                   else if (ToVolumComboBox == "in³"){
                       float inch = volum.toFloat() * 61.02;
                       QString rezultat = QString::number(inch);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "l"){
                       float litru = volum.toFloat() * 1;
                       QString rezultat = QString::number(litru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "m³"){
                       float metru = volum.toFloat() * 0.001;
                       QString rezultat = QString::number(metru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "ml"){
                       float mililitru = volum.toFloat() * 1000;
                       QString rezultat = QString::number(mililitru);
                       ui->outputVolum->setText(rezultat);
                   }
               }

               if( FromVolumComboBox == "ft³"){ // Verificam daca convertim din ft³
                   if (ToVolumComboBox == "cl"){
                       float centilitru = volum.toFloat() * 2832;
                       QString rezultat = QString::number(centilitru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "cm³"){
                       float centimetru = volum.toFloat() * 28320;
                       QString rezultat = QString::number(centimetru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "dl"){
                       float decilitru = volum.toFloat() * 283.2;
                       QString rezultat = QString::number(decilitru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "dm³"){
                       float decimetru = volum.toFloat() * 28.32;
                       QString rezultat = QString::number(decimetru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "ft³"){
                       float picior = volum.toFloat() * 1;
                       QString rezultat = QString::number(picior);
                       ui->outputVolum->setText(rezultat);
                   }

                   else if (ToVolumComboBox == "in³"){
                       float inch = volum.toFloat() * 1728;
                       QString rezultat = QString::number(inch);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "l"){
                       float litru = volum.toFloat() * 28.32;
                       QString rezultat = QString::number(litru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "m³"){
                       float metru = volum.toFloat() * 0.02832;
                       QString rezultat = QString::number(metru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "ml"){
                       float mililitru = volum.toFloat() * 28320;
                       QString rezultat = QString::number(mililitru);
                       ui->outputVolum->setText(rezultat);
                   }
               }

               if( FromVolumComboBox == "in³"){ // Verificam daca convertim din in³
                   if (ToVolumComboBox == "cl"){
                       float centilitru = volum.toFloat() * 1.639;
                       QString rezultat = QString::number(centilitru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "cm³"){
                       float centimetru = volum.toFloat() * 16.39;
                       QString rezultat = QString::number(centimetru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "dl"){
                       float decilitru = volum.toFloat() * 0.1639;
                       QString rezultat = QString::number(decilitru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "dm³"){
                       float decimetru = volum.toFloat() * 0.01639;
                       QString rezultat = QString::number(decimetru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "ft³"){
                       float picior = volum.toFloat() * 0.0005787;
                       QString rezultat = QString::number(picior);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "in³"){
                       float inch = volum.toFloat() * 1;
                       QString rezultat = QString::number(inch);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "l"){
                       float litru = volum.toFloat() * 0.01639;
                       QString rezultat = QString::number(litru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "m³"){
                       float metru = volum.toFloat() * 0.00001639;
                       QString rezultat = QString::number(metru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "ml"){
                       float mililitru = volum.toFloat() * 16.39;
                       QString rezultat = QString::number(mililitru);
                       ui->outputVolum->setText(rezultat);
                   }
               }

               if( FromVolumComboBox == "l"){ // Verificam daca convertim din litri
                   if (ToVolumComboBox == "cl"){
                       float centilitru = volum.toFloat() * 100;
                       QString rezultat = QString::number(centilitru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "cm³"){
                       float centimetru = volum.toFloat() * 1000;
                       QString rezultat = QString::number(centimetru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "dl"){
                       float decilitru = volum.toFloat() * 10;
                       QString rezultat = QString::number(decilitru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "dm³"){
                       float decimetru = volum.toFloat() * 1;
                       QString rezultat = QString::number(decimetru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "ft³"){
                       float picior = volum.toFloat() * 0.03531;
                       QString rezultat = QString::number(picior);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "in³"){
                       float inch = volum.toFloat() * 61.02;
                       QString rezultat = QString::number(inch);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "l"){
                       float litru = volum.toFloat() * 1;
                       QString rezultat = QString::number(litru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "m³"){
                       float metru = volum.toFloat() * 0.001;
                       QString rezultat = QString::number(metru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "ml"){
                       float mililitru = volum.toFloat() * 1000;
                       QString rezultat = QString::number(mililitru);
                       ui->outputVolum->setText(rezultat);
                   }
               }

               if( FromVolumComboBox == "m³"){ // Verificam daca convertim din m³
                   if (ToVolumComboBox == "cl"){
                       float centilitru = volum.toFloat() * 100000;
                       QString rezultat = QString::number(centilitru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "cm³"){
                       float centimetru = volum.toFloat() * 1000000;
                       QString rezultat = QString::number(centimetru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "dl"){
                       float decilitru = volum.toFloat() * 10000;
                       QString rezultat = QString::number(decilitru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "dm³"){
                       float decimetru = volum.toFloat() * 1000;
                       QString rezultat = QString::number(decimetru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "ft³"){
                       float picior = volum.toFloat() * 35.31;
                       QString rezultat = QString::number(picior);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "in³"){
                       float inch = volum.toFloat() * 61020;
                       QString rezultat = QString::number(inch);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "l"){
                       float litru = volum.toFloat() * 1000;
                       QString rezultat = QString::number(litru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "m³"){
                       float metru = volum.toFloat() * 1;
                       QString rezultat = QString::number(metru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "ml"){
                       float mililitru = volum.toFloat() * 1000000;
                       QString rezultat = QString::number(mililitru);
                       ui->outputVolum->setText(rezultat);
                   }
               }


               if( FromVolumComboBox == "ml"){ // Verificam daca convertim din ml
                   if (ToVolumComboBox == "cl"){
                       float centilitru = volum.toFloat() * 0.1;
                       QString rezultat = QString::number(centilitru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "cm³"){
                       float centimetru = volum.toFloat() * 1;
                       QString rezultat = QString::number(centimetru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "dl"){
                       float decilitru = volum.toFloat() * 0.01;
                       QString rezultat = QString::number(decilitru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "dm³"){
                       float decimetru = volum.toFloat() * 0.001;
                       QString rezultat = QString::number(decimetru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "ft³"){
                       float picior = volum.toFloat() * 0.00003531;
                       QString rezultat = QString::number(picior);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "in³"){
                       float inch = volum.toFloat() * 0.06102;
                       QString rezultat = QString::number(inch);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "l"){
                       float litru = volum.toFloat() * 0.001;
                       QString rezultat = QString::number(litru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "m³"){
                       float metru = volum.toFloat() * 0.000001;
                       QString rezultat = QString::number(metru);
                       ui->outputVolum->setText(rezultat);
                   }
                   else if (ToVolumComboBox == "ml"){
                       float mililitru = volum.toFloat() * 1;
                       QString rezultat = QString::number(mililitru);
                       ui->outputVolum->setText(rezultat);
                   }
               }
}



    QString timp = ui->inputTimp->text();
      if (timp.length() != 0){

            QString FromTimpComboBox = ui->FromTimp->currentText();
            QString ToTimpCombobox = ui->ToTimp->currentText();

                 if( FromTimpComboBox == "s"){ // Verificam daca convertim din secunde
                     if (ToTimpCombobox == "s"){
                         float secunda = timp.toFloat() * 1;
                         QString rezultat = QString::number(secunda);
                         ui->outputVolum->setText(rezultat);
                     }
                     else if (ToTimpCombobox == "min"){
                         float minut = timp.toFloat() * 0.01667;
                         QString rezultat = QString::number(minut);
                         ui->outputVolum->setText(rezultat);
                     }
                     else if (ToTimpCombobox == "h"){
                         float ora = timp.toFloat() * 0.0002778;
                         QString rezultat = QString::number(ora);
                         ui->outputVolum->setText(rezultat);
                     }
                     else if (ToTimpCombobox == "zi"){
                         float zi = timp.toFloat() * 0.00001157;
                         QString rezultat = QString::number(zi);
                         ui->outputVolum->setText(rezultat);
                     }
                     else if (ToTimpCombobox == "sapt"){
                         float saptamana = timp.toFloat() * 0.000001653;
                         QString rezultat = QString::number(saptamana);
                         ui->outputVolum->setText(rezultat);
                     }
                     else if (ToTimpCombobox == "lun"){
                         float luna = timp.toFloat() * 0.0000003803;
                         QString rezultat = QString::number(luna);
                         ui->outputVolum->setText(rezultat);
                     }
                     else if (ToTimpCombobox == "an"){
                         float an = timp.toFloat() * 0.00000003169;
                         QString rezultat = QString::number(an);
                         ui->outputVolum->setText(rezultat);
                     }
                     else if (ToTimpCombobox == "dec"){
                         float deceniu = timp.toFloat() * 0.000000003169;
                         QString rezultat = QString::number(deceniu);
                         ui->outputVolum->setText(rezultat);
                     }
                     else if (ToTimpCombobox == "sec"){
                         float secol = timp.toFloat() * 0.0000000003169;
                         QString rezultat = QString::number(secol);
                         ui->outputVolum->setText(rezultat);
                     }

                 }

                 if( FromTimpComboBox == "min"){ // Verificam daca convertim din minute
                     if (ToTimpCombobox == "s"){
                         float secunda = timp.toFloat() * 60;
                         QString rezultat = QString::number(secunda);
                         ui->outputVolum->setText(rezultat);
                     }
                     else if (ToTimpCombobox == "min"){
                         float minut = timp.toFloat() * 1;
                         QString rezultat = QString::number(minut);
                         ui->outputVolum->setText(rezultat);
                     }
                     else if (ToTimpCombobox == "h"){
                         float ora = timp.toFloat() * 0.01667;
                         QString rezultat = QString::number(ora);
                         ui->outputVolum->setText(rezultat);
                     }
                     else if (ToTimpCombobox == "zi"){
                         float zi = timp.toFloat() * 0.0006944;
                         QString rezultat = QString::number(zi);
                         ui->outputVolum->setText(rezultat);
                     }
                     else if (ToTimpCombobox == "sapt"){
                         float saptamana = timp.toFloat() * 0.00009921;
                         QString rezultat = QString::number(saptamana);
                         ui->outputVolum->setText(rezultat);
                     }
                     else if (ToTimpCombobox == "lun"){
                         float luna = timp.toFloat() * 0.00002282;
                         QString rezultat = QString::number(luna);
                         ui->outputVolum->setText(rezultat);
                     }
                     else if (ToTimpCombobox == "an"){
                         float an = timp.toFloat() * 0.000001901;
                         QString rezultat = QString::number(an);
                         ui->outputVolum->setText(rezultat);
                     }
                     else if (ToTimpCombobox == "dec"){
                         float deceniu = timp.toFloat() * 0.0000001901;
                         QString rezultat = QString::number(deceniu);
                         ui->outputVolum->setText(rezultat);
                     }
                     else if (ToTimpCombobox == "sec"){
                         float secol = timp.toFloat() * 0.00000001901;
                         QString rezultat = QString::number(secol);
                         ui->outputVolum->setText(rezultat);
                     }

                 }

                 if( FromTimpComboBox == "h"){ // Verificam daca convertim din ore
                     if (ToTimpCombobox == "s"){
                         float secunda = timp.toFloat() * 3600;
                         QString rezultat = QString::number(secunda);
                         ui->outputVolum->setText(rezultat);
                     }
                     else if (ToTimpCombobox == "min"){
                         float minut = timp.toFloat() * 60;
                         QString rezultat = QString::number(minut);
                         ui->outputVolum->setText(rezultat);
                     }
                     else if (ToTimpCombobox == "h"){
                         float ora = timp.toFloat() * 1;
                         QString rezultat = QString::number(ora);
                         ui->outputVolum->setText(rezultat);
                     }
                     else if (ToTimpCombobox == "zi"){
                         float zi = timp.toFloat() * 0.04167;
                         QString rezultat = QString::number(zi);
                         ui->outputVolum->setText(rezultat);
                     }
                     else if (ToTimpCombobox == "sapt"){
                         float saptamana = timp.toFloat() * 0.005952;
                         QString rezultat = QString::number(saptamana);
                         ui->outputVolum->setText(rezultat);
                     }
                     else if (ToTimpCombobox == "lun"){
                         float luna = timp.toFloat() * 0.001369;
                         QString rezultat = QString::number(luna);
                         ui->outputVolum->setText(rezultat);
                     }
                     else if (ToTimpCombobox == "an"){
                         float an = timp.toFloat() * 0.0001141;
                         QString rezultat = QString::number(an);
                         ui->outputVolum->setText(rezultat);
                     }
                     else if (ToTimpCombobox == "dec"){
                         float deceniu = timp.toFloat() * 0.00001141;
                         QString rezultat = QString::number(deceniu);
                         ui->outputVolum->setText(rezultat);
                     }
                     else if (ToTimpCombobox == "sec"){
                         float secol = timp.toFloat() * 0.000001141;
                         QString rezultat = QString::number(secol);
                         ui->outputVolum->setText(rezultat);
                     }

                 }
      }
}

