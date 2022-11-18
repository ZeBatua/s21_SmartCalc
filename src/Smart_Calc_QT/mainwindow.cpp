#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "./calc.h"
#include <iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(write_string()));

    connect(ui->pushButton_dot, SIGNAL(clicked()), this, SLOT(write_string()));

    connect(ui->pushButton_mul, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->pushButton_add, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->pushButton_sub, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->pushButton_div, SIGNAL(clicked()), this, SLOT(write_string()));

    connect(ui->pushButton_AC, SIGNAL(clicked()), this, SLOT(all_clean()));
    connect(ui->equals, SIGNAL(clicked()), this, SLOT(equals_clicked()));




//    connect(ui->pushButton_ln, SIGNAL(clicked()), this, SLOT(write_string()));
//    connect(ui->pushButton_log, SIGNAL(clicked()), this, SLOT(write_string()));
//    connect(ui->pushButton_mod, SIGNAL(clicked()), this, SLOT(write_string()));
//    connect(ui->pushButton_sin, SIGNAL(clicked()), this, SLOT(write_string()));
//    connect(ui->pushButton_cos, SIGNAL(clicked()), this, SLOT(write_string()));
//    connect(ui->pushButton_tan, SIGNAL(clicked()), this, SLOT(write_string()));
//    connect(ui->pushButton_asin, SIGNAL(clicked()), this, SLOT(write_string()));
//    connect(ui->pushButton_acos, SIGNAL(clicked()), this, SLOT(write_string()));
//    connect(ui->pushButton_atan, SIGNAL(clicked()), this, SLOT(write_string()));
//    connect(ui->pushButton_sqrt, SIGNAL(clicked()), this, SLOT(write_string()));

//    connect(ui->pushButton_left_bracket, SIGNAL(clicked()), this, SLOT(write_string()));
//    connect(ui->pushButton_right_bracket, SIGNAL(clicked()), this, SLOT(write_string()));
//    connect(ui->pushButton_unary, SIGNAL(clicked()), this, SLOT(write_string()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::write_string()
{
    QPushButton *button = (QPushButton *)sender();
    QString string;
    string = (ui->result_number->text() + button->text());
    ui->result_number->setText(string);
}

void MainWindow::all_clean()
{
    ui->result_number->setText("");
}

void MainWindow::equals_clicked()
{
    cout << "Hello world!!!\n";
//    ui->result_number->setText("");
    QString qstr = ui->result_number->text();
    QByteArray bytes = qstr.toLocal8Bit();
    char mass[256];

    strlcpy(mass, bytes.data(), 256);
    double res = 0.0;
    int status = 0;
    res = read_string(mass, &status);
    QString new_label = QString::number(res, 'f', 6);
    ui->result_number->setText(new_label);
}
