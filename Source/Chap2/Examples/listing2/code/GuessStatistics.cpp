#include "GuessStatistics.hpp"

string GuessStatistics::getNumber()
{
    return Number;
}


string GuessStatistics::getVerb()
{
    return Verb;
}

string GuessStatistics::getPluralModifier()
{
    return PluralModifier;
}

string GuessStatistics::getMessage()
{
    return Message;
}

void GuessStatistics::setNumber(const string number)
{
    Number = number;
}

void GuessStatistics::setVerb(const string verb)
{
    Verb = verb;
}

void GuessStatistics::setPluralModifier(const string pluralModifier)
{
    PluralModifier = pluralModifier;
}

void GuessStatistics::setMessage(const string message)
{
    Message = message;
}

GuessStatistics::GuessStatistics(const string number, const string verb, const string pluralModifier)
{
    setNumber(number);
    setVerb(verb);
    setPluralModifier(pluralModifier);
}

void GuessStatistics::updateObjProperties(const string number, const string verb, const string pluralModifier)
{
    setNumber(number);
    setVerb(verb);
    setPluralModifier(pluralModifier);
}

void GuessStatistics::updateObjMessageOutput(GuessStatistics& objectWithProperties, const string category) {

    string guessMessage = "There " + objectWithProperties.getVerb() + " " + objectWithProperties.getNumber() + " " + category + objectWithProperties.getPluralModifier();
    
    objectWithProperties.setMessage(guessMessage);
}

GuessStatistics createGuessStatisticObj(const string category, const int numberPerCategory) {

    GuessStatistics guessStatistics_;
    if(numberPerCategory == 0) {
        guessStatistics_.updateObjProperties("0", "are", "s");
    } else if (numberPerCategory == 1) {
        guessStatistics_.updateObjProperties("1", "is", "");
    } else {
        guessStatistics_.updateObjProperties(to_string(numberPerCategory), "are", "s");
    }

    return guessStatistics_;
}


string displayNumberPerCategory(const string category, const int numberPerCategory){

    GuessStatistics guessStatistics_ = createGuessStatisticObj(category, numberPerCategory);

    guessStatistics_.updateObjMessageOutput(guessStatistics_, category);

    return guessStatistics_.getMessage();
}


