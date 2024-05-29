


/*
  The idea of this example is to refactoy, using the naming patterns presented in the chapter, the printGuessStatistics free method.

  Breaf recaptulation reguarding what was presented in this chapter
  - 



*/
#include <iostream>

#include "freeFunctionToRefactory.cpp"
using namespace std;

int main() {
  std::cout << "Hello, world2!" << std::endl;

  printGuessStatistics("candidates", 3);

  return 0;
}


// docker build -t listing2 .
// docker run --rm listing2 