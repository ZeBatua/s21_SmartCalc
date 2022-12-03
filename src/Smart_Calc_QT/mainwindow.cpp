#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "./calc.h"
#include <QLabel>
#include <QString>
#include <iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->resize(700,580);
    ui->setupUi(this);

    connect(ui->Button_0, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->Button_1, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->Button_2, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->Button_3, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->Button_4, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->Button_5, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->Button_6, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->Button_7, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->Button_8, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->Button_9, SIGNAL(clicked()), this, SLOT(write_string()));

    connect(ui->dot, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->value_x, SIGNAL(clicked()), this, SLOT(write_string()));

    connect(ui->mul, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->add, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->sub, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->div, SIGNAL(clicked()), this, SLOT(write_string()));

    connect(ui->ln, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->lg, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->mod, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->sin, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->cos, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->tan, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->asin, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->acos, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->atan, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->sqrt, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->power, SIGNAL(clicked()), this, SLOT(write_string()));

    connect(ui->open_bracket, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->close_bracket, SIGNAL(clicked()), this, SLOT(write_string()));

    connect(ui->all_clean, SIGNAL(clicked()), this, SLOT(all_clean()));
    connect(ui->equals, SIGNAL(clicked()), this, SLOT(equals_clicked()));
    ui->graph->addGraph();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::write_string()
{
    if (clean_board == 1)
    {
        ui->result_number->setText("");
        clean_board = 0;
    }
    QPushButton *button = (QPushButton *)sender();
    QString string;
    string = (ui->result_number->text() + button->text());
    ui->result_number->setText(string);
}


void MainWindow::all_clean()
{
    ui->result_number->setText("");
    clean_board = 0;
}

void MainWindow::equals_clicked()
{
    clean_board = 0;

    QString qstr = ui->result_number->text();
    QByteArray bytes = qstr.toLocal8Bit();
    char common_string[256];
    strlcpy(common_string, bytes.data(), 256);

    QString qstr_x = ui->result_number_2->text();
    QByteArray bytes_x = qstr_x.toLocal8Bit();
    char string_x[256];
    strlcpy(string_x, bytes_x.data(), 256);


    if (valid_string(common_string, string_x)) {
        double res = 0.0;
        res = calc_string(common_string, string_x);
        QString new_label = QString::number(res, 'f', 6);
        ui->result_number->setText(new_label);
    } else {
        cout << "NOT valid!!!\n";
        QString new_label = "Error";
        ui->result_number->setText(new_label);
    }
    // cout << "done\n"; !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    clean_board = 1;
}

void MainWindow::on_pushButton_make_graph_clicked()
{
    cout << "privet\n";
    double x1 = std::atof(ui->value_graph_1->text().toLocal8Bit().data());
    double x2 = std::atof(ui->value_graph_2->text().toLocal8Bit().data());

    QString qstr = ui->formula->text();
    QByteArray bytes = qstr.toLocal8Bit();
    char common_string[256];
    strlcpy(common_string, bytes.data(), 256);

    QVector<double> X,Y;
    double x = 0.0, mx = 0.0, y = 0.0, my = 0.0;
    x = std::atof(ui->axis_x->text().toLocal8Bit().data());
    y = std::atof(ui->axis_y->text().toLocal8Bit().data());
    my = std::atof(ui->axis_my->text().toLocal8Bit().data());
    mx = std::atof(ui->axis_mx->text().toLocal8Bit().data());
    if (!x || !y || !mx || !my) {
        x = x2;
        y = x2;
        mx = x1;
        my = x1;
    }

    while (x1 <= x2) {
       X.push_back(x1);
       std::string string_x = std::to_string(x1);
       char *x_char = &string_x[0];
       double y = calc_string(common_string, x_char);
       Y.push_back(y);
       x1 += 0.1;
    }

    ui->graph->xAxis->setRange(mx, x);
    ui->graph->yAxis->setRange(my, y);

    ui->graph->graph(0)->addData(X,Y);
    ui->graph->graph(0)->setPen(QPen(QColor(177, 130, 73)));
    ui->graph->replot();

    X.clear();
    Y.clear();

    ui->graph->graph(0)->data()->clear();
}

