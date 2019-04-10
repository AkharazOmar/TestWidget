#ifndef BUILDLINESTYLE_H
#define BUILDLINESTYLE_H

#include <QWidget>

#include <QFont>
#include <QFontDatabase>
#include <QBrush>
#include <QLabel>
#include <QComboBox>
#include <QVariant>

#include <tuple>


class BuildLineStyle : public QWidget
{
    Q_OBJECT
public:
    static const QStringList COLUMN_NAMES;

    explicit BuildLineStyle(QWidget *parent = nullptr);

    std::tuple<QFont, QBrush> build();

signals:

public slots:

private:
    QString _columnName = "";
    QVariant _value = "";

    QLabel _titleColumnName{"Column"};
    QComboBox _columnChose;
    QComboBox _operatorColumn;
    QComboBox _comboBoxColumn;

    QLabel _fontSection;
    QFont f;
    QBrush b;

};

#endif // BUILDLINESTYLE_H
