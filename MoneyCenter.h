//Alexis Barraza abarraza24@cnm.edu
//C++ Part 2
//Ivonne Nelson
//Program 7 Group Project Craps Game
#include <iostream>
#include <random>
#include <tuple>
#include <string>
using namespace std;
class MoneyCenter
{
private:
	int bet{ 0 };
	static int balance;

public:
	MoneyCenter(); //constructor, calls, WriteLog() method

	void SetInitialBalance(int dollars); //sets Class Variables to 200

	bool SetBet(int bet); //sets the bet into class variable and checks to see if the bet
	                      //amount is in range. Returns a true bet in range false if not

	void UpdateBalance(bool didWin); //adds or subtracts the bet to/from the balance

	int GetBalance();//returns balance

	string WriteLog();//creates a string for the logger class
};

