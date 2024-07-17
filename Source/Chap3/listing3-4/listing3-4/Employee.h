#pragma once

enum employeeType
{
	Comissioned,
	Hourly,
	Salaried
};



class Employee
{
public:

	virtual bool isPayDay() const;
	virtual double calculatePay() const;
	virtual bool deliverPay() const;

	employeeType type;
}