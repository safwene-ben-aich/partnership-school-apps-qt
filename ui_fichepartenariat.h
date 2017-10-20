/********************************************************************************
** Form generated from reading UI file 'fichepartenariat.ui'
**
** Created: Fri 4. Sep 09:35:07 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FICHEPARTENARIAT_H
#define UI_FICHEPARTENARIAT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>

QT_BEGIN_NAMESPACE

class Ui_fichePartenariat
{
public:
    QLineEdit *lineEdit_partenaire;
    QLineEdit *lineEdit_duree;
    QLabel *label_partenaire;
    QLabel *label_dateDebut;
    QLabel *label_duree;
    QLabel *label_type;
    QLineEdit *lineEdit_type;
    QLabel *label_anneeReconduction;
    QLineEdit *lineEdit_anneeReconduction;
    QLabel *label_description;
    QLabel *label_commentaire;
    QLabel *label_poc;
    QLineEdit *lineEdit_poc;
    QLabel *label_realisations;
    QLineEdit *lineEdit_pays;
    QLabel *label_pays;
    QDateEdit *dateEdit_dateDebut;
    QPushButton *pushButton_supprimerPartenariat;
    QPushButton *pushButton_sauvegarderPartenariat;
    QPushButton *pushButton_bloquedPartenariat;
    QPlainTextEdit *plainTextEdit_commentaire;
    QPlainTextEdit *plainTextEdit_description;
    QLabel *label_partenaireControl;
    QLabel *label_dateDebutControl;
    QLabel *label_dureeControl;
    QLabel *label_typeControl;
    QLabel *label_anneeReconductionControl;
    QLabel *label_pocControl;
    QLabel *label_realisationsControl;
    QLabel *label_paysControl;
    QLabel *label_descriptionControl;
    QLabel *label_commentaireControl;
    QTableView *tableView_commentaire;
    QPlainTextEdit *plainTextEdit_realisations;

    void setupUi(QDialog *fichePartenariat)
    {
        if (fichePartenariat->objectName().isEmpty())
            fichePartenariat->setObjectName(QString::fromUtf8("fichePartenariat"));
        fichePartenariat->resize(458, 630);
        lineEdit_partenaire = new QLineEdit(fichePartenariat);
        lineEdit_partenaire->setObjectName(QString::fromUtf8("lineEdit_partenaire"));
        lineEdit_partenaire->setGeometry(QRect(170, 28, 161, 22));
        lineEdit_duree = new QLineEdit(fichePartenariat);
        lineEdit_duree->setObjectName(QString::fromUtf8("lineEdit_duree"));
        lineEdit_duree->setGeometry(QRect(170, 91, 161, 22));
        label_partenaire = new QLabel(fichePartenariat);
        label_partenaire->setObjectName(QString::fromUtf8("label_partenaire"));
        label_partenaire->setGeometry(QRect(40, 34, 81, 16));
        label_dateDebut = new QLabel(fichePartenariat);
        label_dateDebut->setObjectName(QString::fromUtf8("label_dateDebut"));
        label_dateDebut->setGeometry(QRect(40, 65, 81, 16));
        label_duree = new QLabel(fichePartenariat);
        label_duree->setObjectName(QString::fromUtf8("label_duree"));
        label_duree->setGeometry(QRect(40, 90, 51, 20));
        label_type = new QLabel(fichePartenariat);
        label_type->setObjectName(QString::fromUtf8("label_type"));
        label_type->setGeometry(QRect(40, 120, 51, 20));
        lineEdit_type = new QLineEdit(fichePartenariat);
        lineEdit_type->setObjectName(QString::fromUtf8("lineEdit_type"));
        lineEdit_type->setGeometry(QRect(170, 121, 161, 22));
        label_anneeReconduction = new QLabel(fichePartenariat);
        label_anneeReconduction->setObjectName(QString::fromUtf8("label_anneeReconduction"));
        label_anneeReconduction->setGeometry(QRect(40, 168, 121, 20));
        lineEdit_anneeReconduction = new QLineEdit(fichePartenariat);
        lineEdit_anneeReconduction->setObjectName(QString::fromUtf8("lineEdit_anneeReconduction"));
        lineEdit_anneeReconduction->setGeometry(QRect(170, 169, 161, 22));
        label_description = new QLabel(fichePartenariat);
        label_description->setObjectName(QString::fromUtf8("label_description"));
        label_description->setGeometry(QRect(40, 340, 71, 20));
        label_commentaire = new QLabel(fichePartenariat);
        label_commentaire->setObjectName(QString::fromUtf8("label_commentaire"));
        label_commentaire->setGeometry(QRect(40, 400, 91, 20));
        label_poc = new QLabel(fichePartenariat);
        label_poc->setObjectName(QString::fromUtf8("label_poc"));
        label_poc->setGeometry(QRect(40, 198, 41, 20));
        lineEdit_poc = new QLineEdit(fichePartenariat);
        lineEdit_poc->setObjectName(QString::fromUtf8("lineEdit_poc"));
        lineEdit_poc->setGeometry(QRect(170, 199, 161, 22));
        label_realisations = new QLabel(fichePartenariat);
        label_realisations->setObjectName(QString::fromUtf8("label_realisations"));
        label_realisations->setGeometry(QRect(40, 280, 91, 20));
        lineEdit_pays = new QLineEdit(fichePartenariat);
        lineEdit_pays->setObjectName(QString::fromUtf8("lineEdit_pays"));
        lineEdit_pays->setGeometry(QRect(170, 229, 161, 22));
        label_pays = new QLabel(fichePartenariat);
        label_pays->setObjectName(QString::fromUtf8("label_pays"));
        label_pays->setGeometry(QRect(40, 228, 41, 20));
        dateEdit_dateDebut = new QDateEdit(fichePartenariat);
        dateEdit_dateDebut->setObjectName(QString::fromUtf8("dateEdit_dateDebut"));
        dateEdit_dateDebut->setGeometry(QRect(170, 60, 163, 22));
        pushButton_supprimerPartenariat = new QPushButton(fichePartenariat);
        pushButton_supprimerPartenariat->setObjectName(QString::fromUtf8("pushButton_supprimerPartenariat"));
        pushButton_supprimerPartenariat->setGeometry(QRect(250, 590, 93, 28));
        pushButton_sauvegarderPartenariat = new QPushButton(fichePartenariat);
        pushButton_sauvegarderPartenariat->setObjectName(QString::fromUtf8("pushButton_sauvegarderPartenariat"));
        pushButton_sauvegarderPartenariat->setGeometry(QRect(150, 590, 93, 28));
        pushButton_bloquedPartenariat = new QPushButton(fichePartenariat);
        pushButton_bloquedPartenariat->setObjectName(QString::fromUtf8("pushButton_bloquedPartenariat"));
        pushButton_bloquedPartenariat->setGeometry(QRect(350, 590, 93, 28));
        plainTextEdit_commentaire = new QPlainTextEdit(fichePartenariat);
        plainTextEdit_commentaire->setObjectName(QString::fromUtf8("plainTextEdit_commentaire"));
        plainTextEdit_commentaire->setGeometry(QRect(170, 340, 161, 51));
        plainTextEdit_description = new QPlainTextEdit(fichePartenariat);
        plainTextEdit_description->setObjectName(QString::fromUtf8("plainTextEdit_description"));
        plainTextEdit_description->setGeometry(QRect(170, 280, 161, 51));
        label_partenaireControl = new QLabel(fichePartenariat);
        label_partenaireControl->setObjectName(QString::fromUtf8("label_partenaireControl"));
        label_partenaireControl->setGeometry(QRect(340, 29, 20, 20));
        label_dateDebutControl = new QLabel(fichePartenariat);
        label_dateDebutControl->setObjectName(QString::fromUtf8("label_dateDebutControl"));
        label_dateDebutControl->setGeometry(QRect(340, 60, 20, 20));
        label_dureeControl = new QLabel(fichePartenariat);
        label_dureeControl->setObjectName(QString::fromUtf8("label_dureeControl"));
        label_dureeControl->setGeometry(QRect(340, 91, 20, 20));
        label_typeControl = new QLabel(fichePartenariat);
        label_typeControl->setObjectName(QString::fromUtf8("label_typeControl"));
        label_typeControl->setGeometry(QRect(340, 123, 20, 20));
        label_anneeReconductionControl = new QLabel(fichePartenariat);
        label_anneeReconductionControl->setObjectName(QString::fromUtf8("label_anneeReconductionControl"));
        label_anneeReconductionControl->setGeometry(QRect(340, 170, 20, 20));
        label_pocControl = new QLabel(fichePartenariat);
        label_pocControl->setObjectName(QString::fromUtf8("label_pocControl"));
        label_pocControl->setGeometry(QRect(340, 200, 20, 20));
        label_realisationsControl = new QLabel(fichePartenariat);
        label_realisationsControl->setObjectName(QString::fromUtf8("label_realisationsControl"));
        label_realisationsControl->setGeometry(QRect(340, 283, 20, 20));
        label_paysControl = new QLabel(fichePartenariat);
        label_paysControl->setObjectName(QString::fromUtf8("label_paysControl"));
        label_paysControl->setGeometry(QRect(340, 230, 20, 20));
        label_descriptionControl = new QLabel(fichePartenariat);
        label_descriptionControl->setObjectName(QString::fromUtf8("label_descriptionControl"));
        label_descriptionControl->setGeometry(QRect(339, 343, 20, 20));
        label_commentaireControl = new QLabel(fichePartenariat);
        label_commentaireControl->setObjectName(QString::fromUtf8("label_commentaireControl"));
        label_commentaireControl->setGeometry(QRect(340, 404, 20, 20));
        tableView_commentaire = new QTableView(fichePartenariat);
        tableView_commentaire->setObjectName(QString::fromUtf8("tableView_commentaire"));
        tableView_commentaire->setGeometry(QRect(20, 483, 421, 91));
        plainTextEdit_realisations = new QPlainTextEdit(fichePartenariat);
        plainTextEdit_realisations->setObjectName(QString::fromUtf8("plainTextEdit_realisations"));
        plainTextEdit_realisations->setGeometry(QRect(170, 400, 161, 51));

        retranslateUi(fichePartenariat);

        QMetaObject::connectSlotsByName(fichePartenariat);
    } // setupUi

    void retranslateUi(QDialog *fichePartenariat)
    {
        fichePartenariat->setWindowTitle(QApplication::translate("fichePartenariat", "Dialog", 0, QApplication::UnicodeUTF8));
        label_partenaire->setText(QApplication::translate("fichePartenariat", "Partenaire ", 0, QApplication::UnicodeUTF8));
        label_dateDebut->setText(QApplication::translate("fichePartenariat", "Date debut ", 0, QApplication::UnicodeUTF8));
        label_duree->setText(QApplication::translate("fichePartenariat", "Duree", 0, QApplication::UnicodeUTF8));
        label_type->setText(QApplication::translate("fichePartenariat", "Type", 0, QApplication::UnicodeUTF8));
        label_anneeReconduction->setText(QApplication::translate("fichePartenariat", "Annee reconduction ", 0, QApplication::UnicodeUTF8));
        lineEdit_anneeReconduction->setText(QString());
        label_description->setText(QApplication::translate("fichePartenariat", "Description ", 0, QApplication::UnicodeUTF8));
        label_commentaire->setText(QApplication::translate("fichePartenariat", "Commentaire ", 0, QApplication::UnicodeUTF8));
        label_poc->setText(QApplication::translate("fichePartenariat", "POC  ", 0, QApplication::UnicodeUTF8));
        lineEdit_poc->setText(QString());
        label_realisations->setText(QApplication::translate("fichePartenariat", "Realisations ", 0, QApplication::UnicodeUTF8));
        lineEdit_pays->setText(QString());
        label_pays->setText(QApplication::translate("fichePartenariat", "Pays", 0, QApplication::UnicodeUTF8));
        pushButton_supprimerPartenariat->setText(QApplication::translate("fichePartenariat", "Supprimer", 0, QApplication::UnicodeUTF8));
        pushButton_sauvegarderPartenariat->setText(QApplication::translate("fichePartenariat", "Sauvegarder", 0, QApplication::UnicodeUTF8));
        pushButton_bloquedPartenariat->setText(QApplication::translate("fichePartenariat", "Debloquer", 0, QApplication::UnicodeUTF8));
        label_partenaireControl->setText(QString());
        label_dateDebutControl->setText(QString());
        label_dureeControl->setText(QString());
        label_typeControl->setText(QString());
        label_anneeReconductionControl->setText(QString());
        label_pocControl->setText(QString());
        label_realisationsControl->setText(QString());
        label_paysControl->setText(QString());
        label_descriptionControl->setText(QString());
        label_commentaireControl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class fichePartenariat: public Ui_fichePartenariat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FICHEPARTENARIAT_H
