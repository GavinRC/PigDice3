#ifndef PIGDICE_PDGAME_H
#define PIGDICE_PDGAME_H
#include "Turn.h"

class PDGame {
protected:
    Turn m_myTurn;
    bool m_gameOver;
    int m_gameScore;

public:
    PDGame();
    int getGameScore() const;
    void playGame();
private:
    static void displayRules();
};


#endif //PIGDICE_PDGAME_H
