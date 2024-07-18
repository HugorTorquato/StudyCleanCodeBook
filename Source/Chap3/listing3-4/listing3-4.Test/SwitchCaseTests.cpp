#include "SwitchCaseTests.h"

SwitchCaseTests::SwitchCaseTests()
{
	_comissioned.type = ComissionedEnum;
	_hourly.type = HourlyEnum;
	_salaried.type = SalariedEnum;
}

SwitchCaseTests::~SwitchCaseTests()
{
}

void SwitchCaseTests::SetUp()
{
}

void SwitchCaseTests::TearDown()
{
}

employeeType SwitchCaseTests::getTypeByObjectClass(Employee& e)
{
	switch (e.type)
	{
	case(ComissionedEnum):
		return e.type;	
	case(HourlyEnum):
		return e.type;	
	case(SalariedEnum):
		return e.type;
	default:
			break;
	}

	return e.type;
}

// Defin a pointer that receives thee class object value, in this way, i can acess the polymorphism methods without calling it all over again
TEST_F(SwitchCaseTests, definePointerFromComissionedToBaseClass) {

	Employee* _employee = &_comissioned; 

	EXPECT_EQ(_employee->isPayDay(), true);
	EXPECT_EQ(_employee->calculatePay(), 1.0);
	EXPECT_EQ(_employee->deliverPay(), true);

}

TEST_F(SwitchCaseTests, definePointerFromHourlyToBaseClass) {

	Employee* _employee = &_hourly;

	EXPECT_EQ(_employee->isPayDay(), false);
	EXPECT_EQ(_employee->calculatePay(), 2.0);
	EXPECT_EQ(_employee->deliverPay(), false);

}

TEST_F(SwitchCaseTests, definePointerFromSalariedToBaseClass) {

	Employee* _employee = &_salaried;

	EXPECT_EQ(_employee->isPayDay(), true);
	EXPECT_EQ(_employee->calculatePay(), 3.0);
	EXPECT_EQ(_employee->deliverPay(), true);

}

TEST_F(SwitchCaseTests, testTheSwitchCaseStatementWithDerivedClassesComissioned) {

	Employee* _employee = &_comissioned;

	EXPECT_EQ(getTypeByObjectClass(*_employee), ComissionedEnum);

}

TEST_F(SwitchCaseTests, testTheSwitchCaseStatementWithDerivedClassesHourly) {

	Employee* _employee = &_hourly;

	EXPECT_EQ(getTypeByObjectClass(*_employee), HourlyEnum);

}

TEST_F(SwitchCaseTests, testTheSwitchCaseStatementWithDerivedClassesSalaried) {

	Employee* _employee = &_salaried;

	EXPECT_EQ(getTypeByObjectClass(*_employee), SalariedEnum);

}