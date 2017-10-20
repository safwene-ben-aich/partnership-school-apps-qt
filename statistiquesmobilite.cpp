#include "statistiquesmobilite.h"
#include "ui_statistiquesmobilite.h"


statistiquesMobilite::statistiquesMobilite(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::statistiquesMobilite)
{
    ui->setupUi(this);
    this->setWindowTitle("Statistiques mobilite");
    statistiquesMobilite::makePlot();
    statistiquesMobilite::makeSecondPlot();
    statistiquesMobilite::makeTableView();
}

statistiquesMobilite::~statistiquesMobilite()
{
    delete ui;
}



// Une methode à voir, AMELIORATION POSSIBLE !


void statistiquesMobilite::makeTableView()
{
    DomMobilite domMobilite;

    QStandardItemModel *model = new QStandardItemModel(2,3,this); // 2 Rows and 3 Columns

    model->setHorizontalHeaderItem(0,new QStandardItem(QString("Nombre Etudiant")));
    model->setHorizontalHeaderItem(1,new QStandardItem(QString("Ingénierie")));
    model->setHorizontalHeaderItem(2,new QStandardItem(QString("Master")));
    model->setHorizontalHeaderItem(3,new QStandardItem(QString("Sans Diplome")));

    QVector <QString> listPays=domMobilite.getListPays();
    for (int i=0;i<listPays.size();i++){
        model->setHorizontalHeaderItem(model->columnCount(),new QStandardItem(QString(listPays[i])));

    }


    QVector <QString> listClasse=domMobilite.getListClasse();

    for (int i=0;i<listClasse.size();i++)
    {
        model->setHorizontalHeaderItem(model->columnCount(),new QStandardItem(QString(listClasse[i])));

    }




    model->setVerticalHeaderItem(0,new QStandardItem(QString("2014")));
    model->setVerticalHeaderItem(1,new QStandardItem(QString("2015")));

    for (int i=0;i<2;i++){
    int j=0;
    QStandardItem *Row = new QStandardItem(QString::number(domMobilite.getNombreEtudiantParAnnee(2014+i)));
    model->setItem(i,j,Row);
    j++;
    double pourcentage=domMobilite.getNombreDiplomeParAnnee("Ingénieur",2014+i)*100/domMobilite.getNombreEtudiantParAnnee(2014+i);
    Row = new QStandardItem(QString::number(pourcentage)+'%');
    model->setItem(i,j,Row);
    j++;
    pourcentage=domMobilite.getNombreDiplomeParAnnee("Master",2014+i)*100/domMobilite.getNombreEtudiantParAnnee(2014+i);
    Row = new QStandardItem(QString::number(pourcentage)+'%');
    model->setItem(i,j,Row);

    j++;
    pourcentage=domMobilite.getNombreDiplomeParAnnee("Non",2014+i)*100/domMobilite.getNombreEtudiantParAnnee(2014+i);
    Row = new QStandardItem(QString::number(pourcentage)+'%');
    model->setItem(i,j,Row);


    for (int k=0;k<listPays.size();k++){
        j++;
        Row = new QStandardItem(QString::number(domMobilite.getNombrePaysParAnnee(listPays[k],2014+i)));
        model->setItem(i,j,Row);



    }



    for (int k=0;k<listClasse.size();k++)
    {
        j++;
        Row = new QStandardItem(QString::number(domMobilite.getNombreClasseParAnnee(listClasse[k],2014+i)));
        model->setItem(i,j,Row);

    }




    }





    ui->tableView->setModel(model);

    ui->tableView->setVisible(false);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->resizeRowsToContents();
    ui->tableView->setVisible(true);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
    ui->tableView->verticalHeader()->setStretchLastSection(true);

}





void statistiquesMobilite::makePlot()
{


    DomMobilite domMobilite;


    // create empty bar chart objects:
    QCPBars *eleve = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
    ui->customPlot->addPlottable(eleve);
    // set names and colors:
    QPen pen;
    pen.setWidthF(1.2);
    eleve->setName("Eleve");
    pen.setColor(QColor(255, 131, 0));
    eleve->setPen(pen);
    eleve->setBrush(QColor(255, 131, 0, 50));

    // prepare x axis with country labels:
    QVector<double> ticks;
    QVector<QString> labels=domMobilite.getListPays();
    for (int i=0;i<labels.size();i++){

        ticks<< (i+1);
    }





    ui->customPlot->xAxis->setAutoTicks(false);
    ui->customPlot->xAxis->setAutoTickLabels(false);
    ui->customPlot->xAxis->setTickVector(ticks);
    ui->customPlot->xAxis->setTickVectorLabels(labels);
    ui->customPlot->xAxis->setTickLabelRotation(60);
    ui->customPlot->xAxis->setSubTickCount(0);
    ui->customPlot->xAxis->setTickLength(0, 4);
    ui->customPlot->xAxis->grid()->setVisible(true);
    ui->customPlot->xAxis->setRange(0, 8);

    // prepare y axis:
    ui->customPlot->yAxis->setRange(0, 50.1);
    ui->customPlot->yAxis->setPadding(5); // a bit more space to the left border
    ui->customPlot->yAxis->setLabel("Nombre des eleves / Pays (2015)");
    ui->customPlot->yAxis->grid()->setSubGridVisible(true);
    QPen gridPen;
    gridPen.setStyle(Qt::SolidLine);
    gridPen.setColor(QColor(0, 0, 0, 25));
    ui->customPlot->yAxis->grid()->setPen(gridPen);
    gridPen.setStyle(Qt::DotLine);
    ui->customPlot->yAxis->grid()->setSubGridPen(gridPen);

    // Add data:
    QVector<double> EleveData=domMobilite.getCountPays();


    eleve->setData(ticks, EleveData);

    // setup legend:

    ui->customPlot->legend->setVisible(true);
    ui->customPlot->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
    ui->customPlot->legend->setBrush(QColor(255, 255, 255, 200));

    QPen legendPen;
    legendPen.setColor(QColor(130, 130, 130, 200));
    ui->customPlot->legend->setBorderPen(legendPen);

    QFont legendFont = font();
    legendFont.setPointSize(10);
    ui->customPlot->legend->setFont(legendFont);
    ui->customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);



}

void statistiquesMobilite::makeSecondPlot()
{

    DomMobilite domMobilite;



    // create empty bar chart objects:
    QCPBars *master = new QCPBars(ui->customPlot_2->xAxis, ui->customPlot_2->yAxis); //regen
    QCPBars *ingenieur = new QCPBars(ui->customPlot_2->xAxis, ui->customPlot_2->yAxis); //nuclear
    QCPBars *sans_diplome = new QCPBars(ui->customPlot_2->xAxis, ui->customPlot_2->yAxis); // fossil
    ui->customPlot_2->addPlottable(master);
    ui->customPlot_2->addPlottable(ingenieur);
    ui->customPlot_2->addPlottable(sans_diplome);
    // set names and colors:
    QPen pen;
    pen.setWidthF(1.2);
    sans_diplome->setName("Sans Diplome");
    pen.setColor(QColor(255, 131, 0));
    sans_diplome->setPen(pen);
    sans_diplome->setBrush(QColor(255, 131, 0, 50));
    ingenieur->setName("Ingénieurie");
    pen.setColor(QColor(1, 92, 191));
    ingenieur->setPen(pen);
    ingenieur->setBrush(QColor(1, 92, 191, 50));
    master->setName("Master");
    pen.setColor(QColor(150, 222, 0));
    master->setPen(pen);
    master->setBrush(QColor(150, 222, 0, 70));
    // stack bars ontop of each other:
    ingenieur->moveAbove(sans_diplome);
    master->moveAbove(ingenieur);

    // prepare x axis with country labels:
    QVector<double> ticks;
    QVector<QString> labels=domMobilite.getListClasse();
    for (int i=0;i<labels.size();i++){
        ticks<< (i+1);
    }


    ui->customPlot_2->xAxis->setAutoTicks(false);
    ui->customPlot_2->xAxis->setAutoTickLabels(false);
    ui->customPlot_2->xAxis->setTickVector(ticks);
    ui->customPlot_2->xAxis->setTickVectorLabels(labels);
    ui->customPlot_2->xAxis->setTickLabelRotation(60);
    ui->customPlot_2->xAxis->setSubTickCount(0);
    ui->customPlot_2->xAxis->setTickLength(0, 4);
    ui->customPlot_2->xAxis->grid()->setVisible(true);
    ui->customPlot_2->xAxis->setRange(0, labels.size()+1);

    // prepare y axis:
    ui->customPlot_2->yAxis->setRange(0, 25.1);
    ui->customPlot_2->yAxis->setPadding(5); // a bit more space to the left border
    ui->customPlot_2->yAxis->setLabel("Diplomes/Classe (2015)");
    ui->customPlot_2->yAxis->grid()->setSubGridVisible(true);
    QPen gridPen;
    gridPen.setStyle(Qt::SolidLine);
    gridPen.setColor(QColor(0, 0, 0, 25));
    ui->customPlot_2->yAxis->grid()->setPen(gridPen);
    gridPen.setStyle(Qt::DotLine);
    ui->customPlot_2->yAxis->grid()->setSubGridPen(gridPen);

    // Add data:
    QVector<double> sans_diplome_Data, ingenieurData, masterData;

    //Implémenter une boucle !
    for (int i=0;i<labels.size();i++){

        sans_diplome_Data << domMobilite.getNombreDiplomeParClasse(labels[i],"Non");
        ingenieurData << domMobilite.getNombreDiplomeParClasse(labels[i],"Ingénieur");
        masterData <<domMobilite.getNombreDiplomeParClasse(labels[i],"Master");
    }



/*
    sans_diplome_Data  << 0.86*10.5 << 0.83*5.5 << 0.84*5.5 << 0.52*5.8 << 0.89*5.2 << 0.90*4.2 << 0.67*11.2;
    ingenieurData << 0.08*10.5 << 0.12*5.5 << 0.12*5.5 << 0.40*5.8 << 0.09*5.2 << 0.00*4.2 << 0.07*11.2;
    masterData   << 0.06*10.5 << 0.05*5.5 << 0.04*5.5 << 0.06*5.8 << 0.02*5.2 << 0.07*4.2 << 0.25*11.2;
*/


    sans_diplome->setData(ticks, sans_diplome_Data);
    ingenieur->setData(ticks, ingenieurData);
    master->setData(ticks, masterData);




    // setup legend:
    ui->customPlot_2->legend->setVisible(true);
    ui->customPlot_2->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
    ui->customPlot_2->legend->setBrush(QColor(255, 255, 255, 200));
    QPen legendPen;
    legendPen.setColor(QColor(130, 130, 130, 200));
    ui->customPlot_2->legend->setBorderPen(legendPen);
    QFont legendFont = font();
    legendFont.setPointSize(10);
    ui->customPlot_2->legend->setFont(legendFont);
    ui->customPlot_2->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);

}




void statistiquesMobilite::on_pushButton_capturerCustomPlot_clicked()
{
    QPixmap pixmap(ui->customPlot->size());
    ui->customPlot->render(&pixmap, QPoint(), QRegion());
    pixmap.save("captureStat1.png");
}

void statistiquesMobilite::on_pushButton_capturerCustomPlot_2_clicked()
{
    QPixmap pixmap(ui->customPlot_2->size());
    ui->customPlot_2->render(&pixmap, QPoint(), QRegion());
    pixmap.save("captureStat2.png");
}

void statistiquesMobilite::on_pushButton_capturerTableauStat_clicked()
{
    QPixmap pixmap(ui->tableView->size());
    ui->tableView->render(&pixmap, QPoint(), QRegion());
    pixmap.save("capturetabStat.png");
}
