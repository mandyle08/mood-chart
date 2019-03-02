#include "mood.h"


Mood::Mood(const QColor &color, const QString &label)
{
   setLabel(label);
   setColor(color);
}

QString Mood::getLabel() const
{
    return label;
}

void Mood::setLabel(const QString &value)
{
    label = value;
}

QColor Mood::getColor() const
{
    return color;
}

void Mood::setColor(const QColor &value)
{
    color = value;
}
