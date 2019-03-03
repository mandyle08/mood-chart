#include "pdfconvert.h"
#include <QDebug>

PdfConvert::PdfConvert() : QPrinter()
{

    setPageSize(QPrinter::A4);
    setOrientation(QPrinter::Portrait);
    setOutputFormat(QPrinter::PdfFormat);


}

void PdfConvert::exportPDF(QTableWidget* w, const QString &fileName)
{
    setOutputFileName(fileName);
    QPainter p;

    p.begin(this);

    w->clearSelection();

    // scale widget size
    double xScale = pageRect().width()/double(w->width());
    double yScale = pageRect().height()/double(w->height());
    double scale = qMin(xScale, yScale);
    p.translate(paperRect().x()+pageRect().width()/2, paperRect().y()+pageRect().height()/2);
    p.scale(scale, scale);

    p.translate(-width()/2, -height()/1.8);

    w->render(&p);
    p.end();
}
