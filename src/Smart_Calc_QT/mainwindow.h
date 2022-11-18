#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
// #include <qcustomplot.h>

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
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void write_string();
    void equals_clicked();
    void all_clean();

};
#endif // MAINWINDOW_H
