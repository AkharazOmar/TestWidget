#ifndef BUILDSTYLE_H
#define BUILDSTYLE_H

#include <QDialog>

namespace Ui {
class BuildStyle;
}

class BuildStyle : public QDialog
{
Q_OBJECT

public:
explicit BuildStyle(QWidget *parent = nullptr);
~BuildStyle();

private:
Ui::BuildStyle *ui;
};

#endif // BUILDSTYLE_H
