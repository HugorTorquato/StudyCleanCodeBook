#pragma once

#include "gtest/gtest.h"
#include "../listing3-4/Salaried.h"

class SalariedTests : public ::testing::Test
{
protected:
	SalariedTests();
	~SalariedTests();

	void SetUp() override;
	void TearDown() override;

	Salaried salaried;
};

