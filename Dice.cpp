#include "Dice.h"

Dice::Dice()
{
	//Consturctor initializes the random engine.
	// and seed
	engine.seed(chrono::system_clock::now().time_since_epoch().count());

}

void Dice::ThrowDice()
{
	//Rolling two dice and calculating their value
	//using uniform int distribution to generate random data type from 1 and 6
	// inthttps://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution

	uniform_int_distribution<int> randomNumber(1, 6);

	dice1 =randomNumber (engine);
	dice2 = randomNumber(engine);
	diceValue = dice1 + dice2;
}

tuple<int, int> Dice::GetDice()
{
	//returning the value of the two dice
	//as a tuple
	auto values = make_tuple(dice1, dice2);
	return values;
}

//int Dice::GetValue()
//{
	//Returns the calculated dice value(The Sum ot the two dice	//
	//return diceValue;
//}
