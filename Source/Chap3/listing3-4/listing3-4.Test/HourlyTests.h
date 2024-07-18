#pragma once

#include "gtest/gtest.h"
#include "../listing3-4/Hourly.h"

class HourlyTests: public ::testing::Test
{
protected:
	HourlyTests();
	~HourlyTests();

	void SetUp() override;
	void TearDown() override;

	Hourly hourly;
};

