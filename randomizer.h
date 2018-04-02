#ifndef _RANDOMIZER_H_
#define _RANDOMIZER_H_
#include <ctime> // For time()
#include <cstdlib> // For srand() and rand()

class Randomizer
{
  private:
    static Randomizer * instance;
  public:
    Randomizer();
    unsigned int randomBetween(unsigned int minimum, unsigned int maximum);
    static Randomizer* getInstance();
};

#endif