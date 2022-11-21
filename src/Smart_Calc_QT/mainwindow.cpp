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

    connect(ui->open_bracket, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->close_bracket, SIGNAL(clicked()), this, SLOT(write_string()));
    connect(ui->change_sign, SIGNAL(clicked()), this, SLOT(write_string()));

    connect(ui->all_clean, SIGNAL(clicked()), this, SLOT(all_clean()));
    connect(ui->equals, SIGNAL(clicked()), this, SLOT(equals_clicked()));

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
}

void MainWindow::equals_clicked()
{
    clean_board = 1;
    cout << "Hello world!!!\n";
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
