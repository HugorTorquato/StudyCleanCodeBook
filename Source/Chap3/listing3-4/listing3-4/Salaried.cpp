#include "Salaried.h"

bool Salaried::isPayDay() const
{
    return true;
}

double Salaried::calculatePay() const
{
    return 3.0;
}

bool Salaried::deliverPay() const
{
    return true;
}
