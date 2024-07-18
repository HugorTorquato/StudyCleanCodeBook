#pragma once

enum employeeType
{
	ComissionedEnum,
	HourlyEnum,
	SalariedEnum
};



class Employee
{
public:

	virtual bool isPayDay() const;
	virtual double calculatePay() const;
	virtual bool deliverPay() const;

	employeeType type;
};