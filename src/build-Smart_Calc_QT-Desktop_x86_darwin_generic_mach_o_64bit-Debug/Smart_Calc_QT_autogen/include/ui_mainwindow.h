/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *result_number;
    QPushButton *all_clean;
    QPushButton *div;
    QPushButton *Button_8;
    QPushButton *Button_9;
    QPushButton *Button_7;
    QPushButton *mul;
    QPushButton *Button_5;
    QPushButton *Button_6;
    QPushButton *Button_4;
    QPushButton *sub;
    QPushButton *Button_2;
    QPushButton *Button_3;
    QPushButton *Button_1;
    QPushButton *add;
    QPushButton *dot;
    QPushButton *Button_0;
    QPushButton *equals;
    QPushButton *lg;
    QPushButton *acos;
    QPushButton *asin;
    QPushButton *ln;
    QPushButton *cos;
    QPushButton *sin;
    QPushButton *atan;
    QPushButton *tan;
    QPushButton *mod;
    QPushButton *sqrt;
    QPushButton *close_bracket;
    QPushButton *open_bracket;
    QPushButton *value_x;
    QLabel *label;
    QPushButton *power;
    QLineEdit *result_number_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1036, 687);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        result_number = new QLabel(centralwidget);
        result_number->setObjectName(QString::fromUtf8("result_number"));
        result_number->setGeometry(QRect(0, 0, 301, 61));
        QFont font;
        font.setPointSize(20);
        result_number->setFont(font);
        result_number->setStyleSheet(QString::fromUtf8("QLabel {\n"
"   background-color:  rgb(217, 215, 218);\n"
"   color: black;\n"
"   qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"   border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        result_number->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        result_number->setWordWrap(false);
        result_number->setMargin(0);
        result_number->setIndent(25);
        all_clean = new QPushButton(centralwidget);
        all_clean->setObjectName(QString::fromUtf8("all_clean"));
        all_clean->setGeometry(QRect(180, 126, 121, 45));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(false);
        all_clean->setFont(font1);
        all_clean->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(173, 172, 175);\n"
"  color:  black;\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        all_clean->setIconSize(QSize(16, 16));
        div = new QPushButton(centralwidget);
        div->setObjectName(QString::fromUtf8("div"));
        div->setGeometry(QRect(240, 170, 61, 61));
        div->setFont(font);
        div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        Button_8 = new QPushButton(centralwidget);
        Button_8->setObjectName(QString::fromUtf8("Button_8"));
        Button_8->setGeometry(QRect(60, 170, 61, 61));
        Button_8->setFont(font);
        Button_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color:  rgb(239, 237, 241);\n"
"   color: black;\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        Button_9 = new QPushButton(centralwidget);
        Button_9->setObjectName(QString::fromUtf8("Button_9"));
        Button_9->setGeometry(QRect(120, 170, 61, 61));
        Button_9->setFont(font);
        Button_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color:  rgb(239, 237, 241);\n"
"   color: black;\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        Button_7 = new QPushButton(centralwidget);
        Button_7->setObjectName(QString::fromUtf8("Button_7"));
        Button_7->setGeometry(QRect(0, 170, 61, 61));
        Button_7->setFont(font);
        Button_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color:  rgb(239, 237, 241);\n"
"   color: black;\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        mul = new QPushButton(centralwidget);
        mul->setObjectName(QString::fromUtf8("mul"));
        mul->setGeometry(QRect(180, 170, 61, 61));
        mul->setFont(font);
        mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        Button_5 = new QPushButton(centralwidget);
        Button_5->setObjectName(QString::fromUtf8("Button_5"));
        Button_5->setGeometry(QRect(60, 230, 61, 61));
        Button_5->setFont(font);
        Button_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color:  rgb(239, 237, 241);\n"
"   color: black;\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        Button_6 = new QPushButton(centralwidget);
        Button_6->setObjectName(QString::fromUtf8("Button_6"));
        Button_6->setGeometry(QRect(120, 230, 61, 61));
        Button_6->setFont(font);
        Button_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color:  rgb(239, 237, 241);\n"
"   color: black;\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        Button_4 = new QPushButton(centralwidget);
        Button_4->setObjectName(QString::fromUtf8("Button_4"));
        Button_4->setGeometry(QRect(0, 230, 61, 61));
        Button_4->setFont(font);
        Button_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color:  rgb(239, 237, 241);\n"
"   color: black;\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        sub = new QPushButton(centralwidget);
        sub->setObjectName(QString::fromUtf8("sub"));
        sub->setGeometry(QRect(180, 230, 61, 61));
        sub->setFont(font);
        sub->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        Button_2 = new QPushButton(centralwidget);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));
        Button_2->setGeometry(QRect(60, 290, 61, 61));
        Button_2->setFont(font);
        Button_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color:  rgb(239, 237, 241);\n"
"   color: black;\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        Button_3 = new QPushButton(centralwidget);
        Button_3->setObjectName(QString::fromUtf8("Button_3"));
        Button_3->setGeometry(QRect(120, 290, 61, 61));
        Button_3->setFont(font);
        Button_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color:  rgb(239, 237, 241);\n"
"   color: black;\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        Button_1 = new QPushButton(centralwidget);
        Button_1->setObjectName(QString::fromUtf8("Button_1"));
        Button_1->setGeometry(QRect(0, 290, 61, 61));
        Button_1->setFont(font);
        Button_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color:  rgb(239, 237, 241);\n"
"   color: black;\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        add = new QPushButton(centralwidget);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(180, 290, 61, 61));
        add->setFont(font);
        add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        dot = new QPushButton(centralwidget);
        dot->setObjectName(QString::fromUtf8("dot"));
        dot->setGeometry(QRect(180, 350, 61, 50));
        dot->setFont(font1);
        dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(173, 172, 175);\n"
"  color:  black;\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Button_0 = new QPushButton(centralwidget);
        Button_0->setObjectName(QString::fromUtf8("Button_0"));
        Button_0->setGeometry(QRect(0, 350, 181, 50));
        Button_0->setFont(font);
        Button_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color:  rgb(239, 237, 241);\n"
"   color: black;\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        equals = new QPushButton(centralwidget);
        equals->setObjectName(QString::fromUtf8("equals"));
        equals->setGeometry(QRect(240, 289, 61, 111));
        equals->setFont(font);
        equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        lg = new QPushButton(centralwidget);
        lg->setObjectName(QString::fromUtf8("lg"));
        lg->setGeometry(QRect(0, 92, 61, 35));
        lg->setFont(font1);
        lg->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(173, 172, 175);\n"
"  color:  black;\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        lg->setIconSize(QSize(16, 16));
        acos = new QPushButton(centralwidget);
        acos->setObjectName(QString::fromUtf8("acos"));
        acos->setGeometry(QRect(120, 92, 61, 35));
        acos->setFont(font1);
        acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(173, 172, 175);\n"
"  color:  black;\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        acos->setIconSize(QSize(16, 16));
        asin = new QPushButton(centralwidget);
        asin->setObjectName(QString::fromUtf8("asin"));
        asin->setGeometry(QRect(60, 92, 61, 35));
        asin->setFont(font1);
        asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(173, 172, 175);\n"
"  color:  black;\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        asin->setIconSize(QSize(16, 16));
        ln = new QPushButton(centralwidget);
        ln->setObjectName(QString::fromUtf8("ln"));
        ln->setGeometry(QRect(0, 60, 61, 35));
        ln->setFont(font1);
        ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(173, 172, 175);\n"
"  color:  black;\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        ln->setIconSize(QSize(16, 16));
        cos = new QPushButton(centralwidget);
        cos->setObjectName(QString::fromUtf8("cos"));
        cos->setGeometry(QRect(120, 60, 61, 35));
        cos->setFont(font1);
        cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(173, 172, 175);\n"
"  color:  black;\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        cos->setIconSize(QSize(16, 16));
        sin = new QPushButton(centralwidget);
        sin->setObjectName(QString::fromUtf8("sin"));
        sin->setGeometry(QRect(60, 60, 61, 35));
        sin->setFont(font1);
        sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(173, 172, 175);\n"
"  color:  black;\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        sin->setIconSize(QSize(16, 16));
        atan = new QPushButton(centralwidget);
        atan->setObjectName(QString::fromUtf8("atan"));
        atan->setGeometry(QRect(180, 92, 61, 35));
        atan->setFont(font1);
        atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(173, 172, 175);\n"
"  color:  black;\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        atan->setIconSize(QSize(16, 16));
        tan = new QPushButton(centralwidget);
        tan->setObjectName(QString::fromUtf8("tan"));
        tan->setGeometry(QRect(180, 60, 61, 35));
        tan->setFont(font1);
        tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(173, 172, 175);\n"
"  color:  black;\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        tan->setIconSize(QSize(16, 16));
        mod = new QPushButton(centralwidget);
        mod->setObjectName(QString::fromUtf8("mod"));
        mod->setGeometry(QRect(240, 92, 61, 35));
        mod->setFont(font1);
        mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(173, 172, 175);\n"
"  color:  black;\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        mod->setIconSize(QSize(16, 16));
        sqrt = new QPushButton(centralwidget);
        sqrt->setObjectName(QString::fromUtf8("sqrt"));
        sqrt->setGeometry(QRect(240, 60, 61, 35));
        sqrt->setFont(font1);
        sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(173, 172, 175);\n"
"  color:  black;\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        sqrt->setIconSize(QSize(16, 16));
        close_bracket = new QPushButton(centralwidget);
        close_bracket->setObjectName(QString::fromUtf8("close_bracket"));
        close_bracket->setGeometry(QRect(60, 126, 61, 45));
        close_bracket->setFont(font1);
        close_bracket->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(173, 172, 175);\n"
"  color:  black;\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        close_bracket->setIconSize(QSize(16, 16));
        open_bracket = new QPushButton(centralwidget);
        open_bracket->setObjectName(QString::fromUtf8("open_bracket"));
        open_bracket->setGeometry(QRect(0, 126, 61, 45));
        open_bracket->setFont(font1);
        open_bracket->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(173, 172, 175);\n"
"  color:  black;\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        open_bracket->setIconSize(QSize(16, 16));
        value_x = new QPushButton(centralwidget);
        value_x->setObjectName(QString::fromUtf8("value_x"));
        value_x->setGeometry(QRect(240, 230, 61, 61));
        value_x->setFont(font1);
        value_x->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(173, 172, 175);\n"
"  color:  black;\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 410, 51, 20));
        power = new QPushButton(centralwidget);
        power->setObjectName(QString::fromUtf8("power"));
        power->setGeometry(QRect(120, 126, 61, 45));
        power->setFont(font1);
        power->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(173, 172, 175);\n"
"  color:  black;\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        power->setIconSize(QSize(16, 16));
        result_number_2 = new QLineEdit(centralwidget);
        result_number_2->setObjectName(QString::fromUtf8("result_number_2"));
        result_number_2->setGeometry(QRect(110, 410, 221, 41));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        result_number->setText(QString());
        all_clean->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        Button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        Button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        Button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        lg->setText(QCoreApplication::translate("MainWindow", "lg", nullptr));
        acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        close_bracket->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        open_bracket->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        value_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "X = ", nullptr));
        power->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
