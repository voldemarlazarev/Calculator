#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_Button0_released();

    void on_ButtonDiv_released();

    void on_ButtonPoint_released();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
