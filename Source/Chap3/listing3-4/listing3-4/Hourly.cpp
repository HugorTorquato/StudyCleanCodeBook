#include "Hourly.h"

bool Hourly::isPayDay() const
{
	return false;
}

double Hourly::calculatePay() const
{
	return 2.0;
}

bool Hourly::deliverPay() const
{
	return false;
}
