//Alexis Barraza abarraza24@cnm.edu
//C++ Part 2
//Ivonne Nelson
//Program 7 Group Project Craps Game
#include <fstream>
#include <string>
#include <chrono>
#include<ctime>
#include <iomanip>
#include <sstream>
using namespace std;
class Logger
{
private:
	string PlayerName; //to personalize the log
	string filename; // the file to be written
	string timeRightNow;// string to give current time
	string dateTimeStamp;// string giving the current date and time
	bool bLogOpen{ true }; // bool to show if log was opened.
	
	ofstream output; //output stream belongs to the class and is used 
					//several times.
	void FileName(); // method that creates the filename
	void Time();//method that gets the current time and converts to string
public:
	Logger();//defualt constructor

	explicit Logger(string name);// overloaded constructor

	void StartLog(double initialBalance); //writes string with inirial balance

	void WriteLog(string s); //writes each transaction into log

	void CloseLog(string s); // writes the summary and closes file

	bool IsLogOpen() { return bLogOpen; } // to check from the Form
	
};

