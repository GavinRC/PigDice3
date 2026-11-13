#ifndef PIGDICE3_MULTIPLAYER_H
#define PIGDICE3_MULTIPLAYER_H
#include <vector>
#include "PDGameV2.h"
class MultiPlayer {

private:
    std::vector<PDGameV2> m_players;
    bool m_gameOver;

public:
    MultiPlayer(int numPlayers);
    void mpPlayGame();

private:
    void checkForWinner();
    void displayScoreboard();

};

#endif //PIGDICE3_MULTIPLAYER_H
