/********************************************************************************
** Form generated from reading UI file 'segmentacion.ui'
**
** Created: Fri May 23 07:35:40 2014
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEGMENTACION_H
#define UI_SEGMENTACION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Segmentacion
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Segmentacion)
    {
        if (Segmentacion->objectName().isEmpty())
            Segmentacion->setObjectName(QString::fromUtf8("Segmentacion"));
        Segmentacion->resize(577, 413);
        centralWidget = new QWidget(Segmentacion);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 200, 121, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 50, 201, 111));
        label->setFrameShape(QFrame::WinPanel);
        label->setScaledContents(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 50, 201, 111));
        label_2->setFrameShape(QFrame::WinPanel);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 200, 121, 31));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(420, 200, 121, 31));
        Segmentacion->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Segmentacion);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 577, 26));
        Segmentacion->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Segmentacion);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Segmentacion->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Segmentacion);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Segmentacion->setStatusBar(statusBar);

        retranslateUi(Segmentacion);

        QMetaObject::connectSlotsByName(Segmentacion);
    } // setupUi

    void retranslateUi(QMainWindow *Segmentacion)
    {
        Segmentacion->setWindowTitle(QApplication::translate("Segmentacion", "Segmentacion", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Segmentacion", "Cargar Imagen", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QString());
        pushButton_2->setText(QApplication::translate("Segmentacion", "Graphs Cuts", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Segmentacion", "Splitting", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Segmentacion: public Ui_Segmentacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEGMENTACION_H
