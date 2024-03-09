//Reena Saromines
//rsaromines2

#ifndef CRAPSGAME_H
#define CRAPSGAME_H

#include <string>
#include "Logger.h"
#include "MoneyCenter.h"
#include "Dice.h"

#include "PlayerData.h" 

class CrapsGame {
private:
    bool won{ false };  // If the player won the round
    bool pointRound{ false };  // True if the player is in the point round
    int point{ 2 };  // The point value that has to be matched in the point round
    std::string rules;  // The rules of C++ Craps
    std::string result;  // The result of the dice roll – win, lose or play point
    Logger log;   // Logger object, handles the log file
    MoneyCenter bank;    // Manages the player’s money
    Dice dice;  // Handles getting the roll of the dice
    PlayerData data; // A struct that contains the player’s data

    void PlayerWins();  // A utility method
    void PlayerLoses(); // Another utility method

public:
    CrapsGame();  // Create the rules string here.

    // Setters or mutators change the values of the class variables
    bool SetBet(double bet);
    void SetName(std::string name);


    // Get methods do not do any calculations - they return a value
    std::string GetRules();
    std::string GetSummary();
    std::string GetName();
    int GetBalance();
    bool GetPoint();
    bool IsTheLogOpen();
    std::tuple<int, int> GetTheDice();

    // Class methods
    void ThrowTheDice();
    std::string MakeYourPlay();  // Roll the dice, and what happens?
    std::string PlayPointRound();  // Play the point round to win/lose
    void ResetGame();
    void GameOver(); // Finish the log file and close it.
};

#endif // CRAPSGAME_H