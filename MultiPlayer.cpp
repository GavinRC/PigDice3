#include "MultiPlayer.h"
#include <iostream>

MultiPlayer::MultiPlayer(int numPlayers) {
    m_gameOver = false;
    int numberOfAnonymousPlayers = 0;
    for (int i = 1; i <= numPlayers; i++) {
        std::string playerName;
        std::cout << "Enter player " << i << "'s name: ";
        std::getline(std::cin, playerName);
        if (playerName.empty()) {
            numberOfAnonymousPlayers++;
            playerName = "Anonymous Player " + std::to_string(numberOfAnonymousPlayers);
        }
        PDGameV2 player(playerName);
        m_players.push_back(player);
    }

    m_players[1].displayRules();
}

void MultiPlayer::mpPlayGame() {
    while (!m_gameOver) {
        for (auto& player : m_players) {
            player.playGame();
            displayScoreboard();
        }
        checkForWinner();
    }
}

void MultiPlayer::displayScoreboard() {
    for (auto& player : m_players) {
        std::cout << player.getPlayerName() << " (Score:" << player.getGameScore() << ") | ";
    }
    std::cout << "\n" << std::endl;
}

void MultiPlayer::checkForWinner() {
    const PDGameV2* winner = nullptr;
    for (const auto& player : m_players) {
        if (player.getGameScore() >= 50 &&
            (winner == nullptr || player.getGameScore() > winner->getGameScore())) {
            winner = &player;
            }
    }
    if (winner != nullptr) {
        std::cout << "Congratulations! " << winner->getPlayerName()
                  << " you win with a score of " << winner->getGameScore() << std::endl;
        m_gameOver = true;
    }
}