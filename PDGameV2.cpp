#include "PDGameV2.h"
#include <iostream>
PDGameV2::PDGameV2(std::string playerName) : PDGame() {
    m_playerName = playerName;
}

std::string PDGameV2::getPlayerName() const {
    return m_playerName;
}

void PDGameV2::playGame() {
    std::cout << m_playerName << " (Score:" << m_gameScore << ") - TURN "
              << m_myTurn.getTurnCount() << std::endl;
    m_myTurn.takeTurn();
    m_gameScore += m_myTurn.getScoreThisTurn();
    m_myTurn.resetTurnOver();
}

void PDGameV2::displayRules() {
    std::cout << "\nLet's Play PIG Dice!\n"
            "\n"
            "* See which player will reach 50 points in the fewest turns.\n"
            "* Turn ends when you hold or roll a 1\n"
            "* If you roll a 1, you lose all points for the turn.\n"
            "* If you hold, you save all points for the turn.\n"
    << std::endl;
}