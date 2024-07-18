#pragma once

#include "gtest/gtest.h"
#include "../listing3-4/Comissioned.h"
#include "../listing3-4/Hourly.h"
#include "../listing3-4/Salaried.h"

class SwitchCaseTests : public ::testing::Test
{
protected:

	SwitchCaseTests();
	~SwitchCaseTests();

	void SetUp() override;
	void TearDown() override;

	employeeType getTypeByObjectClass(Employee& e);

	Comissioned _comissioned;
	Hourly _hourly;
	Salaried _salaried;
};

