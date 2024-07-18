#pragma once

#include "Employee.h"

class Hourly : public Employee
{
public:
	bool isPayDay() const override;
	double calculatePay() const override;
	bool deliverPay() const override;
};

