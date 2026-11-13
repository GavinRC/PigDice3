#ifndef PIGDICE_PDGAMEV2_H
#define PIGDICE_PDGAMEV2_H
#include <string>

#include "PDGame.h"


class PDGameV2 : public PDGame {
    std::string m_playerName;
public:
    PDGameV2(std::string playerName);
    std::string getPlayerName() const;

    void playGame();

    void displayRules();
};


#endif //PIGDICE_PDGAMEV2_H
