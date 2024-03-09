//Alexis Barraza abarraza24@cnm.edu
//C++ Part 2
//Ivonne Nelson
//Program 7 Group Project Craps Game
#include "Logger.h"

void Logger::FileName()
{
	//Log_11_3_2023_09.46.30
	//we want today and now for the time, if we use it.
	auto now = std::chrono::system_clock::now();
	auto in_time_t = std::chrono::system_clock::to_time_t(now);

	struct tm OSTime;
    stringstream ss;
	localtime_s(&OSTime, &in_time_t);
	ss << put_time(&OSTime, "%m-%d-%Y_%I.%M.%S");
	dateTimeStamp = ss.str();

	filename = "Log_" + dateTimeStamp + ".txt";
	

}

void Logger::Time()
{
	auto now = std::chrono::system_clock::now();
	auto in_time_t = std::chrono::system_clock::to_time_t(now);

	struct tm OSTime;
	stringstream ss;
	localtime_s(&OSTime, &in_time_t);
	ss << put_time(&OSTime, "%X");
	timeRightNow = ss.str();
}

Logger::Logger() :Logger("") //delegate
{
}

Logger::Logger(string name):PlayerName{name} //initialize
{
	//calling FileName
	FileName(); //create an output file name
	Time();     //Get the time right now 
	//open the log file. 
	output.open(filename.c_str());
	//check if that file was opened
	if (!output.is_open())
	{
		//if not, bLogOpen = false;
		bLogOpen = false;
	}
	//else
	else
	{
		//bLogOpen = true
		bLogOpen = true;
	}
	//write in the file:
	// write Name, program name, say hello to the player and call them by name
	//Tell them that this is the log of your Craps Game.
	output << "Welcome, " << PlayerName << "! This is the log of your Craps Game. " << endl;

}

void Logger::StartLog(double initialBalance) //this is for the MoneyCenter to write the
                                             //initial balance
{
	//checking if the log file is open
	if (!output.is_open())
	{
		bLogOpen = false;
		return; // Log file is not open, so we cannot start the log.
	}

	//Write an initial entry with the player's name and initial balance
	output << "Session started at: " << dateTimeStamp << " with player: " << PlayerName << endl;
	output << "Initial balance: $" << std::fixed << std::setprecision(2) << initialBalance << endl;

}

void Logger::WriteLog(string s)
{
	//checking if file is open
	if (!output.is_open())
	{
		bLogOpen = false;
		return; // log file is not ope, we cannot write to it
	}
	//call time
	Time();
	//write timeRightNow and then the result of the game 
	output << timeRightNow << " _ " << s << endl;
}

void Logger::CloseLog(string s)
{
	//write the string passed that comes from MoneyCenter
	//close the output file.

	string openfile = "notepad.exe " + filename;
	system(openfile.c_str());

}
