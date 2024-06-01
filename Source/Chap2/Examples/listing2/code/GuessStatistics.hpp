

#ifndef GUESS_STATISTICS_GUARD  // Replace with your actual header name in uppercase
#define GUESS_STATISTICS_GUARD
#pragma once

#include <string>

using namespace std;

class GuessStatistics {
    public:
        GuessStatistics(){
            Number = "";
            Verb = "";
            PluralModifier = "";
        };

        GuessStatistics(const string number, const string verb, const string pluralModifier);
        ~GuessStatistics(){

        };

        string getNumber();
        string getVerb();
        string getPluralModifier();
        string getMessage();

        void setNumber(const string number);
        void setVerb(const string verb);
        void setPluralModifier(const string pluralModifier);
        void setMessage(const string message);

        static string displayNumberPerCategory(const string category, const int numberPerCategory);
        void updateObjProperties(const string number, const string verb, const string pluralModifier);
        void updateObjMessageOutput(GuessStatistics& objectWithProperties, const string category);

        static GuessStatistics createGuessStatisticObj(const string category, const int numberPerCategory);

    public:
        string Number;
        string Verb;        
        string PluralModifier;
        string Message;
};

#endif // GUESS_STATISTICS_GUARD