


/*
  The idea of this example is to refactoy, using the naming patterns presented in the chapter, the printGuessStatistics free method.

  Breaf recaptulation reguarding what was presented in this chapter
  - 1 - Use intention-revealing names
      -- Choosing good names takes time but saves more than it takes
      -- Always change them when find better ones
      -- Ansewr the following 3 questions
        -- Why it exists?
        -- What it does?
        -- How it is used?
      
  - 2 - Avoid desinformation
      -- Avoid leaving logic that obscure the meaning of the code
      -- Don't use names tha vary in small ways 
        -- The eyes are not able to distingush them easily
  
  - 3 - Make meaningful Distinctions
      -- Diferent names must mean different things, avoid (var1, var2, var3....)

  - 4 - Use pronounceable names
      -- Humans are good at words, so make it readable
      -- Programing is a social activity, that other programings are going to read your code
  
  - 5 - Use searchable names
      -- This helps a lot with the debugging process

  - 6 - Avoide member prefix
      -- The compilers can handle it right now... no need to add extra useless letters
  
  - 7 - Avoid mental mapping
      -- Although programmers are smart... don't push it and make it even harder just to satisfy
      their juggling abilities
      -- Clarity is king
  
  - 8 - Method names
      -- Should be or start with verbs / actions

  - 9 - Don't be cute
      -- Funny names are only funny during the time the developers remember them... afterwards it is a nightmare

  - 10 - Use domain names
      -- Remember that the peaple that are going to ready your code are programmers, they understand the logic

  - 11 - Add meaningful context
      -- The reader must understand what it does by naming and not comments



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