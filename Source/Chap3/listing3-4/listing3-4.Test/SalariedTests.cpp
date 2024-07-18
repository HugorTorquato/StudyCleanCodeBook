#include "SalariedTests.h"

SalariedTests::SalariedTests()
{
}

SalariedTests::~SalariedTests()
{
}

void SalariedTests::SetUp()
{
}

void SalariedTests::TearDown()
{
}

TEST_F(SalariedTests, simpleObjectPropertyValidation) {

	salaried.type = HourlyEnum;
	EXPECT_EQ(salaried.type, HourlyEnum);
}

TEST_F(SalariedTests, validadeBaseClassIsPayDayOutput) {

	EXPECT_EQ(salaried.isPayDay(), true);
}
TEST_F(SalariedTests, validadeBaseClassCalculatePayOutput) {

	EXPECT_EQ(salaried.calculatePay(), 3.0);
}
TEST_F(SalariedTests, validadeBaseClassDeliverPayOutput) {

	EXPECT_EQ(salaried.deliverPay(), true);
}