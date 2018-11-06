/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTabWidget *tabWidget;
    QWidget *widgetInfo;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNom;
    QLineEdit *lineEditNom;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelPrenom;
    QLineEdit *lineEditPrenom;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelAge;
    QSpinBox *spinBoxAge;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelSexe;
    QRadioButton *radioButtonFemme;
    QRadioButton *radioButtonHomme;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelPoids;
    QDoubleSpinBox *doubleSpinBoxPoids;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelTaille;
    QDoubleSpinBox *doubleSpinBoxTaille;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonSuite;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widgetCalcul;
    QTextEdit *textEditAfficheur;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonDevine;
    QPushButton *pushButtonLorentz;
    QPushButton *pushButtonLorentzAge;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonQuitter;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(545, 466);
        Widget->setMinimumSize(QSize(545, 466));
        Widget->setMaximumSize(QSize(545, 466));
        Widget->setStyleSheet(QStringLiteral(""));
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(60, 20, 431, 371));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        widgetInfo = new QWidget();
        widgetInfo->setObjectName(QStringLiteral("widgetInfo"));
        widgetInfo->setStyleSheet(QStringLiteral(""));
        layoutWidget = new QWidget(widgetInfo);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 50, 182, 228));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelNom = new QLabel(layoutWidget);
        labelNom->setObjectName(QStringLiteral("labelNom"));

        horizontalLayout->addWidget(labelNom);

        lineEditNom = new QLineEdit(layoutWidget);
        lineEditNom->setObjectName(QStringLiteral("lineEditNom"));

        horizontalLayout->addWidget(lineEditNom);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelPrenom = new QLabel(layoutWidget);
        labelPrenom->setObjectName(QStringLiteral("labelPrenom"));

        horizontalLayout_2->addWidget(labelPrenom);

        lineEditPrenom = new QLineEdit(layoutWidget);
        lineEditPrenom->setObjectName(QStringLiteral("lineEditPrenom"));

        horizontalLayout_2->addWidget(lineEditPrenom);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelAge = new QLabel(layoutWidget);
        labelAge->setObjectName(QStringLiteral("labelAge"));

        horizontalLayout_4->addWidget(labelAge);

        spinBoxAge = new QSpinBox(layoutWidget);
        spinBoxAge->setObjectName(QStringLiteral("spinBoxAge"));
        spinBoxAge->setMinimum(1);
        spinBoxAge->setMaximum(200);

        horizontalLayout_4->addWidget(spinBoxAge);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelSexe = new QLabel(layoutWidget);
        labelSexe->setObjectName(QStringLiteral("labelSexe"));

        horizontalLayout_3->addWidget(labelSexe);

        radioButtonFemme = new QRadioButton(layoutWidget);
        radioButtonFemme->setObjectName(QStringLiteral("radioButtonFemme"));

        horizontalLayout_3->addWidget(radioButtonFemme);

        radioButtonHomme = new QRadioButton(layoutWidget);
        radioButtonHomme->setObjectName(QStringLiteral("radioButtonHomme"));

        horizontalLayout_3->addWidget(radioButtonHomme);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        labelPoids = new QLabel(layoutWidget);
        labelPoids->setObjectName(QStringLiteral("labelPoids"));

        horizontalLayout_5->addWidget(labelPoids);

        doubleSpinBoxPoids = new QDoubleSpinBox(layoutWidget);
        doubleSpinBoxPoids->setObjectName(QStringLiteral("doubleSpinBoxPoids"));
        doubleSpinBoxPoids->setMinimum(15);
        doubleSpinBoxPoids->setMaximum(300);
        doubleSpinBoxPoids->setSingleStep(0.1);

        horizontalLayout_5->addWidget(doubleSpinBoxPoids);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        labelTaille = new QLabel(layoutWidget);
        labelTaille->setObjectName(QStringLiteral("labelTaille"));

        horizontalLayout_6->addWidget(labelTaille);

        doubleSpinBoxTaille = new QDoubleSpinBox(layoutWidget);
        doubleSpinBoxTaille->setObjectName(QStringLiteral("doubleSpinBoxTaille"));
        doubleSpinBoxTaille->setMinimum(0.5);
        doubleSpinBoxTaille->setMaximum(3);
        doubleSpinBoxTaille->setSingleStep(0.01);

        horizontalLayout_6->addWidget(doubleSpinBoxTaille);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        pushButtonSuite = new QPushButton(layoutWidget);
        pushButtonSuite->setObjectName(QStringLiteral("pushButtonSuite"));

        horizontalLayout_7->addWidget(pushButtonSuite);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_7);

        tabWidget->addTab(widgetInfo, QString());
        widgetCalcul = new QWidget();
        widgetCalcul->setObjectName(QStringLiteral("widgetCalcul"));
        textEditAfficheur = new QTextEdit(widgetCalcul);
        textEditAfficheur->setObjectName(QStringLiteral("textEditAfficheur"));
        textEditAfficheur->setGeometry(QRect(10, 10, 411, 211));
        layoutWidget1 = new QWidget(widgetCalcul);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(70, 240, 293, 89));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonDevine = new QPushButton(layoutWidget1);
        pushButtonDevine->setObjectName(QStringLiteral("pushButtonDevine"));

        verticalLayout_2->addWidget(pushButtonDevine);

        pushButtonLorentz = new QPushButton(layoutWidget1);
        pushButtonLorentz->setObjectName(QStringLiteral("pushButtonLorentz"));

        verticalLayout_2->addWidget(pushButtonLorentz);

        pushButtonLorentzAge = new QPushButton(layoutWidget1);
        pushButtonLorentzAge->setObjectName(QStringLiteral("pushButtonLorentzAge"));

        verticalLayout_2->addWidget(pushButtonLorentzAge);

        tabWidget->addTab(widgetCalcul, QString());
        layoutWidget2 = new QWidget(Widget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 400, 541, 27));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);

        pushButtonQuitter = new QPushButton(layoutWidget2);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));

        horizontalLayout_8->addWidget(pushButtonQuitter);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);


        retranslateUi(Widget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), Widget, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Calcul du poids id\303\251al", nullptr));
#ifndef QT_NO_WHATSTHIS
        tabWidget->setWhatsThis(QApplication::translate("Widget", "<html><head/><body><p><br/></p><p><br/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        labelNom->setText(QApplication::translate("Widget", "Nom", nullptr));
        labelPrenom->setText(QApplication::translate("Widget", "Pr\303\251nom", nullptr));
        labelAge->setText(QApplication::translate("Widget", "Age", nullptr));
        labelSexe->setText(QApplication::translate("Widget", "Sexe", nullptr));
        radioButtonFemme->setText(QApplication::translate("Widget", "Femme", nullptr));
        radioButtonHomme->setText(QApplication::translate("Widget", "Homme", nullptr));
        labelPoids->setText(QApplication::translate("Widget", "Poids(kg)", nullptr));
        labelTaille->setText(QApplication::translate("Widget", "Taille (m)", nullptr));
        pushButtonSuite->setText(QApplication::translate("Widget", "Suite", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(widgetInfo), QApplication::translate("Widget", "Informations personelles", nullptr));
        pushButtonDevine->setText(QApplication::translate("Widget", "Poids id\303\251al formule de devine", nullptr));
        pushButtonLorentz->setText(QApplication::translate("Widget", "Poids id\303\251al formule de lorentz", nullptr));
        pushButtonLorentzAge->setText(QApplication::translate("Widget", "Poids id\303\251al formule de lorentz en fonction de l'age", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(widgetCalcul), QApplication::translate("Widget", "Calcul du poids id\303\251al", nullptr));
        pushButtonQuitter->setText(QApplication::translate("Widget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
