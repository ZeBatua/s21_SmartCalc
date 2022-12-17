#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <qcustomplot.h>

#include <QMainWindow>

#ifdef __cplusplus
extern "C" {
#endif
#include "./calc.h"
#ifdef __cplusplus
}
#endif
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  int clean_board = 0;
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 private:
  Ui::MainWindow *ui;

 private slots:
  void write_string();
  void write_string_num();
  void equals_clicked();
  void all_clean();
  void on_pushButton_make_graph_clicked();
  void on_credit_result_clicked();
  void on_dep_result_clicked();
  void on_open_bonus_clicked();
  void on_close_bonus_clicked();
  void on_clean_all_dep_clicked();
  void on_clean_all_credit_clicked();
};
#endif  // MAINWINDOW_H
