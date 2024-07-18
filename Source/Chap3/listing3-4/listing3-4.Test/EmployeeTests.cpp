#include "EmployeeTests.h"

EmployeeTests::EmployeeTests()
{
}

EmployeeTests::~EmployeeTests()
{
}

void EmployeeTests::SetUp()
{
}

void EmployeeTests::TearDown()
{
}

TEST_F(EmployeeTests, simpleObjectPropertyValidation) {

	imp.type = ComissionedEnum;
	EXPECT_EQ(imp.type, ComissionedEnum);
}

TEST_F(EmployeeTests, validadeBaseClassIsPayDayOutput) {

	EXPECT_EQ(imp.isPayDay(), false);
}
TEST_F(EmployeeTests, validadeBaseClassCalculatePayOutput) {

	EXPECT_EQ(imp.calculatePay(), 0.0);
}
TEST_F(EmployeeTests, validadeBaseClassDeliverPayOutput) {

	EXPECT_EQ(imp.deliverPay(), false);
}