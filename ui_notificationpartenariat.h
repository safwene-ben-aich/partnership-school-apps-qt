/********************************************************************************
** Form generated from reading UI file 'notificationpartenariat.ui'
**
** Created: Thu 27. Aug 23:45:18 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTIFICATIONPARTENARIAT_H
#define UI_NOTIFICATIONPARTENARIAT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>

QT_BEGIN_NAMESPACE

class Ui_notificationPartenariat
{
public:
    QTableView *tableView_notification;
    QPushButton *pushButton_ignorerNotification;

    void setupUi(QDialog *notificationPartenariat)
    {
        if (notificationPartenariat->objectName().isEmpty())
            notificationPartenariat->setObjectName(QString::fromUtf8("notificationPartenariat"));
        notificationPartenariat->resize(759, 329);
        tableView_notification = new QTableView(notificationPartenariat);
        tableView_notification->setObjectName(QString::fromUtf8("tableView_notification"));
        tableView_notification->setGeometry(QRect(10, 20, 741, 261));
        pushButton_ignorerNotification = new QPushButton(notificationPartenariat);
        pushButton_ignorerNotification->setObjectName(QString::fromUtf8("pushButton_ignorerNotification"));
        pushButton_ignorerNotification->setGeometry(QRect(10, 290, 93, 28));

        retranslateUi(notificationPartenariat);

        QMetaObject::connectSlotsByName(notificationPartenariat);
    } // setupUi

    void retranslateUi(QDialog *notificationPartenariat)
    {
        notificationPartenariat->setWindowTitle(QApplication::translate("notificationPartenariat", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_ignorerNotification->setText(QApplication::translate("notificationPartenariat", "Ignorer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class notificationPartenariat: public Ui_notificationPartenariat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTIFICATIONPARTENARIAT_H
