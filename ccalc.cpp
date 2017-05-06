#include "ccalc.h"

#include <QStringList>

CCalc::CCalc() : firstOperand(qQNaN()),
                 SecondOperand(qQNaN()),
                 operationType("")
{

}

double CCalc::getFirstOperand() const
{
    return firstOperand;
}

void CCalc::setFirstOperand(double value)
{
    firstOperand = value;
}

double CCalc::getSecondOperand() const
{
    return SecondOperand;
}

void CCalc::setSecondOperand(double value)
{
    SecondOperand = value;
}

QString CCalc::getOperationType() const
{
    return operationType;
}

void CCalc::setOperationType(const QString &value)
{
    operationType = value;
}

double CCalc::getResult() const
{
    return result;
}

double CCalc::calculate()
{
    QStringList options;
    options << "/" << "x" << "+" << "-";

    switch(options.indexOf(operationType))
    {
        case 0:
        {
            if (SecondOperand != 0)
            {
                result = firstOperand / SecondOperand;
            }
            else
            {
                result = qQNaN();
            }
        }
        break;
        case 1:
        {
            result = firstOperand * SecondOperand;
        }
        break;
        case 2:
        {
            result = firstOperand + SecondOperand;
        }
        break;
        case 3:
        {
            result = firstOperand - SecondOperand;
        }
        break;
        default:
        {
              qDebug() << "Zjebalo sie";
        }
        break;
    }

    return result;
}
