#ifndef ADJUSTERS_H
#define ADJUSTERS_H

#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QString>
#include <list>


class Adjusters : public QVBoxLayout
{
    Q_OBJECT

public:
    Adjusters(QString text);
    ~Adjusters();

private:
    QPushButton *top;
    QPushButton *bottom;
    QLabel *text;
    double current;
    std::list<double> values;
    std::list<double>::iterator pos;

    void initValues(QString text);
private slots:
    void handleUp();
    void handleDown();
};

#endif // ADJUSTERS_H