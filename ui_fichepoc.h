/********************************************************************************
** Form generated from reading UI file 'fichepoc.ui'
**
** Created: Fri 4. Sep 09:58:54 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FICHEPOC_H
#define UI_FICHEPOC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>

QT_BEGIN_NAMESPACE

class Ui_fichePOC
{
public:
    QLabel *label_nomPOC;
    QLineEdit *lineEdit_nomPOC;
    QLabel *label_prenomPOC;
    QLineEdit *lineEdit_prenomPOC;
    QLineEdit *lineEdit_institutionPOC;
    QLabel *label_institutionPOC;
    QLabel *label_mailPOC;
    QLineEdit *lineEdit_mailPOC;
    QLineEdit *lineEdit_telephonePOC;
    QLabel *label_telephonePOC;
    QLineEdit *lineEdit_FAXPOC;
    QLabel *label_FAXPOC;
    QLabel *label_fonctionPOC;
    QPlainTextEdit *plainTextEdit_commentairePOC;
    QLabel *label_commentairePOC;
    QPlainTextEdit *plainTextEdit_fonctionPOC;
    QPushButton *pushButton_bloquedPOC;
    QPushButton *pushButton_supprimerPOC;
    QTableView *tableView_commentairePOC;
    QPushButton *pushButton_sauvegarderPOC;
    QLabel *label_nomPOCControl;
    QLabel *label_prenomPOCControl;
    QLabel *label_institutionControl;
    QLabel *label_mailControl;
    QLabel *label_telephoneControl;
    QLabel *label_faxControl;
    QLabel *label_fonctionControl;
    QLabel *label_commentairePOCControl;

    void setupUi(QDialog *fichePOC)
    {
        if (fichePOC->objectName().isEmpty())
            fichePOC->setObjectName(QString::fromUtf8("fichePOC"));
        fichePOC->resize(444, 541);
        label_nomPOC = new QLabel(fichePOC);
        label_nomPOC->setObjectName(QString::fromUtf8("label_nomPOC"));
        label_nomPOC->setGeometry(QRect(40, 30, 31, 16));
        lineEdit_nomPOC = new QLineEdit(fichePOC);
        lineEdit_nomPOC->setObjectName(QString::fromUtf8("lineEdit_nomPOC"));
        lineEdit_nomPOC->setGeometry(QRect(140, 30, 161, 22));
        label_prenomPOC = new QLabel(fichePOC);
        label_prenomPOC->setObjectName(QString::fromUtf8("label_prenomPOC"));
        label_prenomPOC->setGeometry(QRect(40, 60, 53, 16));
        lineEdit_prenomPOC = new QLineEdit(fichePOC);
        lineEdit_prenomPOC->setObjectName(QString::fromUtf8("lineEdit_prenomPOC"));
        lineEdit_prenomPOC->setGeometry(QRect(140, 60, 160, 22));
        lineEdit_institutionPOC = new QLineEdit(fichePOC);
        lineEdit_institutionPOC->setObjectName(QString::fromUtf8("lineEdit_institutionPOC"));
        lineEdit_institutionPOC->setGeometry(QRect(140, 90, 160, 22));
        label_institutionPOC = new QLabel(fichePOC);
        label_institutionPOC->setObjectName(QString::fromUtf8("label_institutionPOC"));
        label_institutionPOC->setGeometry(QRect(39, 90, 61, 16));
        label_mailPOC = new QLabel(fichePOC);
        label_mailPOC->setObjectName(QString::fromUtf8("label_mailPOC"));
        label_mailPOC->setGeometry(QRect(40, 140, 31, 16));
        lineEdit_mailPOC = new QLineEdit(fichePOC);
        lineEdit_mailPOC->setObjectName(QString::fromUtf8("lineEdit_mailPOC"));
        lineEdit_mailPOC->setGeometry(QRect(140, 140, 160, 22));
        lineEdit_telephonePOC = new QLineEdit(fichePOC);
        lineEdit_telephonePOC->setObjectName(QString::fromUtf8("lineEdit_telephonePOC"));
        lineEdit_telephonePOC->setGeometry(QRect(140, 170, 160, 22));
        label_telephonePOC = new QLabel(fichePOC);
        label_telephonePOC->setObjectName(QString::fromUtf8("label_telephonePOC"));
        label_telephonePOC->setGeometry(QRect(38, 170, 61, 16));
        lineEdit_FAXPOC = new QLineEdit(fichePOC);
        lineEdit_FAXPOC->setObjectName(QString::fromUtf8("lineEdit_FAXPOC"));
        lineEdit_FAXPOC->setGeometry(QRect(140, 200, 160, 22));
        label_FAXPOC = new QLabel(fichePOC);
        label_FAXPOC->setObjectName(QString::fromUtf8("label_FAXPOC"));
        label_FAXPOC->setGeometry(QRect(40, 200, 31, 16));
        label_fonctionPOC = new QLabel(fichePOC);
        label_fonctionPOC->setObjectName(QString::fromUtf8("label_fonctionPOC"));
        label_fonctionPOC->setGeometry(QRect(40, 248, 51, 16));
        plainTextEdit_commentairePOC = new QPlainTextEdit(fichePOC);
        plainTextEdit_commentairePOC->setObjectName(QString::fromUtf8("plainTextEdit_commentairePOC"));
        plainTextEdit_commentairePOC->setGeometry(QRect(140, 310, 163, 53));
        label_commentairePOC = new QLabel(fichePOC);
        label_commentairePOC->setObjectName(QString::fromUtf8("label_commentairePOC"));
        label_commentairePOC->setGeometry(QRect(40, 310, 91, 16));
        plainTextEdit_fonctionPOC = new QPlainTextEdit(fichePOC);
        plainTextEdit_fonctionPOC->setObjectName(QString::fromUtf8("plainTextEdit_fonctionPOC"));
        plainTextEdit_fonctionPOC->setGeometry(QRect(140, 248, 163, 53));
        pushButton_bloquedPOC = new QPushButton(fichePOC);
        pushButton_bloquedPOC->setObjectName(QString::fromUtf8("pushButton_bloquedPOC"));
        pushButton_bloquedPOC->setGeometry(QRect(340, 503, 93, 28));
        pushButton_supprimerPOC = new QPushButton(fichePOC);
        pushButton_supprimerPOC->setObjectName(QString::fromUtf8("pushButton_supprimerPOC"));
        pushButton_supprimerPOC->setGeometry(QRect(240, 503, 93, 28));
        tableView_commentairePOC = new QTableView(fichePOC);
        tableView_commentairePOC->setObjectName(QString::fromUtf8("tableView_commentairePOC"));
        tableView_commentairePOC->setGeometry(QRect(10, 393, 421, 91));
        pushButton_sauvegarderPOC = new QPushButton(fichePOC);
        pushButton_sauvegarderPOC->setObjectName(QString::fromUtf8("pushButton_sauvegarderPOC"));
        pushButton_sauvegarderPOC->setGeometry(QRect(140, 503, 93, 28));
        label_nomPOCControl = new QLabel(fichePOC);
        label_nomPOCControl->setObjectName(QString::fromUtf8("label_nomPOCControl"));
        label_nomPOCControl->setGeometry(QRect(310, 30, 20, 20));
        label_prenomPOCControl = new QLabel(fichePOC);
        label_prenomPOCControl->setObjectName(QString::fromUtf8("label_prenomPOCControl"));
        label_prenomPOCControl->setGeometry(QRect(310, 60, 20, 20));
        label_institutionControl = new QLabel(fichePOC);
        label_institutionControl->setObjectName(QString::fromUtf8("label_institutionControl"));
        label_institutionControl->setGeometry(QRect(310, 90, 20, 20));
        label_mailControl = new QLabel(fichePOC);
        label_mailControl->setObjectName(QString::fromUtf8("label_mailControl"));
        label_mailControl->setGeometry(QRect(310, 140, 20, 20));
        label_telephoneControl = new QLabel(fichePOC);
        label_telephoneControl->setObjectName(QString::fromUtf8("label_telephoneControl"));
        label_telephoneControl->setGeometry(QRect(310, 170, 20, 20));
        label_faxControl = new QLabel(fichePOC);
        label_faxControl->setObjectName(QString::fromUtf8("label_faxControl"));
        label_faxControl->setGeometry(QRect(310, 200, 20, 20));
        label_fonctionControl = new QLabel(fichePOC);
        label_fonctionControl->setObjectName(QString::fromUtf8("label_fonctionControl"));
        label_fonctionControl->setGeometry(QRect(310, 251, 20, 20));
        label_commentairePOCControl = new QLabel(fichePOC);
        label_commentairePOCControl->setObjectName(QString::fromUtf8("label_commentairePOCControl"));
        label_commentairePOCControl->setGeometry(QRect(310, 314, 20, 20));

        retranslateUi(fichePOC);

        QMetaObject::connectSlotsByName(fichePOC);
    } // setupUi

    void retranslateUi(QDialog *fichePOC)
    {
        fichePOC->setWindowTitle(QApplication::translate("fichePOC", "Dialog", 0, QApplication::UnicodeUTF8));
        label_nomPOC->setText(QApplication::translate("fichePOC", "Nom ", 0, QApplication::UnicodeUTF8));
        label_prenomPOC->setText(QApplication::translate("fichePOC", "Prenom", 0, QApplication::UnicodeUTF8));
        label_institutionPOC->setText(QApplication::translate("fichePOC", "Institution", 0, QApplication::UnicodeUTF8));
        label_mailPOC->setText(QApplication::translate("fichePOC", "Email ", 0, QApplication::UnicodeUTF8));
        label_telephonePOC->setText(QApplication::translate("fichePOC", "Telephone", 0, QApplication::UnicodeUTF8));
        label_FAXPOC->setText(QApplication::translate("fichePOC", "FAX ", 0, QApplication::UnicodeUTF8));
        label_fonctionPOC->setText(QApplication::translate("fichePOC", "Fonction ", 0, QApplication::UnicodeUTF8));
        label_commentairePOC->setText(QApplication::translate("fichePOC", "Commentaire", 0, QApplication::UnicodeUTF8));
        pushButton_bloquedPOC->setText(QApplication::translate("fichePOC", "Debloquer", 0, QApplication::UnicodeUTF8));
        pushButton_supprimerPOC->setText(QApplication::translate("fichePOC", "Supprimer", 0, QApplication::UnicodeUTF8));
        pushButton_sauvegarderPOC->setText(QApplication::translate("fichePOC", "Sauvegarder", 0, QApplication::UnicodeUTF8));
        label_nomPOCControl->setText(QString());
        label_prenomPOCControl->setText(QString());
        label_institutionControl->setText(QString());
        label_mailControl->setText(QString());
        label_telephoneControl->setText(QString());
        label_faxControl->setText(QString());
        label_fonctionControl->setText(QString());
        label_commentairePOCControl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class fichePOC: public Ui_fichePOC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FICHEPOC_H
