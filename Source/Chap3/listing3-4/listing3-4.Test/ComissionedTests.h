#pragma once

#include "gtest/gtest.h"
#include "../listing3-4/Comissioned.h"

class ComissionedTests : public ::testing::Test
{
protected:
	ComissionedTests();
	~ComissionedTests();

	void SetUp() override;

	void TearDown() override;

	Comissioned comiss;
};

