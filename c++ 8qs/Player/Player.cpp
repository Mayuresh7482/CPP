// Player.cpp
#include <iostream>
#include "Player.h"
using namespace std;

// Default constructor
Player::Player() : name(""), age(0), country("") {}

// Parameterized constructor
Player::Player(const string& name, int age, const string& country)
    : name(name), age(age), country(country) {}

// Function to accept data input
void Player::acceptData() {
    cout << "Enter player name: ";
    cin >> name;
    cout << "Enter player age: ";
    cin >> age;
    cout << "Enter player country: ";
    cin >> country;
}

// Function to display data
void Player::display() const {
    cout << "Name: " << name << ", Age: " << age << ", Country: " << country << endl;
}

// Function to sort an array of Player objects by name and age
void sortPlayers(Player players[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (players[j].name > players[j + 1].name ||
                (players[j].name == players[j + 1].name && players[j].age > players[j + 1].age)) {
                Player temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }
}
