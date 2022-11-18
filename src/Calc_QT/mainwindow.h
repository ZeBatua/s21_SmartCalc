#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
// #include <qcustomplot.h>

#ifdef __cplusplus
extern "C" {
#endif
#include "../calc.h"
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
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    
private slots:
    void digits();
    void on_pushButton_point_clicked();
    void binary_operators();
    void functions();
    void operators();
    void on_pushButton_AC_clicked();
    void on_pushButton_x_clicked();
    void on_pushButton_clean_clicked();
};
#endif // MAINWINDOW_H
