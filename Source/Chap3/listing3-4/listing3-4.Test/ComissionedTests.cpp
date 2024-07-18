#include "ComissionedTests.h"

ComissionedTests::ComissionedTests()
{
}

ComissionedTests::~ComissionedTests()
{
}

void ComissionedTests::SetUp()
{
}

void ComissionedTests::TearDown()
{
}

TEST_F(ComissionedTests, simpleObjectPropertyValidation) {

	comiss.type = HourlyEnum;
	EXPECT_EQ(comiss.type, HourlyEnum);
}

TEST_F(ComissionedTests, validadeBaseClassIsPayDayOutput) {

	EXPECT_EQ(comiss.isPayDay(), true);
}
TEST_F(ComissionedTests, validadeBaseClassCalculatePayOutput) {

	EXPECT_EQ(comiss.calculatePay(), 1.0);
}
TEST_F(ComissionedTests, validadeBaseClassDeliverPayOutput) {

	EXPECT_EQ(comiss.deliverPay(), true);
}