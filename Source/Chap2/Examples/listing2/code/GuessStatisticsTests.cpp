#include <gtest/gtest.h>

#include "GuessStatistics.cpp"

// Test fixture or class for common setup/teardown (optional)



class GuesStatisticsFixture : public testing::Test {
  public:
    GuessStatistics guessStatistics_;
    void SetUp() override {

    }

    void TearDown() override {

    }

};

TEST_F(GuesStatisticsFixture, isPropertiesInitializedAsEmptyVariables) {

  EXPECT_EQ(guessStatistics_.getNumber(), "");
  EXPECT_EQ(guessStatistics_.getVerb(), "");
  EXPECT_EQ(guessStatistics_.getPluralModifier(), "");
  EXPECT_EQ(guessStatistics_.getMessage(), "");
}


TEST_F(GuesStatisticsFixture, isNumberPropertiesBeenSet) {

  string _number = "1";

  guessStatistics_.setNumber(_number);

  EXPECT_EQ(guessStatistics_.getNumber(), _number);
}

TEST_F(GuesStatisticsFixture, isVerbPropertiesBeenSet) {

  string _verb = "is";

  guessStatistics_.setVerb(_verb);

  EXPECT_EQ(guessStatistics_.getVerb(), _verb);
}

TEST_F(GuesStatisticsFixture, isPluralModifierPropertiesBeenSet) {

  string _pluralModifier = "";

  guessStatistics_.setPluralModifier(_pluralModifier);

  EXPECT_EQ(guessStatistics_.getPluralModifier(), _pluralModifier);
}

TEST_F(GuesStatisticsFixture, isMessagePropertiesBeenSet) {

  string _message = "Test123";

  guessStatistics_.setMessage(_message);

  EXPECT_EQ(guessStatistics_.getMessage(), _message);
}

TEST_F(GuesStatisticsFixture, isConstructorOverloadSavingPropertiesValues) {

  string _number = "2";
  string _verb = "are";
  string _pluralModifier = "s";

  GuessStatistics guessStatisticsNewValues(_number, _verb, _pluralModifier);

  EXPECT_EQ(guessStatisticsNewValues.getNumber(), _number);
  EXPECT_EQ(guessStatisticsNewValues.getVerb(), _verb);
  EXPECT_EQ(guessStatisticsNewValues.getPluralModifier(), _pluralModifier);
}

TEST_F(GuesStatisticsFixture, identifyWhenNoNumberPerCategory) {

  int _number = 0;
  string _verb = "are";
  string _pluralModifier = "s";

  auto localGuessStatistics = createGuessStatisticObj("Categoria", _number);

  EXPECT_EQ(localGuessStatistics.getNumber(), to_string(_number));
  EXPECT_EQ(localGuessStatistics.getVerb(), _verb);
  EXPECT_EQ(localGuessStatistics.getPluralModifier(), _pluralModifier);

}

TEST_F(GuesStatisticsFixture, identifyWhenOneNumberPerCategory) {

  int _number = 1;
  string _verb = "is";
  string _pluralModifier = "";

  auto localGuessStatistics = createGuessStatisticObj("Categoria", _number);

  EXPECT_EQ(localGuessStatistics.getNumber(), to_string(_number));
  EXPECT_EQ(localGuessStatistics.getVerb(), _verb);
  EXPECT_EQ(localGuessStatistics.getPluralModifier(), _pluralModifier);

}

TEST_F(GuesStatisticsFixture, identifyWhenMoreThanOneNumberPerCategory) {

  int _number = 2;
  string _verb = "are";
  string _pluralModifier = "s";

  auto localGuessStatistics = createGuessStatisticObj("Categoria", _number);

  EXPECT_EQ(localGuessStatistics.getNumber(), to_string(_number));
  EXPECT_EQ(localGuessStatistics.getVerb(), _verb);
  EXPECT_EQ(localGuessStatistics.getPluralModifier(), _pluralModifier);

}

TEST_F(GuesStatisticsFixture, returnMessageRefersToZeroNumberPerCategory) {
  int _number = 0;
  string _verb = "are";
  string _pluralModifier = "s";
  string category = "categoria";

  string expectedMessage = "There are 0 categorias";

  auto localGuessStatistics = displayNumberPerCategory(category, _number);

  EXPECT_EQ( localGuessStatistics, expectedMessage);

}

TEST_F(GuesStatisticsFixture, returnMessageRefersToOneNumberPerCategory) {
  int _number = 1;
  string _verb = "is";
  string _pluralModifier = "";
  string category = "categoria";

  string expectedMessage = "There is 1 categoria";

  auto localGuessStatistics = displayNumberPerCategory(category, _number);

  EXPECT_EQ( localGuessStatistics, expectedMessage);

}

TEST_F(GuesStatisticsFixture, returnMessageRefersToMoreThanOneNumberPerCategory) {
  int _number = 2;
  string _verb = "are";
  string _pluralModifier = "s";
  string category = "categoria";

  string expectedMessage = "There are 2 categorias";

  auto localGuessStatistics = displayNumberPerCategory(category, _number);

  EXPECT_EQ( localGuessStatistics, expectedMessage);

}