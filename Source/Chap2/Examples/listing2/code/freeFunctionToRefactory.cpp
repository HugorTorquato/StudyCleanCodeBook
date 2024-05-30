#include <string>
#include <iostream>

using namespace std;

void printGuessStatistics(string candidate, int count) {
    string number;
    string verb;
    string pluralModifier;

    if(count == 0) {
        number = "no";
        verb = "are";
        pluralModifier = "s";
    } else if (count == 1) {
        number = "1";
        verb = "is";
        pluralModifier = "";  
    } else {
        number = to_string(count);
        verb = "are";
        pluralModifier = "s";  
    }

    string guessMessage = "There " + verb + " " + number + " " + candidate + pluralModifier;
    cout << guessMessage << endl;   

}