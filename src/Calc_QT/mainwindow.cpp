#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0,SIGNAL(clicked()),this,SLOT(digits()));
    connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(digits()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(digits()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(digits()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(digits()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(digits()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(digits()));
    connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(digits()));
    connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(digits()));
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(digits()));
    connect(ui->pushButton_sign,SIGNAL(clicked()),this,SLOT(operations()));
    connect(ui->pushButton_percent,SIGNAL(clicked()),this,SLOT(operations()));
    connect(ui->pushButton_div,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->pushButton_add,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->pushButton_sub,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->pushButton_mul,SIGNAL(clicked()),this,SLOT(math_operations()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits()
{
    QPushButton *button = (QPushButton *)sender();
    QString string;
    string = (ui->result_number->text() + button->text());
    ui->result_number->setText(string);
}

void MainWindow::on_pushButton_point_clicked()
{
    ui->result_number->setText(ui->result_number->text() + ".");
}

void MainWindow::binary_operators()
{
    QPushButton *button = (QPushButton *)sender();
    QString string_all;
    if (button->text() == '+' || button->text() == '-' || button->text() == '*' || button->text() == '/' || button->text() == '^') {
        string_all = (ui->result_number->text() + button->text());
        ui->result_number->setText(string_all);
    } else if (button->text() == "+/-") {
        QChar unary = '-';
        string_all = (ui->result_number->text() + unary);
        ui->result_number->setText(string_all);
    }
}

void MainWindow::functions()
{
    QPushButton *button = (QPushButton *)sender();
    QString string_all;
    string_all = (ui->result_number->text() + button->text());
    ui->result_number->setText(string_all);
}


void MainWindow::operators()
{
    QPushButton *button = (QPushButton *)sender();
    QString string_all;
    string_all = (ui->result_number->text() + button->text());
    ui->result_number->setText(string_all);
}

void MainWindow::on_pushButton_AC_clicked()
{
    ui->result_number->setText("");
}

void MainWindow::on_pushButton_x_clicked()
{
    QPushButton *button = (QPushButton *)sender();
    QString string_all;
    string_all = (ui->result_number->text() + button->text());
    ui->result_number->setText(string_all);
}


void MainWindow::on_pushButton_clean_clicked()
{
    QString qstr = ui->result_number->text();
    char str[256];
    char equal[2];
    equal[0] = '=';
    double x_num = 0;
    QByteArray bytes = qstr.toLocal8Bit();
    strcpy(str, bytes.data());
    strncat(str, equal, 1);
//    if (ui->result_number->text().contains('x')) {
//        x_num = ui->x_calc_value->text().toDouble();
//    }
    double res = 0.0;
//    res = read_string(str, 0);
    QString new_label = QString::number(res, 'f', 6);
    ui->result_number->setText(new_label);
}
