#include "notificationpartenariat.h"
#include "ui_notificationpartenariat.h"

notificationPartenariat::notificationPartenariat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::notificationPartenariat)
{
    ui->setupUi(this);
    this->partenariatSelected="";

    notificationPartenariat::prepareTableViewNotification();
    ui->tableView_notification->resizeColumnsToContents();
    ui->tableView_notification->horizontalHeader()->setStretchLastSection(true);
}

notificationPartenariat::~notificationPartenariat()
{
    delete ui;
}

void notificationPartenariat::prepareTableViewNotification()
{
    QVector <QString> vectorNotification=notificationPartenariat::getNotificationFromFile();

    QStandardItemModel *model = new QStandardItemModel(vectorNotification.size(),1,this);
    model->setHorizontalHeaderItem(0,new QStandardItem(QString("Notification")));
    for (int i=0;i<vectorNotification.size();i++){
    QStandardItem *Row = new QStandardItem(vectorNotification[i]);
    model->setItem(i,Row);
    }
    ui->tableView_notification->setModel(model);

}




QVector<QString> notificationPartenariat::getNotificationFromFile()
{

    QString fileName = "notification.txt",globalNotification="";
    QFile file(fileName);
    QVector <QString> notificationVector;
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    QTextStream in(&file);
    while (!in.atEnd()){
        QString line= in.readLine();
        notificationVector.push_back(line);
        globalNotification+=line+"\n";
    }

    file.close();
    return notificationVector;
}

void notificationPartenariat::on_tableView_notification_clicked(const QModelIndex &index)
{
    QMap <QString,QString> mapNotification;
    mapNotification=domPartenariat.getMapNotification();
    this->partenariatSelected=mapNotification[ui->tableView_notification->currentIndex().sibling(ui->tableView_notification->currentIndex().row(),0).data().toString()];
}

void notificationPartenariat::on_pushButton_ignorerNotification_clicked()
{
    if (this->partenariatSelected!=""){

                domPartenariat.setPartenaire(this->partenariatSelected);
                domPartenariat.setNotification(0);

    }
    else {
        qDebug()<<"VEUILLEZ SELECTIONNER UNE PARTENARIAT";
    }


}
