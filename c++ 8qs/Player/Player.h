// Player.h
#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
    // Default constructor
    Player();

    // Parameterized constructor
    Player(const std::string& name, int age, const std::string& country);

    // Function to accept data input
    void acceptData();

    // Function to display data
    void display() const;

    // Data members
    std::string name;
    int age;
    std::string country;
};

// Function to sort an array of Player objects by name and age
void sortPlayers(Player players[], int size);

#endif // PLAYER_H
