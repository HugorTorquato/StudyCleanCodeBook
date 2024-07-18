#include "HourlyTests.h"

HourlyTests::HourlyTests()
{
}

HourlyTests::~HourlyTests()
{
}

void HourlyTests::SetUp()
{
}

void HourlyTests::TearDown()
{
}

TEST_F(HourlyTests, simpleObjectPropertyValidation) {

	hourly.type = HourlyEnum;
	EXPECT_EQ(hourly.type, HourlyEnum);
}

TEST_F(HourlyTests, validadeBaseClassIsPayDayOutput) {

	EXPECT_EQ(hourly.isPayDay(), false);
}
TEST_F(HourlyTests, validadeBaseClassCalculatePayOutput) {

	EXPECT_EQ(hourly.calculatePay(), 2.0);
}
TEST_F(HourlyTests, validadeBaseClassDeliverPayOutput) {

	EXPECT_EQ(hourly.deliverPay(), false);
}