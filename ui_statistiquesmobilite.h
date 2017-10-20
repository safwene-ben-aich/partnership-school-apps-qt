/********************************************************************************
** Form generated from reading UI file 'statistiquesmobilite.ui'
**
** Created: Thu 27. Aug 23:45:18 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTIQUESMOBILITE_H
#define UI_STATISTIQUESMOBILITE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_statistiquesMobilite
{
public:
    QCustomPlot *customPlot;
    QCustomPlot *customPlot_2;
    QTableView *tableView;
    QPushButton *pushButton_capturerCustomPlot;
    QPushButton *pushButton_capturerCustomPlot_2;
    QPushButton *pushButton_capturerTableauStat;

    void setupUi(QDialog *statistiquesMobilite)
    {
        if (statistiquesMobilite->objectName().isEmpty())
            statistiquesMobilite->setObjectName(QString::fromUtf8("statistiquesMobilite"));
        statistiquesMobilite->resize(1150, 628);
        customPlot = new QCustomPlot(statistiquesMobilite);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(10, 12, 551, 411));
        customPlot_2 = new QCustomPlot(statistiquesMobilite);
        customPlot_2->setObjectName(QString::fromUtf8("customPlot_2"));
        customPlot_2->setGeometry(QRect(590, 10, 551, 411));
        tableView = new QTableView(statistiquesMobilite);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(26, 470, 1091, 111));
        pushButton_capturerCustomPlot = new QPushButton(statistiquesMobilite);
        pushButton_capturerCustomPlot->setObjectName(QString::fromUtf8("pushButton_capturerCustomPlot"));
        pushButton_capturerCustomPlot->setGeometry(QRect(469, 432, 93, 28));
        pushButton_capturerCustomPlot_2 = new QPushButton(statistiquesMobilite);
        pushButton_capturerCustomPlot_2->setObjectName(QString::fromUtf8("pushButton_capturerCustomPlot_2"));
        pushButton_capturerCustomPlot_2->setGeometry(QRect(1025, 432, 93, 28));
        pushButton_capturerTableauStat = new QPushButton(statistiquesMobilite);
        pushButton_capturerTableauStat->setObjectName(QString::fromUtf8("pushButton_capturerTableauStat"));
        pushButton_capturerTableauStat->setGeometry(QRect(1025, 591, 93, 28));

        retranslateUi(statistiquesMobilite);

        QMetaObject::connectSlotsByName(statistiquesMobilite);
    } // setupUi

    void retranslateUi(QDialog *statistiquesMobilite)
    {
        statistiquesMobilite->setWindowTitle(QApplication::translate("statistiquesMobilite", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_capturerCustomPlot->setText(QApplication::translate("statistiquesMobilite", "Capturer", 0, QApplication::UnicodeUTF8));
        pushButton_capturerCustomPlot_2->setText(QApplication::translate("statistiquesMobilite", "Capturer", 0, QApplication::UnicodeUTF8));
        pushButton_capturerTableauStat->setText(QApplication::translate("statistiquesMobilite", "Capturer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class statistiquesMobilite: public Ui_statistiquesMobilite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTIQUESMOBILITE_H
