#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qcustomplot.h>

#ifdef __cplusplus
extern "C" {
#endif
#include "./calc.h"
#ifdef __cplusplus
}
#endif
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int clean_board = 0;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void write_string();
    void equals_clicked();
    void all_clean();
    void on_pushButton_make_graph_clicked();
    void on_credit_result_clicked();
    void on_dep_result_clicked();
};
#endif // MAINWINDOW_H
