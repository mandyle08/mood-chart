#ifndef MOOD_H
#define MOOD_H

#include <QObject>
#include <QColor>

class Mood
{
public:
    explicit Mood(const QColor &color = Qt::white, const QString &label = "Null");

    QString getLabel() const;
    void setLabel(const QString &value);

    QColor getColor() const;
    void setColor(const QColor &value);

private:
    QString label;
    QColor color;

};

#endif // MOOD_H
