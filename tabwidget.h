#ifndef TABWIDGET_H
#define TABWIDGET_H

#include <QTabWidget>
#include "Defs.h"
#include "dombase.h"
#include "fichemobilite.h"
#include "fichepartenariat.h"
#include "fichepoc.h"
#include "ficheinstitution.h"
#include "statistiquesmobilite.h"
#include "QtGui"
#include "iostream"
#include "notificationpartenariat.h"




namespace Ui {
class TabWidget;
}

class TabWidget : public QTabWidget
{
    Q_OBJECT

public:

    explicit TabWidget(QWidget *parent = 0);
    ~TabWidget();

    void prepareTabPartenariat();



    void prepareTabPOC();
    void prepareTabInstitution();
    void prepareTabMobilite();
    void prepareTabWidget();

private slots:

    void sectionClicked(int);

    void on_lineEdit_rechercheEtudiant_cursorPositionChanged(int arg1, int arg2);

    void on_tableView_Mobilite_doubleClicked(const QModelIndex &index);
    void on_pushButton_newMobilite_clicked();

    void on_pushButton_statistiquesMobilite_clicked();

    void on_pushButton_actualiserMobilite_clicked();

    void on_tableView_Mobilite_clicked(const QModelIndex &index);

    void on_tableView_Partenariat_doubleClicked(const QModelIndex &index);

    void on_pushButton_newPartenariat_clicked();

    void on_lineEdit_recherchePartenariat_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_actualiserPartenariat_clicked();

    void on_pushButton_notificationPartenariat_clicked();

    void on_tableView_Partenariat_clicked(const QModelIndex &index);

    void on_checkBox_affichagePartenariatNonActif_clicked();

    void on_lineEdit_recherchePOC_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_actualiserPOC_clicked();

    void on_tableView_POC_doubleClicked(const QModelIndex &index);

    void on_pushButton_newPOC_clicked();

    void on_lineEdit_rechercheInstitution_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_actualiserInstitution_clicked();

    void on_tableView_Institution_doubleClicked(const QModelIndex &index);

    void on_pushButton_newInstitution_clicked();

private:
    QPixmap PixRedIcon,PixGreenIcon;
    QItemSelectionModel* SelectionModel;
    DomPartenariat domPartenariat;
    DomMobilite domMobilite;
    DomPoc domPoc;
    DomInstitution domInstitution;
    Ui::TabWidget *ui;
    QHeaderView* m_pHeaderView;
};




#endif // TABWIDGET_H
