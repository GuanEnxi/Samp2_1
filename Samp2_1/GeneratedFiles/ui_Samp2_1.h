/********************************************************************************
** Form generated from reading UI file 'Samp2_1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAMP2_1_H
#define UI_SAMP2_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Samp2_1Class
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Samp2_1Class)
    {
        if (Samp2_1Class->objectName().isEmpty())
            Samp2_1Class->setObjectName(QString::fromUtf8("Samp2_1Class"));
        Samp2_1Class->resize(108, 123);
        centralWidget = new QWidget(Samp2_1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(93, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        closeButton = new QPushButton(centralWidget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        verticalLayout->addWidget(closeButton);

        Samp2_1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Samp2_1Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 108, 18));
        Samp2_1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Samp2_1Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Samp2_1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Samp2_1Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Samp2_1Class->setStatusBar(statusBar);

        retranslateUi(Samp2_1Class);
        QObject::connect(closeButton, SIGNAL(clicked()), Samp2_1Class, SLOT(close()));

        QMetaObject::connectSlotsByName(Samp2_1Class);
    } // setupUi

    void retranslateUi(QMainWindow *Samp2_1Class)
    {
        Samp2_1Class->setWindowTitle(QApplication::translate("Samp2_1Class", "Samp2_1", nullptr));
        label->setText(QApplication::translate("Samp2_1Class", "<html><head/><body><p><span style=\" font-size:16pt;\">Hello World!</span></p></body></html>", nullptr));
        closeButton->setText(QApplication::translate("Samp2_1Class", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Samp2_1Class: public Ui_Samp2_1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAMP2_1_H
