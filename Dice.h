//Alexis Barraza abarraza24@cnm.edu
//C++ Part 2
//Ivonne Nelson
//Program 7 Group Project Craps Game
#include <random>
#include <tuple>
#include <chrono>
using namespace std;
class Dice
{
private:
	int dice1{ 1 }, dice2{ 1 }; // The numbers on each die
	int diceValue{ 2 }; // The value of the two dice together
	default_random_engine engine; // random engine to determine random numners

public:
	Dice(); // Initializes random engine and default

	//Simulates rolling tow dice and calculating their value
	void ThrowDice();

	//returns the values of two dice
	tuple<int, int> GetDice();

	//Returns the calculated dice value(sum of the two dice)
	int GetValue() { return diceValue; }
	
};

