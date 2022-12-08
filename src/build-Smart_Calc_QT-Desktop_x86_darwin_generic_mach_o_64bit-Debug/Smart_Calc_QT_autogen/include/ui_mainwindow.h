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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

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
    QPushButton *power;
    QLineEdit *result_number_2;
    QLabel *xgraph_6;
    QLineEdit *axis_y;
    QLineEdit *axis_my;
    QLabel *form_2;
    QLabel *form;
    QLabel *form_3;
    QLineEdit *value_graph_1;
    QCustomPlot *graph;
    QLineEdit *formula;
    QLabel *xgraph;
    QLabel *xgraph_5;
    QLineEdit *value_graph_2;
    QLineEdit *axis_x;
    QLabel *xgraph_7;
    QLineEdit *axis_mx;
    QPushButton *pushButton_make_graph;
    QLineEdit *cr_rate;
    QLabel *form_4;
    QFrame *line_4;
    QLabel *form_11;
    QPushButton *credit_result;
    QLabel *xgraph_8;
    QComboBox *box_type_credit;
    QLabel *form_9;
    QLabel *result_cr_overpayment;
    QLabel *result_cr_total;
    QLineEdit *cr_term;
    QLabel *form_5;
    QLabel *result_cr_monthly_pay;
    QLabel *form_6;
    QLineEdit *cr_amount;
    QLabel *form_10;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QLabel *xgraph_9;
    QLabel *xgraph_4;
    QFrame *line_5;
    QLabel *xgraph_10;
    QLabel *form_7;
    QLabel *form_18;
    QLineEdit *dep_amount;
    QLineEdit *dep_replenishments_list;
    QLineEdit *dep_tax;
    QLabel *form_23;
    QLineEdit *dep_rate;
    QLabel *default_2;
    QLabel *form_17;
    QLineEdit *dep_withdrawals_list;
    QLabel *result_dep_tax;
    QLabel *form_16;
    QLabel *form_24;
    QLineEdit *dep_term;
    QLabel *form_26;
    QLabel *form_15;
    QLabel *form_27;
    QLabel *form_21;
    QRadioButton *capitalization_check;
    QPushButton *dep_result;
    QLabel *form_25;
    QComboBox *box_dep_period;
    QLabel *form_14;
    QLabel *result_dep_amount;
    QLabel *form_22;
    QLabel *result_dep_percents;
    QLabel *form_19;
    QLabel *form_20;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1210, 520);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        result_number = new QLabel(centralwidget);
        result_number->setObjectName(QString::fromUtf8("result_number"));
        result_number->setGeometry(QRect(10, 50, 301, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Avenir Next")});
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        result_number->setFont(font);
        result_number->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        result_number->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        result_number->setWordWrap(false);
        result_number->setMargin(0);
        result_number->setIndent(25);
        all_clean = new QPushButton(centralwidget);
        all_clean->setObjectName(QString::fromUtf8("all_clean"));
        all_clean->setGeometry(QRect(190, 190, 121, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Avenir Next")});
        font1.setPointSize(20);
        font1.setBold(false);
        all_clean->setFont(font1);
        all_clean->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        all_clean->setIconSize(QSize(16, 16));
        div = new QPushButton(centralwidget);
        div->setObjectName(QString::fromUtf8("div"));
        div->setGeometry(QRect(250, 230, 61, 71));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Avenir Next")});
        font2.setPointSize(20);
        div->setFont(font2);
        div->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        Button_8 = new QPushButton(centralwidget);
        Button_8->setObjectName(QString::fromUtf8("Button_8"));
        Button_8->setGeometry(QRect(70, 230, 61, 70));
        Button_8->setFont(font2);
        Button_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        Button_9 = new QPushButton(centralwidget);
        Button_9->setObjectName(QString::fromUtf8("Button_9"));
        Button_9->setGeometry(QRect(130, 230, 61, 70));
        Button_9->setFont(font2);
        Button_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        Button_7 = new QPushButton(centralwidget);
        Button_7->setObjectName(QString::fromUtf8("Button_7"));
        Button_7->setGeometry(QRect(10, 230, 61, 70));
        Button_7->setFont(font2);
        Button_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        mul = new QPushButton(centralwidget);
        mul->setObjectName(QString::fromUtf8("mul"));
        mul->setGeometry(QRect(190, 230, 61, 70));
        mul->setFont(font2);
        mul->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        Button_5 = new QPushButton(centralwidget);
        Button_5->setObjectName(QString::fromUtf8("Button_5"));
        Button_5->setGeometry(QRect(70, 290, 61, 69));
        Button_5->setFont(font2);
        Button_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        Button_6 = new QPushButton(centralwidget);
        Button_6->setObjectName(QString::fromUtf8("Button_6"));
        Button_6->setGeometry(QRect(130, 290, 61, 69));
        Button_6->setFont(font2);
        Button_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        Button_4 = new QPushButton(centralwidget);
        Button_4->setObjectName(QString::fromUtf8("Button_4"));
        Button_4->setGeometry(QRect(10, 290, 61, 69));
        Button_4->setFont(font2);
        Button_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        sub = new QPushButton(centralwidget);
        sub->setObjectName(QString::fromUtf8("sub"));
        sub->setGeometry(QRect(190, 290, 61, 69));
        sub->setFont(font2);
        sub->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        Button_2 = new QPushButton(centralwidget);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));
        Button_2->setGeometry(QRect(70, 349, 61, 71));
        Button_2->setFont(font2);
        Button_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        Button_3 = new QPushButton(centralwidget);
        Button_3->setObjectName(QString::fromUtf8("Button_3"));
        Button_3->setGeometry(QRect(130, 349, 61, 71));
        Button_3->setFont(font2);
        Button_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        Button_1 = new QPushButton(centralwidget);
        Button_1->setObjectName(QString::fromUtf8("Button_1"));
        Button_1->setGeometry(QRect(10, 349, 61, 71));
        Button_1->setFont(font2);
        Button_1->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        add = new QPushButton(centralwidget);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(190, 349, 61, 71));
        add->setFont(font2);
        add->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        dot = new QPushButton(centralwidget);
        dot->setObjectName(QString::fromUtf8("dot"));
        dot->setGeometry(QRect(190, 410, 61, 50));
        dot->setFont(font1);
        dot->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        Button_0 = new QPushButton(centralwidget);
        Button_0->setObjectName(QString::fromUtf8("Button_0"));
        Button_0->setGeometry(QRect(10, 410, 181, 50));
        Button_0->setFont(font2);
        Button_0->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        equals = new QPushButton(centralwidget);
        equals->setObjectName(QString::fromUtf8("equals"));
        equals->setGeometry(QRect(250, 349, 61, 111));
        equals->setFont(font2);
        equals->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        lg = new QPushButton(centralwidget);
        lg->setObjectName(QString::fromUtf8("lg"));
        lg->setGeometry(QRect(10, 160, 61, 40));
        lg->setFont(font1);
        lg->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        lg->setIconSize(QSize(16, 16));
        acos = new QPushButton(centralwidget);
        acos->setObjectName(QString::fromUtf8("acos"));
        acos->setGeometry(QRect(130, 160, 61, 40));
        acos->setFont(font1);
        acos->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        acos->setIconSize(QSize(16, 16));
        asin = new QPushButton(centralwidget);
        asin->setObjectName(QString::fromUtf8("asin"));
        asin->setGeometry(QRect(70, 160, 61, 40));
        asin->setFont(font1);
        asin->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        asin->setIconSize(QSize(16, 16));
        ln = new QPushButton(centralwidget);
        ln->setObjectName(QString::fromUtf8("ln"));
        ln->setGeometry(QRect(10, 130, 61, 40));
        ln->setFont(font1);
        ln->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        ln->setIconSize(QSize(16, 16));
        cos = new QPushButton(centralwidget);
        cos->setObjectName(QString::fromUtf8("cos"));
        cos->setGeometry(QRect(130, 130, 61, 40));
        cos->setFont(font1);
        cos->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        cos->setIconSize(QSize(16, 16));
        sin = new QPushButton(centralwidget);
        sin->setObjectName(QString::fromUtf8("sin"));
        sin->setGeometry(QRect(70, 130, 61, 40));
        sin->setFont(font1);
        sin->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        sin->setIconSize(QSize(16, 16));
        atan = new QPushButton(centralwidget);
        atan->setObjectName(QString::fromUtf8("atan"));
        atan->setGeometry(QRect(190, 160, 61, 40));
        atan->setFont(font1);
        atan->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        atan->setIconSize(QSize(16, 16));
        tan = new QPushButton(centralwidget);
        tan->setObjectName(QString::fromUtf8("tan"));
        tan->setGeometry(QRect(190, 130, 61, 40));
        tan->setFont(font1);
        tan->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        tan->setIconSize(QSize(16, 16));
        mod = new QPushButton(centralwidget);
        mod->setObjectName(QString::fromUtf8("mod"));
        mod->setGeometry(QRect(250, 160, 61, 40));
        mod->setFont(font1);
        mod->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        mod->setIconSize(QSize(16, 16));
        sqrt = new QPushButton(centralwidget);
        sqrt->setObjectName(QString::fromUtf8("sqrt"));
        sqrt->setGeometry(QRect(250, 130, 61, 40));
        sqrt->setFont(font1);
        sqrt->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        sqrt->setIconSize(QSize(16, 16));
        close_bracket = new QPushButton(centralwidget);
        close_bracket->setObjectName(QString::fromUtf8("close_bracket"));
        close_bracket->setGeometry(QRect(70, 190, 61, 50));
        close_bracket->setFont(font1);
        close_bracket->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        close_bracket->setIconSize(QSize(16, 16));
        open_bracket = new QPushButton(centralwidget);
        open_bracket->setObjectName(QString::fromUtf8("open_bracket"));
        open_bracket->setGeometry(QRect(10, 190, 61, 50));
        open_bracket->setFont(font1);
        open_bracket->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        open_bracket->setIconSize(QSize(16, 16));
        value_x = new QPushButton(centralwidget);
        value_x->setObjectName(QString::fromUtf8("value_x"));
        value_x->setGeometry(QRect(250, 290, 61, 69));
        value_x->setFont(font1);
        value_x->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        power = new QPushButton(centralwidget);
        power->setObjectName(QString::fromUtf8("power"));
        power->setGeometry(QRect(130, 190, 61, 50));
        power->setFont(font1);
        power->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        power->setIconSize(QSize(16, 16));
        result_number_2 = new QLineEdit(centralwidget);
        result_number_2->setObjectName(QString::fromUtf8("result_number_2"));
        result_number_2->setGeometry(QRect(120, 470, 191, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Avenir Next")});
        result_number_2->setFont(font3);
        xgraph_6 = new QLabel(centralwidget);
        xgraph_6->setObjectName(QString::fromUtf8("xgraph_6"));
        xgraph_6->setGeometry(QRect(535, 366, 30, 31));
        xgraph_6->setFont(font);
        xgraph_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        axis_y = new QLineEdit(centralwidget);
        axis_y->setObjectName(QString::fromUtf8("axis_y"));
        axis_y->setGeometry(QRect(558, 367, 109, 26));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Avenir")});
        axis_y->setFont(font4);
        axis_y->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        axis_my = new QLineEdit(centralwidget);
        axis_my->setObjectName(QString::fromUtf8("axis_my"));
        axis_my->setGeometry(QRect(420, 367, 109, 26));
        axis_my->setFont(font4);
        axis_my->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        form_2 = new QLabel(centralwidget);
        form_2->setObjectName(QString::fromUtf8("form_2"));
        form_2->setGeometry(QRect(356, 330, 60, 31));
        form_2->setFont(font);
        form_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        form = new QLabel(centralwidget);
        form->setObjectName(QString::fromUtf8("form"));
        form->setGeometry(QRect(356, 403, 67, 31));
        form->setFont(font);
        form->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        form_3 = new QLabel(centralwidget);
        form_3->setObjectName(QString::fromUtf8("form_3"));
        form_3->setGeometry(QRect(535, 330, 30, 31));
        form_3->setFont(font);
        form_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        value_graph_1 = new QLineEdit(centralwidget);
        value_graph_1->setObjectName(QString::fromUtf8("value_graph_1"));
        value_graph_1->setGeometry(QRect(419, 440, 119, 26));
        value_graph_1->setFont(font4);
        value_graph_1->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        graph = new QCustomPlot(centralwidget);
        graph->setObjectName(QString::fromUtf8("graph"));
        graph->setGeometry(QRect(360, 50, 310, 271));
        graph->setFont(font4);
        graph->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        formula = new QLineEdit(centralwidget);
        formula->setObjectName(QString::fromUtf8("formula"));
        formula->setGeometry(QRect(419, 403, 249, 26));
        formula->setFont(font4);
        formula->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        xgraph = new QLabel(centralwidget);
        xgraph->setObjectName(QString::fromUtf8("xgraph"));
        xgraph->setGeometry(QRect(356, 438, 50, 31));
        xgraph->setFont(font);
        xgraph->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        xgraph_5 = new QLabel(centralwidget);
        xgraph_5->setObjectName(QString::fromUtf8("xgraph_5"));
        xgraph_5->setGeometry(QRect(356, 366, 60, 31));
        xgraph_5->setFont(font);
        xgraph_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        value_graph_2 = new QLineEdit(centralwidget);
        value_graph_2->setObjectName(QString::fromUtf8("value_graph_2"));
        value_graph_2->setGeometry(QRect(548, 440, 119, 26));
        value_graph_2->setFont(font4);
        value_graph_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        axis_x = new QLineEdit(centralwidget);
        axis_x->setObjectName(QString::fromUtf8("axis_x"));
        axis_x->setGeometry(QRect(559, 330, 109, 26));
        axis_x->setFont(font4);
        axis_x->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        xgraph_7 = new QLabel(centralwidget);
        xgraph_7->setObjectName(QString::fromUtf8("xgraph_7"));
        xgraph_7->setGeometry(QRect(537, 438, 20, 31));
        xgraph_7->setFont(font);
        xgraph_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        axis_mx = new QLineEdit(centralwidget);
        axis_mx->setObjectName(QString::fromUtf8("axis_mx"));
        axis_mx->setGeometry(QRect(420, 330, 109, 26));
        axis_mx->setFont(font4);
        axis_mx->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgb(255, 30, 35);\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        pushButton_make_graph = new QPushButton(centralwidget);
        pushButton_make_graph->setObjectName(QString::fromUtf8("pushButton_make_graph"));
        pushButton_make_graph->setGeometry(QRect(360, 480, 311, 26));
        pushButton_make_graph->setFont(font4);
        pushButton_make_graph->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        pushButton_make_graph->setIconSize(QSize(40, 40));
        cr_rate = new QLineEdit(centralwidget);
        cr_rate->setObjectName(QString::fromUtf8("cr_rate"));
        cr_rate->setGeometry(QRect(930, 49, 89, 26));
        cr_rate->setFont(font4);
        cr_rate->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        form_4 = new QLabel(centralwidget);
        form_4->setObjectName(QString::fromUtf8("form_4"));
        form_4->setGeometry(QRect(700, 51, 60, 21));
        form_4->setFont(font);
        form_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(680, 200, 560, 20));
        line_4->setFont(font4);
        line_4->setLineWidth(2);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        form_11 = new QLabel(centralwidget);
        form_11->setObjectName(QString::fromUtf8("form_11"));
        form_11->setGeometry(QRect(700, 140, 110, 21));
        form_11->setFont(font);
        form_11->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        credit_result = new QPushButton(centralwidget);
        credit_result->setObjectName(QString::fromUtf8("credit_result"));
        credit_result->setGeometry(QRect(1110, 174, 89, 26));
        credit_result->setFont(font4);
        credit_result->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        credit_result->setIconSize(QSize(40, 40));
        xgraph_8 = new QLabel(centralwidget);
        xgraph_8->setObjectName(QString::fromUtf8("xgraph_8"));
        xgraph_8->setGeometry(QRect(700, 8, 209, 30));
        xgraph_8->setFont(font);
        xgraph_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        xgraph_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        box_type_credit = new QComboBox(centralwidget);
        box_type_credit->addItem(QString());
        box_type_credit->addItem(QString());
        box_type_credit->setObjectName(QString::fromUtf8("box_type_credit"));
        box_type_credit->setGeometry(QRect(1110, 100, 101, 26));
        box_type_credit->setFont(font4);
        box_type_credit->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        form_9 = new QLabel(centralwidget);
        form_9->setObjectName(QString::fromUtf8("form_9"));
        form_9->setGeometry(QRect(700, 100, 130, 21));
        form_9->setFont(font);
        form_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        result_cr_overpayment = new QLabel(centralwidget);
        result_cr_overpayment->setObjectName(QString::fromUtf8("result_cr_overpayment"));
        result_cr_overpayment->setGeometry(QRect(853, 137, 230, 26));
        result_cr_overpayment->setFont(font);
        result_cr_overpayment->setMouseTracking(false);
        result_cr_overpayment->setTabletTracking(false);
        result_cr_overpayment->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        result_cr_total = new QLabel(centralwidget);
        result_cr_total->setObjectName(QString::fromUtf8("result_cr_total"));
        result_cr_total->setGeometry(QRect(853, 174, 230, 26));
        result_cr_total->setFont(font);
        result_cr_total->setMouseTracking(false);
        result_cr_total->setTabletTracking(false);
        result_cr_total->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        cr_term = new QLineEdit(centralwidget);
        cr_term->setObjectName(QString::fromUtf8("cr_term"));
        cr_term->setGeometry(QRect(1080, 49, 89, 26));
        cr_term->setFont(font4);
        cr_term->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        form_5 = new QLabel(centralwidget);
        form_5->setObjectName(QString::fromUtf8("form_5"));
        form_5->setGeometry(QRect(1030, 50, 50, 21));
        form_5->setFont(font);
        form_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        result_cr_monthly_pay = new QLabel(centralwidget);
        result_cr_monthly_pay->setObjectName(QString::fromUtf8("result_cr_monthly_pay"));
        result_cr_monthly_pay->setGeometry(QRect(853, 100, 230, 26));
        result_cr_monthly_pay->setFont(font);
        result_cr_monthly_pay->setMouseTracking(false);
        result_cr_monthly_pay->setTabletTracking(false);
        result_cr_monthly_pay->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        form_6 = new QLabel(centralwidget);
        form_6->setObjectName(QString::fromUtf8("form_6"));
        form_6->setGeometry(QRect(874, 51, 60, 21));
        form_6->setFont(font);
        form_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        cr_amount = new QLineEdit(centralwidget);
        cr_amount->setObjectName(QString::fromUtf8("cr_amount"));
        cr_amount->setGeometry(QRect(770, 49, 89, 26));
        cr_amount->setFont(font4);
        cr_amount->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        form_10 = new QLabel(centralwidget);
        form_10->setObjectName(QString::fromUtf8("form_10"));
        form_10->setGeometry(QRect(700, 180, 110, 21));
        form_10->setFont(font);
        form_10->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        line_6 = new QFrame(centralwidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(320, -10, 40, 611));
        line_6->setFont(font4);
        line_6->setLineWidth(2);
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(centralwidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(673, -10, 16, 651));
        line_7->setFont(font4);
        line_7->setLineWidth(2);
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(centralwidget);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(0, 30, 1280, 20));
        line_8->setFont(font4);
        line_8->setLineWidth(2);
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        xgraph_9 = new QLabel(centralwidget);
        xgraph_9->setObjectName(QString::fromUtf8("xgraph_9"));
        xgraph_9->setGeometry(QRect(10, 8, 100, 30));
        xgraph_9->setFont(font);
        xgraph_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        xgraph_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        xgraph_4 = new QLabel(centralwidget);
        xgraph_4->setObjectName(QString::fromUtf8("xgraph_4"));
        xgraph_4->setGeometry(QRect(350, 8, 109, 30));
        xgraph_4->setFont(font);
        xgraph_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        xgraph_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(680, 240, 560, 20));
        line_5->setFont(font4);
        line_5->setLineWidth(2);
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        xgraph_10 = new QLabel(centralwidget);
        xgraph_10->setObjectName(QString::fromUtf8("xgraph_10"));
        xgraph_10->setGeometry(QRect(700, 218, 200, 30));
        xgraph_10->setFont(font);
        xgraph_10->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        xgraph_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        form_7 = new QLabel(centralwidget);
        form_7->setObjectName(QString::fromUtf8("form_7"));
        form_7->setGeometry(QRect(80, 470, 41, 41));
        form_7->setFont(font);
        form_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        form_18 = new QLabel(centralwidget);
        form_18->setObjectName(QString::fromUtf8("form_18"));
        form_18->setGeometry(QRect(710, 292, 41, 21));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Avenir Next")});
        font5.setPointSize(14);
        font5.setBold(false);
        font5.setItalic(false);
        form_18->setFont(font5);
        form_18->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        dep_amount = new QLineEdit(centralwidget);
        dep_amount->setObjectName(QString::fromUtf8("dep_amount"));
        dep_amount->setGeometry(QRect(770, 258, 80, 26));
        dep_amount->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        dep_replenishments_list = new QLineEdit(centralwidget);
        dep_replenishments_list->setObjectName(QString::fromUtf8("dep_replenishments_list"));
        dep_replenishments_list->setGeometry(QRect(840, 374, 321, 26));
        dep_replenishments_list->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        dep_tax = new QLineEdit(centralwidget);
        dep_tax->setObjectName(QString::fromUtf8("dep_tax"));
        dep_tax->setGeometry(QRect(1080, 258, 80, 26));
        dep_tax->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        form_23 = new QLabel(centralwidget);
        form_23->setObjectName(QString::fromUtf8("form_23"));
        form_23->setGeometry(QRect(710, 310, 41, 16));
        form_23->setFont(font5);
        form_23->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        dep_rate = new QLineEdit(centralwidget);
        dep_rate->setObjectName(QString::fromUtf8("dep_rate"));
        dep_rate->setGeometry(QRect(930, 258, 80, 26));
        dep_rate->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        default_2 = new QLabel(centralwidget);
        default_2->setObjectName(QString::fromUtf8("default_2"));
        default_2->setGeometry(QRect(1030, 273, 41, 16));
        default_2->setFont(font5);
        default_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        form_17 = new QLabel(centralwidget);
        form_17->setObjectName(QString::fromUtf8("form_17"));
        form_17->setGeometry(QRect(710, 372, 101, 21));
        form_17->setFont(font5);
        form_17->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        dep_withdrawals_list = new QLineEdit(centralwidget);
        dep_withdrawals_list->setObjectName(QString::fromUtf8("dep_withdrawals_list"));
        dep_withdrawals_list->setGeometry(QRect(840, 338, 321, 26));
        dep_withdrawals_list->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        result_dep_tax = new QLabel(centralwidget);
        result_dep_tax->setObjectName(QString::fromUtf8("result_dep_tax"));
        result_dep_tax->setGeometry(QRect(840, 451, 221, 26));
        result_dep_tax->setFont(font5);
        result_dep_tax->setMouseTracking(false);
        result_dep_tax->setTabletTracking(false);
        result_dep_tax->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        form_16 = new QLabel(centralwidget);
        form_16->setObjectName(QString::fromUtf8("form_16"));
        form_16->setGeometry(QRect(710, 492, 91, 21));
        form_16->setFont(font5);
        form_16->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        form_24 = new QLabel(centralwidget);
        form_24->setObjectName(QString::fromUtf8("form_24"));
        form_24->setGeometry(QRect(1030, 298, 91, 21));
        form_24->setFont(font5);
        form_24->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        dep_term = new QLineEdit(centralwidget);
        dep_term->setObjectName(QString::fromUtf8("dep_term"));
        dep_term->setGeometry(QRect(770, 296, 80, 26));
        dep_term->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        form_26 = new QLabel(centralwidget);
        form_26->setObjectName(QString::fromUtf8("form_26"));
        form_26->setGeometry(QRect(710, 352, 121, 16));
        form_26->setFont(font5);
        form_26->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        form_15 = new QLabel(centralwidget);
        form_15->setObjectName(QString::fromUtf8("form_15"));
        form_15->setGeometry(QRect(710, 417, 61, 21));
        form_15->setFont(font5);
        form_15->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        form_27 = new QLabel(centralwidget);
        form_27->setObjectName(QString::fromUtf8("form_27"));
        form_27->setGeometry(QRect(710, 389, 128, 16));
        form_27->setFont(font5);
        form_27->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        form_21 = new QLabel(centralwidget);
        form_21->setObjectName(QString::fromUtf8("form_21"));
        form_21->setGeometry(QRect(1030, 255, 51, 21));
        form_21->setFont(font5);
        form_21->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        capitalization_check = new QRadioButton(centralwidget);
        capitalization_check->setObjectName(QString::fromUtf8("capitalization_check"));
        capitalization_check->setGeometry(QRect(1140, 299, 16, 20));
        dep_result = new QPushButton(centralwidget);
        dep_result->setObjectName(QString::fromUtf8("dep_result"));
        dep_result->setGeometry(QRect(1080, 488, 80, 26));
        dep_result->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        dep_result->setIconSize(QSize(40, 40));
        form_25 = new QLabel(centralwidget);
        form_25->setObjectName(QString::fromUtf8("form_25"));
        form_25->setGeometry(QRect(710, 333, 81, 21));
        form_25->setFont(font5);
        form_25->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        box_dep_period = new QComboBox(centralwidget);
        box_dep_period->addItem(QString());
        box_dep_period->addItem(QString());
        box_dep_period->addItem(QString());
        box_dep_period->setObjectName(QString::fromUtf8("box_dep_period"));
        box_dep_period->setGeometry(QRect(930, 295, 91, 26));
        box_dep_period->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        form_14 = new QLabel(centralwidget);
        form_14->setObjectName(QString::fromUtf8("form_14"));
        form_14->setGeometry(QRect(710, 455, 81, 21));
        form_14->setFont(font5);
        form_14->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        result_dep_amount = new QLabel(centralwidget);
        result_dep_amount->setObjectName(QString::fromUtf8("result_dep_amount"));
        result_dep_amount->setGeometry(QRect(840, 488, 221, 26));
        result_dep_amount->setFont(font5);
        result_dep_amount->setMouseTracking(false);
        result_dep_amount->setTabletTracking(false);
        result_dep_amount->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        form_22 = new QLabel(centralwidget);
        form_22->setObjectName(QString::fromUtf8("form_22"));
        form_22->setGeometry(QRect(870, 260, 54, 21));
        form_22->setFont(font5);
        form_22->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        result_dep_percents = new QLabel(centralwidget);
        result_dep_percents->setObjectName(QString::fromUtf8("result_dep_percents"));
        result_dep_percents->setGeometry(QRect(840, 414, 221, 26));
        result_dep_percents->setFont(font5);
        result_dep_percents->setMouseTracking(false);
        result_dep_percents->setTabletTracking(false);
        result_dep_percents->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        form_19 = new QLabel(centralwidget);
        form_19->setObjectName(QString::fromUtf8("form_19"));
        form_19->setGeometry(QRect(870, 298, 51, 21));
        form_19->setFont(font5);
        form_19->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
        form_20 = new QLabel(centralwidget);
        form_20->setObjectName(QString::fromUtf8("form_20"));
        form_20->setGeometry(QRect(710, 260, 54, 21));
        form_20->setFont(font5);
        form_20->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}"));
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
        power->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        result_number_2->setStyleSheet(QCoreApplication::translate("MainWindow", "QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}", nullptr));
        xgraph_6->setText(QCoreApplication::translate("MainWindow", "Y:", nullptr));
        form_2->setText(QCoreApplication::translate("MainWindow", "axis  -X:", nullptr));
        form->setText(QCoreApplication::translate("MainWindow", "formula:", nullptr));
        form_3->setText(QCoreApplication::translate("MainWindow", "X:", nullptr));
        xgraph->setText(QCoreApplication::translate("MainWindow", "value:", nullptr));
        xgraph_5->setText(QCoreApplication::translate("MainWindow", "axis  -Y:", nullptr));
        xgraph_7->setText(QCoreApplication::translate("MainWindow", ";", nullptr));
        pushButton_make_graph->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        form_4->setText(QCoreApplication::translate("MainWindow", "amount:", nullptr));
        line_4->setStyleSheet(QCoreApplication::translate("MainWindow", "QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}", nullptr));
        form_11->setText(QCoreApplication::translate("MainWindow", "total payment:", nullptr));
        credit_result->setText(QCoreApplication::translate("MainWindow", "result", nullptr));
        xgraph_8->setText(QCoreApplication::translate("MainWindow", "Credit Calculator", nullptr));
        box_type_credit->setItemText(0, QCoreApplication::translate("MainWindow", "annuity", nullptr));
        box_type_credit->setItemText(1, QCoreApplication::translate("MainWindow", "differentiated", nullptr));

        form_9->setText(QCoreApplication::translate("MainWindow", "monthly payment:", nullptr));
        result_cr_overpayment->setText(QString());
        result_cr_total->setText(QString());
        form_5->setText(QCoreApplication::translate("MainWindow", "term:", nullptr));
        result_cr_monthly_pay->setText(QString());
        form_6->setText(QCoreApplication::translate("MainWindow", "rate, %:", nullptr));
        form_10->setText(QCoreApplication::translate("MainWindow", "overpayment:", nullptr));
        line_6->setStyleSheet(QCoreApplication::translate("MainWindow", "QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}", nullptr));
        line_7->setStyleSheet(QCoreApplication::translate("MainWindow", "QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}", nullptr));
        line_8->setStyleSheet(QCoreApplication::translate("MainWindow", "QLabel {\n"
"	font: 16pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}", nullptr));
        xgraph_9->setText(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        xgraph_4->setText(QCoreApplication::translate("MainWindow", "Graph", nullptr));
        line_5->setStyleSheet(QCoreApplication::translate("MainWindow", "QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}", nullptr));
        xgraph_10->setText(QCoreApplication::translate("MainWindow", "Deposit Calculator", nullptr));
        form_7->setText(QCoreApplication::translate("MainWindow", "X:", nullptr));
        form_18->setText(QCoreApplication::translate("MainWindow", "term:", nullptr));
        form_23->setText(QCoreApplication::translate("MainWindow", "mounth", nullptr));
        default_2->setText(QCoreApplication::translate("MainWindow", "def: 7.5", nullptr));
        form_17->setText(QCoreApplication::translate("MainWindow", "replenishments:", nullptr));
        result_dep_tax->setText(QString());
        form_16->setText(QCoreApplication::translate("MainWindow", "total amount:", nullptr));
        form_24->setText(QCoreApplication::translate("MainWindow", "capitalization:", nullptr));
        form_26->setText(QCoreApplication::translate("MainWindow", "mounth:sum - 02:4325", nullptr));
        form_15->setText(QCoreApplication::translate("MainWindow", "percents:", nullptr));
        form_27->setText(QCoreApplication::translate("MainWindow", "mounth:sum - 10:4797", nullptr));
        form_21->setText(QCoreApplication::translate("MainWindow", "tax, %:", nullptr));
        capitalization_check->setStyleSheet(QCoreApplication::translate("MainWindow", "QLabel {\n"
"	font: 14pt \"Avenir Next\";\n"
"	color: black;\n"
"	border: 0px;\n"
"}", nullptr));
        capitalization_check->setText(QString());
        dep_result->setText(QCoreApplication::translate("MainWindow", "result", nullptr));
        form_25->setText(QCoreApplication::translate("MainWindow", "withdrawals:", nullptr));
        box_dep_period->setItemText(0, QCoreApplication::translate("MainWindow", "monthly", nullptr));
        box_dep_period->setItemText(1, QCoreApplication::translate("MainWindow", "quarterly", nullptr));
        box_dep_period->setItemText(2, QCoreApplication::translate("MainWindow", "annually", nullptr));

        form_14->setText(QCoreApplication::translate("MainWindow", "tax amount:", nullptr));
        result_dep_amount->setText(QString());
        form_22->setText(QCoreApplication::translate("MainWindow", "rate, %:", nullptr));
        result_dep_percents->setText(QString());
        form_19->setText(QCoreApplication::translate("MainWindow", "period:", nullptr));
        form_20->setText(QCoreApplication::translate("MainWindow", "amount:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
