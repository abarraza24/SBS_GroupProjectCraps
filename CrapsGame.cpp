//Reena Saromines
//rsaromines2@cnm.edu

#include "CrapsGame.h"
#include <string>

// Constructor implementation
CrapsGame::CrapsGame() {
    // Initialize the rules for the Craps game.
    rules = "Welcome to the C++ Craps Game! Here's how to play:\n"
        "1. Start by placing your bet.\n"
        "2. Roll two six-sided dice.\n"
        "3. If your first roll is 7 or 11, you win!\n"
        "4. If your first roll is 2, 3, or 12, that's craps, and you lose.\n"
        "5. Any other number sets the 'point.'\n"
        "6. Keep rolling until you hit your point again for a win, or roll a 7 and lose.";
    // Initialize the MoneyCenter with an initial balance.
    bank.SetInitialBalance(200);
}

// Setters or mutators
bool CrapsGame::SetBet(double bet) {
    return bank.SetBet(static_cast<int>(bet)); // Cast to int if necessary
}

void CrapsGame::SetName(std::string name) {
    data.SetData(name);
    log = Logger(name); // Initialize the logger with the player's name
}

std::string CrapsGame::GetRules()
{
    return rules;
}

std::string CrapsGame::GetSummary()
{
    // Compile a summary of the game's results.
    return "Player " + GetName() + " has won " + std::to_string(data.GetNumberWon()) +
        " times and lost " + std::to_string(data.GetNumberLost()) + " times. Current balance is $" +
        std::to_string(GetBalance()) + ".";
}

std::string CrapsGame::GetName()
{
    return data.GetName();
}

int CrapsGame::GetBalance()
{
    return bank.GetBalance();
}

bool CrapsGame::GetPoint()
{
    return pointRound;
}

bool CrapsGame::IsTheLogOpen()
{
    return log.IsLogOpen();
}

std::tuple<int, int> CrapsGame::GetTheDice()
{
    return dice.GetDice();
}



// Class methods
void CrapsGame::ThrowTheDice() {
    // Roll the dice and update result based on the outcome
    dice.ThrowDice();
    result = "Dice rolled: " + std::to_string(std::get<0>(dice.GetDice())) +
        " and " + std::to_string(std::get<1>(dice.GetDice()));
}

std::string CrapsGame::MakeYourPlay() {
    ThrowTheDice(); // First roll the dice
    int diceValue = dice.GetValue(); // Get the sum of the dice

    if (!pointRound) { // If not already in point round
        if (diceValue == 7 || diceValue == 11) {
            PlayerWins();
            return "You rolled a " + std::to_string(diceValue) + "! You win!";
        }
        else if (diceValue == 2 || diceValue == 3 || diceValue == 12) {
            PlayerLoses();
            return "You rolled a " + std::to_string(diceValue) + ". Craps, you lose!";
        }
        else {
            point = diceValue;
            pointRound = true;
            return "Point is established at " + std::to_string(point) + ". Enter the point round.";
        }
    }
    else {
        // If already in point round, continue to the point round logic
        return PlayPointRound();
    }
}

std::string CrapsGame::PlayPointRound() {
    if (!pointRound) {
        return "Not currently in the point round. Make your initial roll.";
    }

    ThrowTheDice(); // Roll the dice again
    int diceValue = dice.GetValue();

    if (diceValue == point) {
        pointRound = false;
        PlayerWins();
        return "You rolled the point of " + std::to_string(point) + "! You win!";
    }
    else if (diceValue == 7) {
        pointRound = false;
        PlayerLoses();
        return "You rolled a 7. You lose.";
    }
    else {
        return "Roll again. Aim for the point of " + std::to_string(point) + ".";
    }
}

void CrapsGame::ResetGame() {
    // Reset the game to its initial state
    won = false;
    pointRound = false;
    point = 2;
    result.clear(); // Clear the result string
   

    // Log the reset action
    log.WriteLog("Game has been reset.");

}

void CrapsGame::GameOver() {
    // Finalize the game session
    log.CloseLog(GetSummary()); // Write summary and close the log file
}

// Utility methods
void CrapsGame::PlayerWins() {
    won = true;
    pointRound = false; // Exit the point round if it was set
    bank.UpdateBalance(true); // Update the balance for a win
    data.IncrementNumberWon(); // Increment the win count
    log.WriteLog("Player wins!"); // Log the win
}

void CrapsGame::PlayerLoses() {
    won = false;
    pointRound = false; // Exit the point round if it was set
    bank.UpdateBalance(false); // Update the balance for a loss
    data.IncrementNumberLost(); // Increment the loss count
    log.WriteLog("Player loses."); // Log the loss
}