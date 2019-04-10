#include "buildstyle.h"
#include "ui_buildstyle.h"

#include <QColorDialog>

BuildStyle::BuildStyle(QWidget *parent) :
QDialog(parent),
ui(new Ui::BuildStyle)
{
ui->setupUi(this);
auto dialogColor = new QColorDialog(this);
connect(ui->displayColorHelp, &QPushButton::clicked, dialogColor, &QColorDialog::show);
}

BuildStyle::~BuildStyle()
{
delete ui;
}
