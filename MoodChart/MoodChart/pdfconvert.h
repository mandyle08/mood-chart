#ifndef PDFCONVERT_H
#define PDFCONVERT_H

#include <QWidget>
#include <QPrinter>
#include <QPainter>
#include <QTableWidget>

class PdfConvert : public QPrinter
{
public:
    PdfConvert();
    void exportPDF(QTableWidget* w, const QString& fileName);

};

#endif // PDFCONVERT_H
