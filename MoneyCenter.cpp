//Alexis Barraza abarraza24@cnm.edu
//C++ Part 2
//Ivonne Nelson
//Program 7 Group Project Craps Game
#include "MoneyCenter.h"

int MoneyCenter::balance = 200;

MoneyCenter::MoneyCenter()
{
	//Constructor
	//Calls the WriteBeginFile Method
	//WriteBeginFile();
	
	WriteLog();

}

void MoneyCenter::SetInitialBalance(int dollars)
{
	//Set's the initial balance 200
	balance = dollars;
}

bool MoneyCenter::SetBet(int bet)
{
	//Set the current bet
	// check if it's within a valid range
	//if statment or a looP?
	if (bet > 0 && bet <= balance)
	{
		this->bet = bet;
		return true; //bet is valid
	}

	return false; //bet is invalid
}

void MoneyCenter::UpdateBalance(bool didWin)
{
	//Updates the players balance based on the game's outcome
	//use If(didWin) 
	//Add the bet amount to the balance
	//else subtract the bet amount from the balance
	if (didWin)
	{
		balance += bet; //Adding bet to the balance
	}
	else
	{
		balance -= bet; //subtracts the bet amount from the balance
	}
}

int MoneyCenter::GetBalance()
{
	//Gets the correct balace 
	return balance;
}

string MoneyCenter::WriteLog()
{
	//Create a string stream for the logger to log transactions
	string logEntry = "Bet: " + to_string(bet) + ", Balance: " + to_string(balance);
	return logEntry;
}
