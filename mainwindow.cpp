#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "buildstyle.h"

#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
                                          QMainWindow(parent),
                                          ui(new Ui::MainWindow),
                                          _button(new QPushButton("display", this)),
                                          _buildW(new BuildStyle(this))
{
    ui->setupUi(this);

    connect(_button, &QPushButton::clicked, _buildW, &QWidget::show);
    setCentralWidget(_button);
}

MainWindow::~MainWindow()
{
delete ui;
}
