#include <iostream>
#include <limits>
#include "MultiPlayer.h"

int main() {
    int numPlayers = 0;
    std::cout << "How many people are playing? ";
    std::cin >> numPlayers;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // clear the Enter key

    MultiPlayer game(numPlayers);
    game.mpPlayGame();
    return 0;
}