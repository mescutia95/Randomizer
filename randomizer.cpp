#include <randomizer.h>

Randomizer::Randomizer ()
{
    srand (time(NULL));
}

static Randomizer::Randomizer* getInstance()
{
     if(instance == 0)
    {
        instance = new Randomizer();
    }
    return instance;
}

unsigned int Randomizer::randomBetween(unsigned int minimum, unsigned int maximum)
{
    return (rand() % maximum + minimum);
}