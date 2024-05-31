#include <gtest/gtest.h>

#include "GuessStatistics.hpp"

// Test fixture or class for common setup/teardown (optional)



class GuesStatisticsFixture : public testing::Test {
  protected:
    
    void SetUp() override {
      
    }

    void TearDown() override {

    }

};




TEST_F(GuesStatisticsFixture, isPropertiesInitializedAsEmptyVariables) {

  GuessStatistics guessStatistics_;

  //EXPECT_EQ(guessStatistics_.getNumber(), "");
  EXPECT_EQ(guessStatistics_.getNumber(), "");
}


