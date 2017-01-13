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



    // Convertire VITEZE din ->>
    ui->FromViteza->addItem("km/h");
    ui->FromViteza->addItem("mph");
    ui->FromViteza->addItem("m/s");


    // Convertire VITEZE in ->>
    ui->ToViteza->addItem("km/h");
    ui->ToViteza->addItem("mph");
    ui->ToViteza->addItem("m/s");


    // Convertire TEMPERATURA din ->>
    ui->FromTemperatura->addItem("°C");
    ui->FromTemperatura->addItem("°F");
    ui->FromTemperatura->addItem("K");

    // Convertire TEMPERATURA in ->>
    ui->ToTemperatura->addItem("°C");
    ui->ToTemperatura->addItem("°F");
    ui->ToTemperatura->addItem("K");

    // Convertire MASA din ->>
    ui->FromMasa->addItem("mg");
    ui->FromMasa->addItem("cg");
    ui->FromMasa->addItem("g");
    ui->FromMasa->addItem("kg");
    ui->FromMasa->addItem("t");

    // Convertire MASA in ->>
    ui->ToMasa->addItem("mg");
    ui->ToMasa->addItem("cg");
    ui->ToMasa->addItem("g");
    ui->ToMasa->addItem("kg");
    ui->ToMasa->addItem("t");



    // Convertire ENERGIE din ->>
    ui->FromEnergie->addItem("J");
    ui->FromEnergie->addItem("kJ");
    ui->FromEnergie->addItem("cal");
    ui->FromEnergie->addItem("kcal");
    ui->FromEnergie->addItem("W/h");
    ui->FromEnergie->addItem("KW/h");

    // Convertire ENERGIE in ->>
    ui->ToEnergie->addItem("J");
    ui->ToEnergie->addItem("kJ");
    ui->ToEnergie->addItem("cal");
    ui->ToEnergie->addItem("kcal");
    ui->ToEnergie->addItem("W/h");
    ui->ToEnergie->addItem("KW/h");


    // Convertire PRESIUNE din ->>
    ui->FromPresiune->addItem("bar");
    ui->FromPresiune->addItem("psi");

    // Convertire PRESIUNE in ->>
    ui->ToPresiune->addItem("bar");
    ui->ToPresiune->addItem("psi");

    // Convertire DENSITATE din ->>
    ui->FromDensitate->addItem("g/ml");
    ui->FromDensitate->addItem("g/l");
    ui->FromDensitate->addItem("kg/l");
    ui->FromDensitate->addItem("mg/m³");
    ui->FromDensitate->addItem("g/m³");
    ui->FromDensitate->addItem("kg/m³");
    ui->FromDensitate->addItem("t/m³");

    // Convertire DENSITATE in ->>
    ui->ToDensitate->addItem("g/ml");
    ui->ToDensitate->addItem("g/l");
    ui->ToDensitate->addItem("kg/l");
    ui->ToDensitate->addItem("mg/m³");
    ui->ToDensitate->addItem("g/m³");
    ui->ToDensitate->addItem("kg/m³");
    ui->ToDensitate->addItem("t/m³");

    // Convertire CONSUM COMBUSTIBIL din ->>
    ui->FromConsum->addItem("l/100 km");
    ui->FromConsum->addItem("mi/gal");
    ui->FromConsum->addItem("km/l");

    // Convertire CONSUM COMBUSTIBIL in ->>
    ui->ToConsum->addItem("l/100 km");
    ui->ToConsum->addItem("mi/gal");
    ui->ToConsum->addItem("km/l");


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
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "min"){
                float minut = timp.toFloat() * 0.01667;
                QString rezultat = QString::number(minut);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "h"){
                float ora = timp.toFloat() * 0.0002778;
                QString rezultat = QString::number(ora);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "zi"){
                float zi = timp.toFloat() * 0.00001157;
                QString rezultat = QString::number(zi);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "sapt"){
                float saptamana = timp.toFloat() * 0.000001653;
                QString rezultat = QString::number(saptamana);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "lun"){
                float luna = timp.toFloat() * 0.0000003803;
                QString rezultat = QString::number(luna);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "an"){
                float an = timp.toFloat() * 0.00000003169;
                QString rezultat = QString::number(an);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "dec"){
                float deceniu = timp.toFloat() * 0.000000003169;
                QString rezultat = QString::number(deceniu);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "sec"){
                float secol = timp.toFloat() * 0.0000000003169;
                QString rezultat = QString::number(secol);
                ui->outputTimp->setText(rezultat);
            }

        }

        if( FromTimpComboBox == "min"){ // Verificam daca convertim din minute
            if (ToTimpCombobox == "s"){
                float secunda = timp.toFloat() * 60;
                QString rezultat = QString::number(secunda);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "min"){
                float minut = timp.toFloat() * 1;
                QString rezultat = QString::number(minut);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "h"){
                float ora = timp.toFloat() * 0.01667;
                QString rezultat = QString::number(ora);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "zi"){
                float zi = timp.toFloat() * 0.0006944;
                QString rezultat = QString::number(zi);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "sapt"){
                float saptamana = timp.toFloat() * 0.00009921;
                QString rezultat = QString::number(saptamana);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "lun"){
                float luna = timp.toFloat() * 0.00002282;
                QString rezultat = QString::number(luna);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "an"){
                float an = timp.toFloat() * 0.000001901;
                QString rezultat = QString::number(an);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "dec"){
                float deceniu = timp.toFloat() * 0.0000001901;
                QString rezultat = QString::number(deceniu);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "sec"){
                float secol = timp.toFloat() * 0.00000001901;
                QString rezultat = QString::number(secol);
                ui->outputTimp->setText(rezultat);
            }

        }

        if( FromTimpComboBox == "h"){ // Verificam daca convertim din ore
            if (ToTimpCombobox == "s"){
                float secunda = timp.toFloat() * 3600;
                QString rezultat = QString::number(secunda);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "min"){
                float minut = timp.toFloat() * 60;
                QString rezultat = QString::number(minut);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "h"){
                float ora = timp.toFloat() * 1;
                QString rezultat = QString::number(ora);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "zi"){
                float zi = timp.toFloat() * 0.04167;
                QString rezultat = QString::number(zi);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "sapt"){
                float saptamana = timp.toFloat() * 0.005952;
                QString rezultat = QString::number(saptamana);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "lun"){
                float luna = timp.toFloat() * 0.001369;
                QString rezultat = QString::number(luna);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "an"){
                float an = timp.toFloat() * 0.0001141;
                QString rezultat = QString::number(an);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "dec"){
                float deceniu = timp.toFloat() * 0.00001141;
                QString rezultat = QString::number(deceniu);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "sec"){
                float secol = timp.toFloat() * 0.000001141;
                QString rezultat = QString::number(secol);
                ui->outputTimp->setText(rezultat);
            }

        }

        if( FromTimpComboBox == "zi"){ // Verificam daca convertim din zile
            if (ToTimpCombobox == "s"){
                float secunda = timp.toFloat() * 86400;
                QString rezultat = QString::number(secunda);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "min"){
                float minut = timp.toFloat() * 1440;
                QString rezultat = QString::number(minut);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "h"){
                float ora = timp.toFloat() * 24;
                QString rezultat = QString::number(ora);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "zi"){
                float zi = timp.toFloat() * 1;
                QString rezultat = QString::number(zi);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "sapt"){
                float saptamana = timp.toFloat() * 0.1429;
                QString rezultat = QString::number(saptamana);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "lun"){
                float luna = timp.toFloat() * 0.03285;
                QString rezultat = QString::number(luna);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "an"){
                float an = timp.toFloat() * 0.002738;
                QString rezultat = QString::number(an);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "dec"){
                float deceniu = timp.toFloat() * 0.0002738;
                QString rezultat = QString::number(deceniu);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "sec"){
                float secol = timp.toFloat() * 0.00002738;
                QString rezultat = QString::number(secol);
                ui->outputTimp->setText(rezultat);
            }

        }

        if( FromTimpComboBox == "sapt"){ // Verificam daca convertim din saptamani
            if (ToTimpCombobox == "s"){
                float secunda = timp.toFloat() * 604800;
                QString rezultat = QString::number(secunda);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "min"){
                float minut = timp.toFloat() * 10080;
                QString rezultat = QString::number(minut);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "h"){
                float ora = timp.toFloat() * 168;
                QString rezultat = QString::number(ora);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "zi"){
                float zi = timp.toFloat() * 7;
                QString rezultat = QString::number(zi);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "sapt"){
                float saptamana = timp.toFloat() * 1;
                QString rezultat = QString::number(saptamana);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "lun"){
                float luna = timp.toFloat() * 0.23;
                QString rezultat = QString::number(luna);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "an"){
                float an = timp.toFloat() * 0.01916;
                QString rezultat = QString::number(an);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "dec"){
                float deceniu = timp.toFloat() * 0.001916;
                QString rezultat = QString::number(deceniu);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "sec"){
                float secol = timp.toFloat() * 0.0001916;
                QString rezultat = QString::number(secol);
                ui->outputTimp->setText(rezultat);
            }

        }

        if( FromTimpComboBox == "lun"){ // Verificam daca convertim din luni
            if (ToTimpCombobox == "s"){
                float secunda = timp.toFloat() * 2630000;
                QString rezultat = QString::number(secunda);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "min"){
                float minut = timp.toFloat() * 43830;
                QString rezultat = QString::number(minut);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "h"){
                float ora = timp.toFloat() * 730.5;
                QString rezultat = QString::number(ora);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "zi"){
                float zi = timp.toFloat() * 30.44;
                QString rezultat = QString::number(zi);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "sapt"){
                float saptamana = timp.toFloat() * 4.348;
                QString rezultat = QString::number(saptamana);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "lun"){
                float luna = timp.toFloat() * 1;
                QString rezultat = QString::number(luna);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "an"){
                float an = timp.toFloat() * 0.08334;
                QString rezultat = QString::number(an);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "dec"){
                float deceniu = timp.toFloat() * 0.008334;
                QString rezultat = QString::number(deceniu);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "sec"){
                float secol = timp.toFloat() * 0.0008334;
                QString rezultat = QString::number(secol);
                ui->outputTimp->setText(rezultat);
            }

        }

        if( FromTimpComboBox == "an"){ // Verificam daca convertim din ani
            if (ToTimpCombobox == "s"){
                float secunda = timp.toFloat() * 31560000;
                QString rezultat = QString::number(secunda);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "min"){
                float minut = timp.toFloat() * 526000;
                QString rezultat = QString::number(minut);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "h"){
                float ora = timp.toFloat() * 8767;
                QString rezultat = QString::number(ora);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "zi"){
                float zi = timp.toFloat() * 365.3;
                QString rezultat = QString::number(zi);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "sapt"){
                float saptamana = timp.toFloat() * 52.18;
                QString rezultat = QString::number(saptamana);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "lun"){
                float luna = timp.toFloat() * 12;
                QString rezultat = QString::number(luna);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "an"){
                float an = timp.toFloat() * 1;
                QString rezultat = QString::number(an);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "dec"){
                float deceniu = timp.toFloat() * 0.1;
                QString rezultat = QString::number(deceniu);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "sec"){
                float secol = timp.toFloat() * 0.01;
                QString rezultat = QString::number(secol);
                ui->outputTimp->setText(rezultat);
            }

        }

        if( FromTimpComboBox == "dec"){ // Verificam daca convertim din decenii
            if (ToTimpCombobox == "s"){
                float secunda = timp.toFloat() * 315600000;
                QString rezultat = QString::number(secunda);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "min"){
                float minut = timp.toFloat() * 5260000;
                QString rezultat = QString::number(minut);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "h"){
                float ora = timp.toFloat() * 87670;
                QString rezultat = QString::number(ora);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "zi"){
                float zi = timp.toFloat() * 3653;
                QString rezultat = QString::number(zi);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "sapt"){
                float saptamana = timp.toFloat() * 521.8;
                QString rezultat = QString::number(saptamana);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "lun"){
                float luna = timp.toFloat() * 120;
                QString rezultat = QString::number(luna);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "an"){
                float an = timp.toFloat() * 10;
                QString rezultat = QString::number(an);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "dec"){
                float deceniu = timp.toFloat() * 1;
                QString rezultat = QString::number(deceniu);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "sec"){
                float secol = timp.toFloat() * 0.1;
                QString rezultat = QString::number(secol);
                ui->outputTimp->setText(rezultat);
            }

        }


        if( FromTimpComboBox == "sec"){ // Verificam daca convertim din secole
            if (ToTimpCombobox == "s"){
                float secunda = timp.toFloat() * 3156000000;
                QString rezultat = QString::number(secunda);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "min"){
                float minut = timp.toFloat() * 52600000;
                QString rezultat = QString::number(minut);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "h"){
                float ora = timp.toFloat() * 876700;
                QString rezultat = QString::number(ora);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "zi"){
                float zi = timp.toFloat() * 36530;
                QString rezultat = QString::number(zi);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "sapt"){
                float saptamana = timp.toFloat() * 5218;
                QString rezultat = QString::number(saptamana);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "lun"){
                float luna = timp.toFloat() * 1200;
                QString rezultat = QString::number(luna);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "an"){
                float an = timp.toFloat() * 100;
                QString rezultat = QString::number(an);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "dec"){
                float deceniu = timp.toFloat() * 10;
                QString rezultat = QString::number(deceniu);
                ui->outputTimp->setText(rezultat);
            }
            else if (ToTimpCombobox == "sec"){
                float secol = timp.toFloat() * 1;
                QString rezultat = QString::number(secol);
                ui->outputTimp->setText(rezultat);
            }

        }
    }



    QString viteza = ui->inputViteza->text();
    if (viteza.length() != 0){

        QString FromVitezaComboBox = ui->FromViteza->currentText();
        QString ToVitezaCombobox = ui->ToViteza->currentText();

        if( FromVitezaComboBox == "km/h"){ // Verificam daca convertim din km/h
            if (ToVitezaCombobox == "km/h"){
                float kmh = viteza.toFloat() * 1;
                QString rezultat = QString::number(kmh);
                ui->outputViteza->setText(rezultat);
            }
            else  if (ToVitezaCombobox == "mph"){
                float mph = viteza.toFloat() * 0.6214;
                QString rezultat = QString::number(mph);
                ui->outputViteza->setText(rezultat);
            }
            else  if (ToVitezaCombobox == "m/s"){
                float ms = viteza.toFloat() * 0.2778;
                QString rezultat = QString::number(ms);
                ui->outputViteza->setText(rezultat);
            }
        }

        if( FromVitezaComboBox == "mph"){ // Verificam daca convertim din mph
            if (ToVitezaCombobox == "km/h"){
                float kmh = viteza.toFloat() * 1.609;
                QString rezultat = QString::number(kmh);
                ui->outputViteza->setText(rezultat);
            }
            else  if (ToVitezaCombobox == "mph"){
                float mph = viteza.toFloat() * 1;
                QString rezultat = QString::number(mph);
                ui->outputViteza->setText(rezultat);
            }
            else  if (ToVitezaCombobox == "m/s"){
                float ms = viteza.toFloat() * 0.447;
                QString rezultat = QString::number(ms);
                ui->outputViteza->setText(rezultat);
            }
        }

        if( FromVitezaComboBox == "m/s"){ // Verificam daca convertim din m/s
            if (ToVitezaCombobox == "km/h"){
                float kmh = viteza.toFloat() * 3.6;
                QString rezultat = QString::number(kmh);
                ui->outputViteza->setText(rezultat);
            }
            else  if (ToVitezaCombobox == "mph"){
                float mph = viteza.toFloat() * 2.237;
                QString rezultat = QString::number(mph);
                ui->outputViteza->setText(rezultat);
            }
            else  if (ToVitezaCombobox == "m/s"){
                float ms = viteza.toFloat() * 1;
                QString rezultat = QString::number(ms);
                ui->outputViteza->setText(rezultat);
            }
        }
    }



    QString temperatura = ui->inputTemperatura->text();
    if (temperatura.length() != 0){

        QString FromTemperaturaComboBox = ui->FromTemperatura->currentText();
        QString ToTemperaturaComboBox = ui->ToTemperatura->currentText();

        if( FromTemperaturaComboBox == "°C"){ // Verificam daca convertim din grade celsius
            if (ToTemperaturaComboBox == "°C"){
                float celsius = temperatura.toFloat() * 1;
                QString rezultat = QString::number(celsius);
                ui->outputTemperatura->setText(rezultat);
            }
            else if (ToTemperaturaComboBox == "°F"){
                float fahrenheit = temperatura.toFloat() * 33.8;
                QString rezultat = QString::number(fahrenheit);
                ui->outputTemperatura->setText(rezultat);
            }
            else if (ToTemperaturaComboBox == "K"){
                float kelvin = temperatura.toFloat() * 274.1;
                QString rezultat = QString::number(kelvin);
                ui->outputTemperatura->setText(rezultat);
            }
        }

        if( FromTemperaturaComboBox == "°F"){ // Verificam daca convertim din grade fahrenheit
            if (ToTemperaturaComboBox == "°C"){
                float celsius = temperatura.toFloat() * (-17.22);
                QString rezultat = QString::number(celsius);
                ui->outputTemperatura->setText(rezultat);
            }
            else if (ToTemperaturaComboBox == "°F"){
                float fahrenheit = temperatura.toFloat() * 1;
                QString rezultat = QString::number(fahrenheit);
                ui->outputTemperatura->setText(rezultat);
            }
            else if (ToTemperaturaComboBox == "K"){
                float kelvin = temperatura.toFloat() * 255.9;
                QString rezultat = QString::number(kelvin);
                ui->outputTemperatura->setText(rezultat);
            }
        }

        if( FromTemperaturaComboBox == "K"){ // Verificam daca convertim din kelvin
            if (ToTemperaturaComboBox == "°C"){
                float celsius = temperatura.toFloat() * (-272.1);
                QString rezultat = QString::number(celsius);
                ui->outputTemperatura->setText(rezultat);
            }
            else if (ToTemperaturaComboBox == "°F"){
                float fahrenheit = temperatura.toFloat() * (-457.9);
                QString rezultat = QString::number(fahrenheit);
                ui->outputTemperatura->setText(rezultat);
            }
            else if (ToTemperaturaComboBox == "K"){
                float kelvin = temperatura.toFloat() * 1;
                QString rezultat = QString::number(kelvin);
                ui->outputTemperatura->setText(rezultat);
            }
        }
    }



    QString masa = ui->inputMasa->text();
    if (masa.length() != 0){

        QString FromMasaComboBox = ui->FromMasa->currentText();
        QString ToMasaComboBox = ui->ToMasa->currentText();

        if( FromMasaComboBox == "mg"){ // Verificam daca convertim din miligram
            if (ToMasaComboBox == "mg"){
                float mg = masa.toFloat() * 1;
                QString rezultat = QString::number(mg);
                ui->outputMasa->setText(rezultat);
            }
            else if (ToMasaComboBox == "cg"){
                float cg = masa.toFloat() * 0.1;
                QString rezultat = QString::number(cg);
                ui->outputMasa->setText(rezultat);
            }
            else if (ToMasaComboBox == "g"){
                float g = masa.toFloat() * 0.001;
                QString rezultat = QString::number(g);
                ui->outputMasa->setText(rezultat);
            }
            else if (ToMasaComboBox == "kg"){
                float kg = masa.toFloat() * 0.000001;
                QString rezultat = QString::number(kg);
                ui->outputMasa->setText(rezultat);
            }
            else if (ToMasaComboBox == "t"){
                float t = masa.toFloat() * 0.000000001;
                QString rezultat = QString::number(t);
                ui->outputMasa->setText(rezultat);
            }


        }

        if( FromMasaComboBox == "cg"){ // Verificam daca convertim din centigram
            if (ToMasaComboBox == "mg"){
                float mg = masa.toFloat() * 10;
                QString rezultat = QString::number(mg);
                ui->outputMasa->setText(rezultat);
            }
            else if (ToMasaComboBox == "cg"){
                float cg = masa.toFloat() * 1;
                QString rezultat = QString::number(cg);
                ui->outputMasa->setText(rezultat);
            }
            else if (ToMasaComboBox == "g"){
                float g = masa.toFloat() * 0.01;
                QString rezultat = QString::number(g);
                ui->outputMasa->setText(rezultat);
            }
            else if (ToMasaComboBox == "kg"){
                float kg = masa.toFloat() * 0.00001;
                QString rezultat = QString::number(kg);
                ui->outputMasa->setText(rezultat);
            }
            else if (ToMasaComboBox == "t"){
                float t = masa.toFloat() * 0.00000001;
                QString rezultat = QString::number(t);
                ui->outputMasa->setText(rezultat);
            }


        }


        if( FromMasaComboBox == "g"){ // Verificam daca convertim din gram
            if (ToMasaComboBox == "mg"){
                float mg = masa.toFloat() * 1000;
                QString rezultat = QString::number(mg);
                ui->outputMasa->setText(rezultat);
            }
            else if (ToMasaComboBox == "cg"){
                float cg = masa.toFloat() * 100;
                QString rezultat = QString::number(cg);
                ui->outputMasa->setText(rezultat);
            }
            else if (ToMasaComboBox == "g"){
                float g = masa.toFloat() * 1;
                QString rezultat = QString::number(g);
                ui->outputMasa->setText(rezultat);
            }
            else if (ToMasaComboBox == "kg"){
                float kg = masa.toFloat() * 0.001;
                QString rezultat = QString::number(kg);
                ui->outputMasa->setText(rezultat);
            }
            else if (ToMasaComboBox == "t"){
                float t = masa.toFloat() * 0.000001;
                QString rezultat = QString::number(t);
                ui->outputMasa->setText(rezultat);
            }


        }

        if( FromMasaComboBox == "kg"){ // Verificam daca convertim din kilogram
            if (ToMasaComboBox == "mg"){
                float mg = masa.toFloat() * 1000000;
                QString rezultat = QString::number(mg);
                ui->outputMasa->setText(rezultat);
            }
            else if (ToMasaComboBox == "cg"){
                float cg = masa.toFloat() * 100000;
                QString rezultat = QString::number(cg);
                ui->outputMasa->setText(rezultat);
            }
            else if (ToMasaComboBox == "g"){
                float g = masa.toFloat() * 1000;
                QString rezultat = QString::number(g);
                ui->outputMasa->setText(rezultat);
            }
            else if (ToMasaComboBox == "kg"){
                float kg = masa.toFloat() * 1;
                QString rezultat = QString::number(kg);
                ui->outputMasa->setText(rezultat);
            }
            else if (ToMasaComboBox == "t"){
                float t = masa.toFloat() * 0.001;
                QString rezultat = QString::number(t);
                ui->outputMasa->setText(rezultat);
            }


        }

        if( FromMasaComboBox == "t"){ // Verificam daca convertim din tone
            if (ToMasaComboBox == "mg"){
                float mg = masa.toFloat() * 1000000000;
                QString rezultat = QString::number(mg);
                ui->outputTemperatura->setText(rezultat);
            }
            else if (ToMasaComboBox == "cg"){
                float cg = masa.toFloat() * 100000000;
                QString rezultat = QString::number(cg);
                ui->outputTemperatura->setText(rezultat);
            }
            else if (ToMasaComboBox == "g"){
                float g = masa.toFloat() * 1000000;
                QString rezultat = QString::number(g);
                ui->outputTemperatura->setText(rezultat);
            }
            else if (ToMasaComboBox == "kg"){
                float kg = masa.toFloat() * 1000;
                QString rezultat = QString::number(kg);
                ui->outputTemperatura->setText(rezultat);
            }
            else if (ToMasaComboBox == "t"){
                float t = masa.toFloat() * 1;
                QString rezultat = QString::number(t);
                ui->outputTemperatura->setText(rezultat);
            }


        }
    }



    QString energie = ui->inputEnergie->text();
    if (energie.length() != 0){

        QString FromEnergieComboBox = ui->FromEnergie->currentText();
        QString ToEnergieComboBox = ui->ToEnergie->currentText();

        if( FromEnergieComboBox == "J"){ // Verificam daca convertim din joule
            if (ToEnergieComboBox == "J"){
                float joule = energie.toFloat() * 1;
                QString rezultat = QString::number(joule);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "kJ"){
                float kjoule = energie.toFloat() * 0.001;
                QString rezultat = QString::number(kjoule);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "cal"){
                float calorie = energie.toFloat() * 0.2388;
                QString rezultat = QString::number(calorie);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "kcal"){
                float kcal = energie.toFloat() * 0.0002388;
                QString rezultat = QString::number(kcal);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "W/h"){
                float watth = energie.toFloat() * 0.0002778;
                QString rezultat = QString::number(watth);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "KW/h"){
                float kwatth = energie.toFloat() * 0.0000002778;
                QString rezultat = QString::number(kwatth);
                ui->outputEnergie->setText(rezultat);
            }

        }
        if( FromEnergieComboBox == "kJ"){ // Verificam daca convertim din kilojoule
            if (ToEnergieComboBox == "J"){
                float joule = energie.toFloat() * 1000;
                QString rezultat = QString::number(joule);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "kJ"){
                float kjoule = energie.toFloat() * 1;
                QString rezultat = QString::number(kjoule);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "cal"){
                float calorie = energie.toFloat() * 238.8;
                QString rezultat = QString::number(calorie);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "kcal"){
                float kcal = energie.toFloat() * 0.2388;
                QString rezultat = QString::number(kcal);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "W/h"){
                float watth = energie.toFloat() * 0.2778;
                QString rezultat = QString::number(watth);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "KW/h"){
                float kwatth = energie.toFloat() * 0.0002778;
                QString rezultat = QString::number(kwatth);
                ui->outputEnergie->setText(rezultat);
            }

        }

        if( FromEnergieComboBox == "cal"){ // Verificam daca convertim din calorii
            if (ToEnergieComboBox == "J"){
                float joule = energie.toFloat() * 4.187;
                QString rezultat = QString::number(joule);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "kJ"){
                float kjoule = energie.toFloat() * 0.004187;
                QString rezultat = QString::number(kjoule);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "cal"){
                float calorie = energie.toFloat() * 1;
                QString rezultat = QString::number(calorie);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "kcal"){
                float kcal = energie.toFloat() * 0.001;
                QString rezultat = QString::number(kcal);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "W/h"){
                float watth = energie.toFloat() * 0.001163;
                QString rezultat = QString::number(watth);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "KW/h"){
                float kwatth = energie.toFloat() * 0.000001163;
                QString rezultat = QString::number(kwatth);
                ui->outputEnergie->setText(rezultat);
            }

        }

        if( FromEnergieComboBox == "kcal"){ // Verificam daca convertim din kilocalorii
            if (ToEnergieComboBox == "J"){
                float joule = energie.toFloat() * 4187;
                QString rezultat = QString::number(joule);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "kJ"){
                float kjoule = energie.toFloat() * 4.187;
                QString rezultat = QString::number(kjoule);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "cal"){
                float calorie = energie.toFloat() * 1000;
                QString rezultat = QString::number(calorie);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "kcal"){
                float kcal = energie.toFloat() * 1;
                QString rezultat = QString::number(kcal);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "W/h"){
                float watth = energie.toFloat() * 1.163;
                QString rezultat = QString::number(watth);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "KW/h"){
                float kwatth = energie.toFloat() * 0.001163;
                QString rezultat = QString::number(kwatth);
                ui->outputEnergie->setText(rezultat);
            }

        }

        if( FromEnergieComboBox == "W/h"){ // Verificam daca convertim din W/h
            if (ToEnergieComboBox == "J"){
                float joule = energie.toFloat() * 3600;
                QString rezultat = QString::number(joule);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "kJ"){
                float kjoule = energie.toFloat() * 3.6;
                QString rezultat = QString::number(kjoule);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "cal"){
                float calorie = energie.toFloat() * 859.8;
                QString rezultat = QString::number(calorie);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "kcal"){
                float kcal = energie.toFloat() * 0.8598;
                QString rezultat = QString::number(kcal);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "W/h"){
                float watth = energie.toFloat() * 1;
                QString rezultat = QString::number(watth);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "KW/h"){
                float kwatth = energie.toFloat() * 0.001;
                QString rezultat = QString::number(kwatth);
                ui->outputEnergie->setText(rezultat);
            }

        }

        if( FromEnergieComboBox == "KW/h"){ // Verificam daca convertim din KW/h
            if (ToEnergieComboBox == "J"){
                float joule = energie.toFloat() * 3600000;
                QString rezultat = QString::number(joule);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "kJ"){
                float kjoule = energie.toFloat() * 3600;
                QString rezultat = QString::number(kjoule);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "cal"){
                float calorie = energie.toFloat() * 859800;
                QString rezultat = QString::number(calorie);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "kcal"){
                float kcal = energie.toFloat() * 859.8;
                QString rezultat = QString::number(kcal);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "W/h"){
                float watth = energie.toFloat() * 1000;
                QString rezultat = QString::number(watth);
                ui->outputEnergie->setText(rezultat);
            }
            else if (ToEnergieComboBox == "KW/h"){
                float kwatth = energie.toFloat() * 1;
                QString rezultat = QString::number(kwatth);
                ui->outputEnergie->setText(rezultat);
            }

        }
    }



    QString presiune = ui->inputPresiune->text();
    if (presiune.length() != 0){

        QString FromPresiuneComboBox = ui->FromPresiune->currentText();
        QString ToPresiuneComboBox = ui->ToPresiune->currentText();

        if( FromPresiuneComboBox == "bar"){ // Verificam daca convertim din bar
            if (ToPresiuneComboBox == "bar"){
                float bar = presiune.toFloat() * 1;
                QString rezultat = QString::number(bar);
                ui->outputPresiune->setText(rezultat);
            }
            else if (ToPresiuneComboBox == "psi"){
                float psi = presiune.toFloat() * 14.5037738;
                QString rezultat = QString::number(psi);
                ui->outputPresiune->setText(rezultat);
            }
        }

        if( FromPresiuneComboBox == "psi"){ // Verificam daca convertim din psi
            if (ToPresiuneComboBox == "bar"){
                float bar = presiune.toFloat() * 0.0689475729;
                QString rezultat = QString::number(bar);
                ui->outputPresiune->setText(rezultat);
            }
            else if (ToPresiuneComboBox == "psi"){
                float psi = presiune.toFloat() * 1;
                QString rezultat = QString::number(psi);
                ui->outputPresiune->setText(rezultat);
            }
        }
    }



    QString densitate = ui->inputDensitate->text();
    if (densitate.length() != 0){

        QString FromDensitateComboBox = ui->FromDensitate->currentText();
        QString ToDensitateComboBox = ui->ToDensitate->currentText();

        if( FromDensitateComboBox == "g/ml"){ // Verificam daca convertim din gram / mililitru
            if (ToDensitateComboBox == "g/ml"){
                float gml = densitate.toFloat() * 1;
                QString rezultat = QString::number(gml);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "g/l"){
                float gl = densitate.toFloat() * 1000;
                QString rezultat = QString::number(gl);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "kg/l"){
                float kgl = densitate.toFloat() * 1;
                QString rezultat = QString::number(kgl);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "mg/m³"){
                float mgm = densitate.toFloat() * 1000000000;
                QString rezultat = QString::number(mgm);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "g/m³"){
                float gm = densitate.toFloat() * 1000000;
                QString rezultat = QString::number(gm);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "kg/m³"){
                float kgm = densitate.toFloat() * 1000;
                QString rezultat = QString::number(kgm);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "t/m³"){
                float tm = densitate.toFloat() * 1;
                QString rezultat = QString::number(tm);
                ui->outputDensitate->setText(rezultat);
            }
        }

        if( FromDensitateComboBox == "g/l"){ // Verificam daca convertim din gram / litru
            if (ToDensitateComboBox == "g/ml"){
                float gml = densitate.toFloat() * 0.001;
                QString rezultat = QString::number(gml);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "g/l"){
                float gl = densitate.toFloat() * 1;
                QString rezultat = QString::number(gl);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "kg/l"){
                float kgl = densitate.toFloat() * 0.001;
                QString rezultat = QString::number(kgl);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "mg/m³"){
                float mgm = densitate.toFloat() * 1000000;
                QString rezultat = QString::number(mgm);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "g/m³"){
                float gm = densitate.toFloat() * 1000;
                QString rezultat = QString::number(gm);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "kg/m³"){
                float kgm = densitate.toFloat() * 1;
                QString rezultat = QString::number(kgm);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "t/m³"){
                float tm = densitate.toFloat() * 0.001;
                QString rezultat = QString::number(tm);
                ui->outputDensitate->setText(rezultat);
            }
        }

        if( FromDensitateComboBox == "kg/l"){ // Verificam daca convertim din kilgram / litru
            if (ToDensitateComboBox == "g/ml"){
                float gml = densitate.toFloat() * 1;
                QString rezultat = QString::number(gml);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "g/l"){
                float gl = densitate.toFloat() * 1000;
                QString rezultat = QString::number(gl);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "kg/l"){
                float kgl = densitate.toFloat() * 1;
                QString rezultat = QString::number(kgl);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "mg/m³"){
                float mgm = densitate.toFloat() * 1000000000;
                QString rezultat = QString::number(mgm);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "g/m³"){
                float gm = densitate.toFloat() * 1000000;
                QString rezultat = QString::number(gm);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "kg/m³"){
                float kgm = densitate.toFloat() * 1000;
                QString rezultat = QString::number(kgm);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "t/m³"){
                float tm = densitate.toFloat() * 1;
                QString rezultat = QString::number(tm);
                ui->outputDensitate->setText(rezultat);
            }
        }

        if( FromDensitateComboBox == "mg/m³"){ // Verificam daca convertim din miligram / metru cub
            if (ToDensitateComboBox == "g/ml"){
                float gml = densitate.toFloat() * 0.000000001;
                QString rezultat = QString::number(gml);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "g/l"){
                float gl = densitate.toFloat() * 0.000001;
                QString rezultat = QString::number(gl);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "kg/l"){
                float kgl = densitate.toFloat() * 0.000000001;
                QString rezultat = QString::number(kgl);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "mg/m³"){
                float mgm = densitate.toFloat() * 1;
                QString rezultat = QString::number(mgm);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "g/m³"){
                float gm = densitate.toFloat() * 0.001;
                QString rezultat = QString::number(gm);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "kg/m³"){
                float kgm = densitate.toFloat() * 0.000001;
                QString rezultat = QString::number(kgm);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "t/m³"){
                float tm = densitate.toFloat() * 0.000000001;
                QString rezultat = QString::number(tm);
                ui->outputDensitate->setText(rezultat);
            }
        }

        if( FromDensitateComboBox == "g/m³"){ // Verificam daca convertim din gram / metru cub
            if (ToDensitateComboBox == "g/ml"){
                float gml = densitate.toFloat() * 0.000001;
                QString rezultat = QString::number(gml);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "g/l"){
                float gl = densitate.toFloat() * 0.001;
                QString rezultat = QString::number(gl);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "kg/l"){
                float kgl = densitate.toFloat() * 0.000001;
                QString rezultat = QString::number(kgl);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "mg/m³"){
                float mgm = densitate.toFloat() * 1000;
                QString rezultat = QString::number(mgm);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "g/m³"){
                float gm = densitate.toFloat() * 1;
                QString rezultat = QString::number(gm);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "kg/m³"){
                float kgm = densitate.toFloat() * 0.001;
                QString rezultat = QString::number(kgm);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "t/m³"){
                float tm = densitate.toFloat() * 0.000001;
                QString rezultat = QString::number(tm);
                ui->outputDensitate->setText(rezultat);
            }
        }

        if( FromDensitateComboBox == "kg/m³"){ // Verificam daca convertim din kilogram / metru cub
            if (ToDensitateComboBox == "g/ml"){
                float gml = densitate.toFloat() * 0.001;
                QString rezultat = QString::number(gml);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "g/l"){
                float gl = densitate.toFloat() * 1;
                QString rezultat = QString::number(gl);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "kg/l"){
                float kgl = densitate.toFloat() * 0.001;
                QString rezultat = QString::number(kgl);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "mg/m³"){
                float mgm = densitate.toFloat() * 1000000;
                QString rezultat = QString::number(mgm);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "g/m³"){
                float gm = densitate.toFloat() * 1000;
                QString rezultat = QString::number(gm);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "kg/m³"){
                float kgm = densitate.toFloat() * 1;
                QString rezultat = QString::number(kgm);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "t/m³"){
                float tm = densitate.toFloat() * 0.001;
                QString rezultat = QString::number(tm);
                ui->outputDensitate->setText(rezultat);
            }
        }

        if( FromDensitateComboBox == "t/m³"){ // Verificam daca convertim din tona / metru cub
            if (ToDensitateComboBox == "g/ml"){
                float gml = densitate.toFloat() * 1;
                QString rezultat = QString::number(gml);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "g/l"){
                float gl = densitate.toFloat() * 1000;
                QString rezultat = QString::number(gl);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "kg/l"){
                float kgl = densitate.toFloat() * 1;
                QString rezultat = QString::number(kgl);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "mg/m³"){
                float mgm = densitate.toFloat() * 1000000000;
                QString rezultat = QString::number(mgm);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "g/m³"){
                float gm = densitate.toFloat() * 1000000;
                QString rezultat = QString::number(gm);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "kg/m³"){
                float kgm = densitate.toFloat() * 1000;
                QString rezultat = QString::number(kgm);
                ui->outputDensitate->setText(rezultat);
            }
            else if (ToDensitateComboBox == "t/m³"){
                float tm = densitate.toFloat() * 1;
                QString rezultat = QString::number(tm);
                ui->outputDensitate->setText(rezultat);
            }
        }





    }


    QString consum = ui->inputConsum->text();
    if (consum.length() != 0){

        QString FromConsumComboBox = ui->FromConsum->currentText();
        QString ToConsumCombobox = ui->ToConsum->currentText();

        if( FromConsumComboBox == "l/100 km"){ // Verificam daca convertim din l/100 km
            if (ToConsumCombobox == "l/100 km"){
                float l100 = consum.toFloat() / 1;
                QString rezultat = QString::number(l100);
                ui->outputConsum->setText(rezultat);
            }
            else if (ToConsumCombobox == "mi/gal"){
                float milegalon = 235.2 / consum.toFloat();
                QString rezultat = QString::number(milegalon);
                ui->outputConsum->setText(rezultat);
            }
            else if (ToConsumCombobox == "km/l"){
                float kmlitru = consum.toFloat() * (100 / consum.toFloat())/ consum.toFloat();
                QString rezultat = QString::number(kmlitru);
                ui->outputConsum->setText(rezultat);
            }
        }

        if( FromConsumComboBox == "mi/gal"){ // Verificam daca convertim din mile / galon
            if (ToConsumCombobox == "l/100 km"){
                float l100 = 235.2 / consum.toFloat() ;
                QString rezultat = QString::number(l100);
                ui->outputConsum->setText(rezultat);
            }
            else if (ToConsumCombobox == "mi/gal"){
                float milegalon = consum.toFloat() / 1;
                QString rezultat = QString::number(milegalon);
                ui->outputConsum->setText(rezultat);
            }
            else if (ToConsumCombobox == "km/l"){
                float kmlitru = consum.toFloat() / 2.35214583;
                QString rezultat = QString::number(kmlitru);
                ui->outputConsum->setText(rezultat);
            }
        }

        if( FromConsumComboBox == "km/l"){ // Verificam daca convertim din km / l
            if (ToConsumCombobox == "l/100 km"){
                float l100 = 100 / consum.toFloat();
                QString rezultat = QString::number(l100);
                ui->outputConsum->setText(rezultat);
            }
            else if (ToConsumCombobox == "mi/gal"){
                float milegalon = consum.toFloat() * 2.35214583;
                QString rezultat = QString::number(milegalon);
                ui->outputConsum->setText(rezultat);
            }
            else if (ToConsumCombobox == "km/l"){
                float kmlitru = consum.toFloat() / 1;
                QString rezultat = QString::number(kmlitru);
                ui->outputConsum->setText(rezultat);
            }
        }
    }
}

