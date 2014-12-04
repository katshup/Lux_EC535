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
    double current;
    QString whoami;
    QLabel *text;
    Adjusters(QString text); // changed by Ted
    ~Adjusters();

private:
    QPushButton *top;
    QPushButton *bottom;
    std::list<double> values;
    std::list<double>::iterator pos;

    void initValues(QString text);
private slots:
    void handleUp();
    void handleDown();
};

#endif // ADJUSTERS_H
