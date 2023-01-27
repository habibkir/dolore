/********************************************************************************
** Form generated from reading UI file 'cazzaro.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAZZARO_H
#define UI_CAZZARO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cazzaro
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *cazzaro)
    {
        if (cazzaro->objectName().isEmpty())
            cazzaro->setObjectName(QString::fromUtf8("cazzaro"));
        cazzaro->resize(400, 300);
        centralWidget = new QWidget(cazzaro);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        cazzaro->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(cazzaro);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        cazzaro->setMenuBar(menuBar);
        mainToolBar = new QToolBar(cazzaro);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        cazzaro->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(cazzaro);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        cazzaro->setStatusBar(statusBar);

        retranslateUi(cazzaro);

        QMetaObject::connectSlotsByName(cazzaro);
    } // setupUi

    void retranslateUi(QMainWindow *cazzaro)
    {
        cazzaro->setWindowTitle(QCoreApplication::translate("cazzaro", "cazzaro", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cazzaro: public Ui_cazzaro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAZZARO_H
