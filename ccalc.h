#ifndef CCALC_H
#define CCALC_H

#include <QString>
#include <QtCore/QtNumeric>
#include <QDebug>

class CCalc
{
public:
    CCalc();

    double getFirstOperand() const;
    void setFirstOperand(double value);

    double getSecondOperand() const;
    void setSecondOperand(double value);

    QString getOperationType() const;
    void setOperationType(const QString &value);

    double getResult() const;

    double calculate();

private:
    double firstOperand;
    double SecondOperand;
    QString operationType;
    double result;
};

#endif // CCALC_H
