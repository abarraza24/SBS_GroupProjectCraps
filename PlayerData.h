//Reena Saromines

#ifndef PLAYER_DATA_H
#define PLAYER_DATA_H

#include <string>
using namespace std;

struct PlayerData {

private:
	string name;
	int numberLost{ 0 };
	int numberWon{ 0 };


public:
	void SetData(string name) { this->name = name; }
	void IncrementNumberWon() { numberWon++; }
	void IncrementNumberLost() { numberLost++; }
	string GetName() { return name; }
	int GetNumberWon() { return numberWon; }
	int GetNumberLost() { return numberLost; }




};





#endif // !PLAYER_DATA_H
