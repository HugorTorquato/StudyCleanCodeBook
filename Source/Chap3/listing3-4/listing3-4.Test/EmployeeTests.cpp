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

	imp.type = Comissioned;
	EXPECT_EQ(imp.type, Comissioned);
}