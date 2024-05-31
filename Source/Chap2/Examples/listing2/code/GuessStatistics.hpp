

#ifndef GUESS_STATISTICS_GUARD  // Replace with your actual header name in uppercase
#define GUESS_STATISTICS_GUARD
#pragma once

#include <string>

using namespace std;

class GuessStatistics {
    public:
        GuessStatistics(){
            Number = "";
            //Verb = "";
            //PluralModifier = "";
        };
        ~GuessStatistics(){

        };

        /// @brief 
        /// @return 
        string getNumber();
        //string getVerb();
        //string getPluralModifier();

        //void setNumber(const string number);
        //void setVerb(const string verb);
       // void setPluralModifier(const string pluralModifier);

    public:
        string Number;
        //string Verb;        
        //string PluralModifier;
};

#endif // GUESS_STATISTICS_GUARD


