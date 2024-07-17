#pragma once

#include "gtest/gtest.h"
#include "../listing3-4/Employee.h"

class EmployeeTests : public ::testing::Test
{
protected:
	EmployeeTests();
	~EmployeeTests();

	void SetUp() override;

	void TearDown() override;

	Employee imp;
};

