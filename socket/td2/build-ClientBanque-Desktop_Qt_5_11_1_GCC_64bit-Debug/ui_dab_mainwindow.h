/********************************************************************************
** Form generated from reading UI file 'dab_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAB_MAINWINDOW_H
#define UI_DAB_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DAB_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonConnexion;
    QLabel *labelMessage;
    QLineEdit *lineEditMessage;
    QGroupBox *groupBoxOperation;
    QPushButton *pushButtonEnvoi;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelMontant;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEditMontant;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonNumero;
    QLineEdit *lineEditNumero;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButtonSolde;
    QRadioButton *radioButtonRetrait;
    QRadioButton *radioButtonDepot;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout;
    QLabel *labelAdresse;
    QLineEdit *lineEditAdresse;
    QWidget *widget4;
    QVBoxLayout *verticalLayout;
    QLabel *labelEtat;
    QListWidget *listWidgetEtat;
    QWidget *widget5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelPort;
    QLineEdit *lineEditPort;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DAB_MainWindow)
    {
        if (DAB_MainWindow->objectName().isEmpty())
            DAB_MainWindow->setObjectName(QStringLiteral("DAB_MainWindow"));
        DAB_MainWindow->resize(467, 454);
        centralWidget = new QWidget(DAB_MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButtonConnexion = new QPushButton(centralWidget);
        pushButtonConnexion->setObjectName(QStringLiteral("pushButtonConnexion"));
        pushButtonConnexion->setGeometry(QRect(60, 120, 80, 25));
        labelMessage = new QLabel(centralWidget);
        labelMessage->setObjectName(QStringLiteral("labelMessage"));
        labelMessage->setGeometry(QRect(10, 180, 141, 17));
        lineEditMessage = new QLineEdit(centralWidget);
        lineEditMessage->setObjectName(QStringLiteral("lineEditMessage"));
        lineEditMessage->setGeometry(QRect(10, 210, 441, 25));
        lineEditMessage->setReadOnly(true);
        groupBoxOperation = new QGroupBox(centralWidget);
        groupBoxOperation->setObjectName(QStringLiteral("groupBoxOperation"));
        groupBoxOperation->setEnabled(false);
        groupBoxOperation->setGeometry(QRect(19, 239, 421, 161));
        pushButtonEnvoi = new QPushButton(groupBoxOperation);
        pushButtonEnvoi->setObjectName(QStringLiteral("pushButtonEnvoi"));
        pushButtonEnvoi->setGeometry(QRect(300, 120, 80, 25));
        widget = new QWidget(groupBoxOperation);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 60, 231, 27));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelMontant = new QLabel(widget);
        labelMontant->setObjectName(QStringLiteral("labelMontant"));

        horizontalLayout_3->addWidget(labelMontant);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        lineEditMontant = new QLineEdit(widget);
        lineEditMontant->setObjectName(QStringLiteral("lineEditMontant"));

        horizontalLayout_3->addWidget(lineEditMontant);

        widget1 = new QWidget(groupBoxOperation);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 30, 234, 27));
        horizontalLayout_4 = new QHBoxLayout(widget1);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButtonNumero = new QPushButton(widget1);
        pushButtonNumero->setObjectName(QStringLiteral("pushButtonNumero"));

        horizontalLayout_4->addWidget(pushButtonNumero);

        lineEditNumero = new QLineEdit(widget1);
        lineEditNumero->setObjectName(QStringLiteral("lineEditNumero"));

        horizontalLayout_4->addWidget(lineEditNumero);

        widget2 = new QWidget(groupBoxOperation);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(320, 30, 66, 83));
        verticalLayout_2 = new QVBoxLayout(widget2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButtonSolde = new QRadioButton(widget2);
        radioButtonSolde->setObjectName(QStringLiteral("radioButtonSolde"));

        verticalLayout_2->addWidget(radioButtonSolde);

        radioButtonRetrait = new QRadioButton(widget2);
        radioButtonRetrait->setObjectName(QStringLiteral("radioButtonRetrait"));

        verticalLayout_2->addWidget(radioButtonRetrait);

        radioButtonDepot = new QRadioButton(widget2);
        radioButtonDepot->setObjectName(QStringLiteral("radioButtonDepot"));

        verticalLayout_2->addWidget(radioButtonDepot);

        widget3 = new QWidget(centralWidget);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(10, 20, 171, 27));
        horizontalLayout = new QHBoxLayout(widget3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelAdresse = new QLabel(widget3);
        labelAdresse->setObjectName(QStringLiteral("labelAdresse"));

        horizontalLayout->addWidget(labelAdresse);

        lineEditAdresse = new QLineEdit(widget3);
        lineEditAdresse->setObjectName(QStringLiteral("lineEditAdresse"));

        horizontalLayout->addWidget(lineEditAdresse);

        widget4 = new QWidget(centralWidget);
        widget4->setObjectName(QStringLiteral("widget4"));
        widget4->setGeometry(QRect(190, 20, 258, 161));
        verticalLayout = new QVBoxLayout(widget4);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelEtat = new QLabel(widget4);
        labelEtat->setObjectName(QStringLiteral("labelEtat"));

        verticalLayout->addWidget(labelEtat);

        listWidgetEtat = new QListWidget(widget4);
        listWidgetEtat->setObjectName(QStringLiteral("listWidgetEtat"));

        verticalLayout->addWidget(listWidgetEtat);

        widget5 = new QWidget(centralWidget);
        widget5->setObjectName(QStringLiteral("widget5"));
        widget5->setGeometry(QRect(10, 70, 171, 27));
        horizontalLayout_2 = new QHBoxLayout(widget5);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelPort = new QLabel(widget5);
        labelPort->setObjectName(QStringLiteral("labelPort"));

        horizontalLayout_2->addWidget(labelPort);

        lineEditPort = new QLineEdit(widget5);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));

        horizontalLayout_2->addWidget(lineEditPort);

        DAB_MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DAB_MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 467, 22));
        DAB_MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DAB_MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DAB_MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DAB_MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DAB_MainWindow->setStatusBar(statusBar);

        retranslateUi(DAB_MainWindow);

        QMetaObject::connectSlotsByName(DAB_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DAB_MainWindow)
    {
        DAB_MainWindow->setWindowTitle(QApplication::translate("DAB_MainWindow", "DAB_MainWindow", nullptr));
        pushButtonConnexion->setText(QApplication::translate("DAB_MainWindow", "Connexion", nullptr));
        labelMessage->setText(QApplication::translate("DAB_MainWindow", "Message de la banque :", nullptr));
        groupBoxOperation->setTitle(QApplication::translate("DAB_MainWindow", "Op\303\251ration envoy\303\251es \303\240 la banque", nullptr));
        pushButtonEnvoi->setText(QApplication::translate("DAB_MainWindow", "Envoi", nullptr));
        labelMontant->setText(QApplication::translate("DAB_MainWindow", "Montant :", nullptr));
        pushButtonNumero->setText(QApplication::translate("DAB_MainWindow", "Num\303\251ro de compte", nullptr));
        radioButtonSolde->setText(QApplication::translate("DAB_MainWindow", "Solde", nullptr));
        radioButtonRetrait->setText(QApplication::translate("DAB_MainWindow", "Retrait", nullptr));
        radioButtonDepot->setText(QApplication::translate("DAB_MainWindow", "D\303\251pot", nullptr));
        labelAdresse->setText(QApplication::translate("DAB_MainWindow", "Adresse :", nullptr));
        labelEtat->setText(QApplication::translate("DAB_MainWindow", "Etat de la connexion", nullptr));
        labelPort->setText(QApplication::translate("DAB_MainWindow", "Port :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DAB_MainWindow: public Ui_DAB_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAB_MAINWINDOW_H
