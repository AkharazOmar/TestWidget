#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "buildstyle.h"

#include <QMainWindow>

#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
explicit MainWindow(QWidget *parent = nullptr);
~MainWindow();

private:
Ui::MainWindow *ui;
QPushButton * _button;
BuildStyle *_buildW;
};

#endif // MAINWINDOW_H
