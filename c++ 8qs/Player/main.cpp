#include <iostream>
#include "Player.h"
using namespace std;

int main() {
    const int size = 5;
    Player players[size];

    // Accept data for each player
    for (int i = 0; i < size; i++) {
        cout << "Enter details for player " << (i + 1) << endl;
        players[i].acceptData();
    }

    // Sort the players
    sortPlayers(players, size);

    // Display the sorted list of players
    cout << "Sorted list of players:" << endl;
    for (int i = 0; i < size; i++) {
        players[i].display();
    }

    return 0;
}
