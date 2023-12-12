// Squirtle.h
#ifndef SQUIRTLE_H
#define SQUIRTLE_H

#include "Pokemon.h"

class Squirtle : public Pokemon {
public:
    // Constructors
    Squirtle(); // Default constructor
    Squirtle(string name, int hp, int att, int def, vector<string> type, vector<string> moves); // Overloaded constructor

    // Overridden methods from the base class
    void speak() override; // Override the speak method
    void printStats() override; // Override the printStats method

private:
    vector<string> moves; // Additional attribute specific to Squirtle
};

#endif

