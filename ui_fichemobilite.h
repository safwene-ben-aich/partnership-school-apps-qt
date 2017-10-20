/********************************************************************************
** Form generated from reading UI file 'fichemobilite.ui'
**
** Created: Thu 27. Aug 23:45:18 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FICHEMOBILITE_H
#define UI_FICHEMOBILITE_H

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

class Ui_ficheMobilite
{
public:
    QPushButton *pushButton_sauvegarderMobilite;
    QPushButton *pushButton_supprimerMobilite;
    QPushButton *pushButton_bloquedMobilite;
    QLabel *label_dureeControl;
    QLabel *label_prenomControl;
    QLineEdit *lineEdit_annee;
    QLineEdit *lineEdit_duree;
    QLineEdit *lineEdit_prenom;
    QLabel *label_commentaireControl;
    QLabel *label_duree;
    QLabel *label_anneeControl;
    QLabel *label_ecole;
    QPlainTextEdit *plainTextEdit_commentaire;
    QLabel *label_pays;
    QLabel *label_annee;
    QLabel *label_classeControl;
    QLabel *label_paysControl;
    QLabel *label_ecoleControl;
    QLabel *label_diplomeControl;
    QLabel *label_commentaire;
    QLabel *label_diplome;
    QLineEdit *lineEdit_nom;
    QLabel *label_nomControl;
    QLabel *label_classe;
    QLabel *label_prenom;
    QLabel *label_nom;
    QLineEdit *lineEdit_classe;
    QLineEdit *lineEdit_ecole;
    QLineEdit *lineEdit_diplome;
    QLineEdit *lineEdit_pays;
    QTableView *tableView;

    void setupUi(QDialog *ficheMobilite)
    {
        if (ficheMobilite->objectName().isEmpty())
            ficheMobilite->setObjectName(QString::fromUtf8("ficheMobilite"));
        ficheMobilite->resize(442, 538);
        pushButton_sauvegarderMobilite = new QPushButton(ficheMobilite);
        pushButton_sauvegarderMobilite->setObjectName(QString::fromUtf8("pushButton_sauvegarderMobilite"));
        pushButton_sauvegarderMobilite->setGeometry(QRect(140, 500, 93, 28));
        pushButton_supprimerMobilite = new QPushButton(ficheMobilite);
        pushButton_supprimerMobilite->setObjectName(QString::fromUtf8("pushButton_supprimerMobilite"));
        pushButton_supprimerMobilite->setGeometry(QRect(240, 500, 93, 28));
        pushButton_bloquedMobilite = new QPushButton(ficheMobilite);
        pushButton_bloquedMobilite->setObjectName(QString::fromUtf8("pushButton_bloquedMobilite"));
        pushButton_bloquedMobilite->setGeometry(QRect(340, 500, 93, 28));
        label_dureeControl = new QLabel(ficheMobilite);
        label_dureeControl->setObjectName(QString::fromUtf8("label_dureeControl"));
        label_dureeControl->setGeometry(QRect(320, 279, 20, 20));
        label_prenomControl = new QLabel(ficheMobilite);
        label_prenomControl->setObjectName(QString::fromUtf8("label_prenomControl"));
        label_prenomControl->setGeometry(QRect(320, 60, 20, 20));
        lineEdit_annee = new QLineEdit(ficheMobilite);
        lineEdit_annee->setObjectName(QString::fromUtf8("lineEdit_annee"));
        lineEdit_annee->setGeometry(QRect(150, 249, 161, 22));
        lineEdit_duree = new QLineEdit(ficheMobilite);
        lineEdit_duree->setObjectName(QString::fromUtf8("lineEdit_duree"));
        lineEdit_duree->setGeometry(QRect(150, 279, 161, 22));
        lineEdit_prenom = new QLineEdit(ficheMobilite);
        lineEdit_prenom->setObjectName(QString::fromUtf8("lineEdit_prenom"));
        lineEdit_prenom->setGeometry(QRect(150, 57, 161, 22));
        label_commentaireControl = new QLabel(ficheMobilite);
        label_commentaireControl->setObjectName(QString::fromUtf8("label_commentaireControl"));
        label_commentaireControl->setGeometry(QRect(320, 320, 20, 20));
        label_duree = new QLabel(ficheMobilite);
        label_duree->setObjectName(QString::fromUtf8("label_duree"));
        label_duree->setGeometry(QRect(40, 284, 51, 16));
        label_anneeControl = new QLabel(ficheMobilite);
        label_anneeControl->setObjectName(QString::fromUtf8("label_anneeControl"));
        label_anneeControl->setGeometry(QRect(320, 249, 20, 20));
        label_ecole = new QLabel(ficheMobilite);
        label_ecole->setObjectName(QString::fromUtf8("label_ecole"));
        label_ecole->setGeometry(QRect(40, 145, 31, 16));
        plainTextEdit_commentaire = new QPlainTextEdit(ficheMobilite);
        plainTextEdit_commentaire->setObjectName(QString::fromUtf8("plainTextEdit_commentaire"));
        plainTextEdit_commentaire->setGeometry(QRect(149, 308, 161, 51));
        label_pays = new QLabel(ficheMobilite);
        label_pays->setObjectName(QString::fromUtf8("label_pays"));
        label_pays->setGeometry(QRect(40, 201, 31, 16));
        label_annee = new QLabel(ficheMobilite);
        label_annee->setObjectName(QString::fromUtf8("label_annee"));
        label_annee->setGeometry(QRect(40, 254, 41, 16));
        label_classeControl = new QLabel(ficheMobilite);
        label_classeControl->setObjectName(QString::fromUtf8("label_classeControl"));
        label_classeControl->setGeometry(QRect(320, 87, 20, 20));
        label_paysControl = new QLabel(ficheMobilite);
        label_paysControl->setObjectName(QString::fromUtf8("label_paysControl"));
        label_paysControl->setGeometry(QRect(320, 200, 20, 20));
        label_ecoleControl = new QLabel(ficheMobilite);
        label_ecoleControl->setObjectName(QString::fromUtf8("label_ecoleControl"));
        label_ecoleControl->setGeometry(QRect(320, 141, 20, 20));
        label_diplomeControl = new QLabel(ficheMobilite);
        label_diplomeControl->setObjectName(QString::fromUtf8("label_diplomeControl"));
        label_diplomeControl->setGeometry(QRect(320, 169, 20, 20));
        label_commentaire = new QLabel(ficheMobilite);
        label_commentaire->setObjectName(QString::fromUtf8("label_commentaire"));
        label_commentaire->setGeometry(QRect(40, 318, 81, 16));
        label_diplome = new QLabel(ficheMobilite);
        label_diplome->setObjectName(QString::fromUtf8("label_diplome"));
        label_diplome->setGeometry(QRect(40, 173, 51, 16));
        lineEdit_nom = new QLineEdit(ficheMobilite);
        lineEdit_nom->setObjectName(QString::fromUtf8("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(150, 27, 161, 22));
        label_nomControl = new QLabel(ficheMobilite);
        label_nomControl->setObjectName(QString::fromUtf8("label_nomControl"));
        label_nomControl->setGeometry(QRect(320, 31, 20, 20));
        label_classe = new QLabel(ficheMobilite);
        label_classe->setObjectName(QString::fromUtf8("label_classe"));
        label_classe->setGeometry(QRect(40, 92, 41, 16));
        label_prenom = new QLabel(ficheMobilite);
        label_prenom->setObjectName(QString::fromUtf8("label_prenom"));
        label_prenom->setGeometry(QRect(40, 62, 51, 16));
        label_nom = new QLabel(ficheMobilite);
        label_nom->setObjectName(QString::fromUtf8("label_nom"));
        label_nom->setGeometry(QRect(40, 32, 31, 16));
        lineEdit_classe = new QLineEdit(ficheMobilite);
        lineEdit_classe->setObjectName(QString::fromUtf8("lineEdit_classe"));
        lineEdit_classe->setGeometry(QRect(150, 90, 161, 22));
        lineEdit_ecole = new QLineEdit(ficheMobilite);
        lineEdit_ecole->setObjectName(QString::fromUtf8("lineEdit_ecole"));
        lineEdit_ecole->setGeometry(QRect(150, 140, 161, 22));
        lineEdit_diplome = new QLineEdit(ficheMobilite);
        lineEdit_diplome->setObjectName(QString::fromUtf8("lineEdit_diplome"));
        lineEdit_diplome->setGeometry(QRect(150, 170, 161, 22));
        lineEdit_pays = new QLineEdit(ficheMobilite);
        lineEdit_pays->setObjectName(QString::fromUtf8("lineEdit_pays"));
        lineEdit_pays->setGeometry(QRect(150, 200, 161, 22));
        tableView = new QTableView(ficheMobilite);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 390, 421, 91));
        QWidget::setTabOrder(lineEdit_nom, lineEdit_prenom);
        QWidget::setTabOrder(lineEdit_prenom, lineEdit_classe);
        QWidget::setTabOrder(lineEdit_classe, lineEdit_ecole);
        QWidget::setTabOrder(lineEdit_ecole, lineEdit_diplome);
        QWidget::setTabOrder(lineEdit_diplome, lineEdit_pays);
        QWidget::setTabOrder(lineEdit_pays, lineEdit_annee);
        QWidget::setTabOrder(lineEdit_annee, lineEdit_duree);
        QWidget::setTabOrder(lineEdit_duree, plainTextEdit_commentaire);
        QWidget::setTabOrder(plainTextEdit_commentaire, pushButton_sauvegarderMobilite);
        QWidget::setTabOrder(pushButton_sauvegarderMobilite, pushButton_supprimerMobilite);
        QWidget::setTabOrder(pushButton_supprimerMobilite, pushButton_bloquedMobilite);
        QWidget::setTabOrder(pushButton_bloquedMobilite, tableView);

        retranslateUi(ficheMobilite);

        QMetaObject::connectSlotsByName(ficheMobilite);
    } // setupUi

    void retranslateUi(QDialog *ficheMobilite)
    {
        ficheMobilite->setWindowTitle(QApplication::translate("ficheMobilite", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_sauvegarderMobilite->setText(QApplication::translate("ficheMobilite", "Sauvegarder", 0, QApplication::UnicodeUTF8));
        pushButton_supprimerMobilite->setText(QApplication::translate("ficheMobilite", "Supprimer", 0, QApplication::UnicodeUTF8));
        pushButton_bloquedMobilite->setText(QApplication::translate("ficheMobilite", "Debloquer", 0, QApplication::UnicodeUTF8));
        label_dureeControl->setText(QString());
        label_prenomControl->setText(QString());
        label_commentaireControl->setText(QString());
        label_duree->setText(QApplication::translate("ficheMobilite", "Duree", 0, QApplication::UnicodeUTF8));
        label_anneeControl->setText(QString());
        label_ecole->setText(QApplication::translate("ficheMobilite", "Ecole", 0, QApplication::UnicodeUTF8));
        label_pays->setText(QApplication::translate("ficheMobilite", "Pays", 0, QApplication::UnicodeUTF8));
        label_annee->setText(QApplication::translate("ficheMobilite", "Annee", 0, QApplication::UnicodeUTF8));
        label_classeControl->setText(QString());
        label_paysControl->setText(QString());
        label_ecoleControl->setText(QString());
        label_diplomeControl->setText(QString());
        label_commentaire->setText(QApplication::translate("ficheMobilite", "Commentaire", 0, QApplication::UnicodeUTF8));
        label_diplome->setText(QApplication::translate("ficheMobilite", "Diplome", 0, QApplication::UnicodeUTF8));
        label_nomControl->setText(QString());
        label_classe->setText(QApplication::translate("ficheMobilite", "Classe", 0, QApplication::UnicodeUTF8));
        label_prenom->setText(QApplication::translate("ficheMobilite", "Prenom", 0, QApplication::UnicodeUTF8));
        label_nom->setText(QApplication::translate("ficheMobilite", "Nom", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ficheMobilite: public Ui_ficheMobilite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FICHEMOBILITE_H
