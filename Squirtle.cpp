// Squirtle.cpp
#include <iostream>
#include "Squirtle.h"

// Default constructor
Squirtle::Squirtle() : Pokemon() {
    moves = { "Tackle", "Water Gun" };
    cout << "Default Constructor (Squirtle)\n";
}

// Overloaded constructor
Squirtle::Squirtle(string name, int hp, int att, int def, vector<string> type, vector<string> moves)
    : Pokemon(name, hp, att, def,type), moves(moves) {
    cout << "Overloaded Default Constructor (Squirtle)\n";
}

// Speak method override
void Squirtle::speak() {
    cout << "Squirtle-squirtle\n";
}

// PrintStats method override
void Squirtle::printStats() {
    // Call the base class's printStats method to print common stats
    Pokemon::printStats();

    // Print Squirtle-specific information
    cout << "Type: Water\n";  // Updated to print "Type: Water"
    cout << "Moves: ";
    for (const string& move : moves) {
        cout << move << "\t";
    }
    cout << endl;
}

