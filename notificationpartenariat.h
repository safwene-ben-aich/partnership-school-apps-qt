#ifndef NOTIFICATIONPARTENARIAT_H
#define NOTIFICATIONPARTENARIAT_H

#include <QDialog>
#include <dombase.h>
#include "defs.h"

namespace Ui {
class notificationPartenariat;
}

class notificationPartenariat : public QDialog
{
    Q_OBJECT
    
public:
    explicit notificationPartenariat(QWidget *parent = 0);
    ~notificationPartenariat();    
    QVector <QString>getNotificationFromFile();
private slots :
    void prepareTableViewNotification();
    void on_tableView_notification_clicked(const QModelIndex &index);

    void on_pushButton_ignorerNotification_clicked();

private:
    QString partenariatSelected;
    DomPartenariat domPartenariat;
    Ui::notificationPartenariat *ui;
};

#endif // NOTIFICATIONPARTENARIAT_H
