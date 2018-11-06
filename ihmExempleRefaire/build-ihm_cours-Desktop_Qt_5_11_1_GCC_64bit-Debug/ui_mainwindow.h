/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionC;
    QAction *actionJava;
    QAction *actionCpp;
    QAction *actionPHP;
    QAction *actionJavascript;
    QWidget *centralWidget;
    QGroupBox *groupBoxCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBoxWindows;
    QCheckBox *checkBoxOSXLion;
    QCheckBox *checkBoxLinux;
    QGroupBox *groupBoxRadioButton;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButtonWindows;
    QRadioButton *radioButtonOSXLion;
    QRadioButton *radioButtonLinux;
    QPushButton *pushButtonQuitter;
    QLabel *labelEvenment;
    QTextBrowser *textBrowserAffichage;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelEntrezVotreCode;
    QLineEdit *lineEditEcriture;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelChoix;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBoxOS;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonLinux;
    QPushButton *pushButtonWindows;
    QPushButton *pushButtonOSXLion;
    QMenuBar *menuBar;
    QMenu *menuLangages;
    QMenu *menuWeb;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(344, 518);
        actionC = new QAction(MainWindow);
        actionC->setObjectName(QStringLiteral("actionC"));
        actionJava = new QAction(MainWindow);
        actionJava->setObjectName(QStringLiteral("actionJava"));
        actionCpp = new QAction(MainWindow);
        actionCpp->setObjectName(QStringLiteral("actionCpp"));
        actionPHP = new QAction(MainWindow);
        actionPHP->setObjectName(QStringLiteral("actionPHP"));
        actionJavascript = new QAction(MainWindow);
        actionJavascript->setObjectName(QStringLiteral("actionJavascript"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBoxCheckBox = new QGroupBox(centralWidget);
        groupBoxCheckBox->setObjectName(QStringLiteral("groupBoxCheckBox"));
        groupBoxCheckBox->setGeometry(QRect(10, 70, 321, 61));
        horizontalLayout_3 = new QHBoxLayout(groupBoxCheckBox);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        checkBoxWindows = new QCheckBox(groupBoxCheckBox);
        checkBoxWindows->setObjectName(QStringLiteral("checkBoxWindows"));

        horizontalLayout_3->addWidget(checkBoxWindows);

        checkBoxOSXLion = new QCheckBox(groupBoxCheckBox);
        checkBoxOSXLion->setObjectName(QStringLiteral("checkBoxOSXLion"));

        horizontalLayout_3->addWidget(checkBoxOSXLion);

        checkBoxLinux = new QCheckBox(groupBoxCheckBox);
        checkBoxLinux->setObjectName(QStringLiteral("checkBoxLinux"));

        horizontalLayout_3->addWidget(checkBoxLinux);

        groupBoxRadioButton = new QGroupBox(centralWidget);
        groupBoxRadioButton->setObjectName(QStringLiteral("groupBoxRadioButton"));
        groupBoxRadioButton->setGeometry(QRect(10, 120, 321, 67));
        horizontalLayout_4 = new QHBoxLayout(groupBoxRadioButton);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        radioButtonWindows = new QRadioButton(groupBoxRadioButton);
        radioButtonWindows->setObjectName(QStringLiteral("radioButtonWindows"));

        horizontalLayout_4->addWidget(radioButtonWindows);

        radioButtonOSXLion = new QRadioButton(groupBoxRadioButton);
        radioButtonOSXLion->setObjectName(QStringLiteral("radioButtonOSXLion"));

        horizontalLayout_4->addWidget(radioButtonOSXLion);

        radioButtonLinux = new QRadioButton(groupBoxRadioButton);
        radioButtonLinux->setObjectName(QStringLiteral("radioButtonLinux"));

        horizontalLayout_4->addWidget(radioButtonLinux);

        pushButtonQuitter = new QPushButton(centralWidget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(220, 220, 81, 25));
        pushButtonQuitter->setStyleSheet(QStringLiteral("background-color: rgb(255, 114, 114);"));
        labelEvenment = new QLabel(centralWidget);
        labelEvenment->setObjectName(QStringLiteral("labelEvenment"));
        labelEvenment->setGeometry(QRect(30, 230, 71, 17));
        textBrowserAffichage = new QTextBrowser(centralWidget);
        textBrowserAffichage->setObjectName(QStringLiteral("textBrowserAffichage"));
        textBrowserAffichage->setGeometry(QRect(40, 250, 256, 192));
        textBrowserAffichage->setStyleSheet(QStringLiteral("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255));"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 10, 261, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelEntrezVotreCode = new QLabel(layoutWidget);
        labelEntrezVotreCode->setObjectName(QStringLiteral("labelEntrezVotreCode"));

        horizontalLayout->addWidget(labelEntrezVotreCode);

        lineEditEcriture = new QLineEdit(layoutWidget);
        lineEditEcriture->setObjectName(QStringLiteral("lineEditEcriture"));
        lineEditEcriture->setStyleSheet(QStringLiteral("background-color: rgb(43, 255, 237);"));

        horizontalLayout->addWidget(lineEditEcriture);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(70, 50, 169, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelChoix = new QLabel(layoutWidget1);
        labelChoix->setObjectName(QStringLiteral("labelChoix"));

        horizontalLayout_2->addWidget(labelChoix);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        comboBoxOS = new QComboBox(layoutWidget1);
        comboBoxOS->addItem(QString());
        comboBoxOS->addItem(QString());
        comboBoxOS->addItem(QString());
        comboBoxOS->setObjectName(QStringLiteral("comboBoxOS"));

        horizontalLayout_2->addWidget(comboBoxOS);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 190, 271, 27));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButtonLinux = new QPushButton(layoutWidget2);
        pushButtonLinux->setObjectName(QStringLiteral("pushButtonLinux"));

        horizontalLayout_5->addWidget(pushButtonLinux);

        pushButtonWindows = new QPushButton(layoutWidget2);
        pushButtonWindows->setObjectName(QStringLiteral("pushButtonWindows"));

        horizontalLayout_5->addWidget(pushButtonWindows);

        pushButtonOSXLion = new QPushButton(layoutWidget2);
        pushButtonOSXLion->setObjectName(QStringLiteral("pushButtonOSXLion"));

        horizontalLayout_5->addWidget(pushButtonOSXLion);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 344, 22));
        menuLangages = new QMenu(menuBar);
        menuLangages->setObjectName(QStringLiteral("menuLangages"));
        menuWeb = new QMenu(menuLangages);
        menuWeb->setObjectName(QStringLiteral("menuWeb"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuLangages->menuAction());
        menuLangages->addAction(actionC);
        menuLangages->addSeparator();
        menuLangages->addAction(actionJava);
        menuLangages->addAction(actionCpp);
        menuLangages->addSeparator();
        menuLangages->addAction(menuWeb->menuAction());
        menuWeb->addAction(actionPHP);
        menuWeb->addAction(actionJavascript);

        retranslateUi(MainWindow);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionC->setText(QApplication::translate("MainWindow", "C", nullptr));
        actionJava->setText(QApplication::translate("MainWindow", "Java", nullptr));
        actionCpp->setText(QApplication::translate("MainWindow", "C++", nullptr));
        actionPHP->setText(QApplication::translate("MainWindow", "PHP", nullptr));
        actionJavascript->setText(QApplication::translate("MainWindow", "Javascript", nullptr));
        groupBoxCheckBox->setTitle(QString());
        checkBoxWindows->setText(QApplication::translate("MainWindow", "Windows", nullptr));
        checkBoxOSXLion->setText(QApplication::translate("MainWindow", "OS X Lion", nullptr));
        checkBoxLinux->setText(QApplication::translate("MainWindow", "Linux", nullptr));
        groupBoxRadioButton->setTitle(QString());
        radioButtonWindows->setText(QApplication::translate("MainWindow", "Windows", nullptr));
        radioButtonOSXLion->setText(QApplication::translate("MainWindow", "OS X Lion", nullptr));
        radioButtonLinux->setText(QApplication::translate("MainWindow", "Linux", nullptr));
        pushButtonQuitter->setText(QApplication::translate("MainWindow", "Quitter", nullptr));
        labelEvenment->setText(QApplication::translate("MainWindow", "\303\251v\303\250nement", nullptr));
        labelEntrezVotreCode->setText(QApplication::translate("MainWindow", "Entrez votre code", nullptr));
        labelChoix->setText(QApplication::translate("MainWindow", "Choix", nullptr));
        comboBoxOS->setItemText(0, QApplication::translate("MainWindow", "Linux", nullptr));
        comboBoxOS->setItemText(1, QApplication::translate("MainWindow", "Windows", nullptr));
        comboBoxOS->setItemText(2, QApplication::translate("MainWindow", "OS X Lion", nullptr));

        pushButtonLinux->setText(QApplication::translate("MainWindow", "Linux", nullptr));
        pushButtonWindows->setText(QApplication::translate("MainWindow", "Windows", nullptr));
        pushButtonOSXLion->setText(QApplication::translate("MainWindow", "OS X Lion", nullptr));
        menuLangages->setTitle(QApplication::translate("MainWindow", "Langages", nullptr));
        menuWeb->setTitle(QApplication::translate("MainWindow", "Web", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
