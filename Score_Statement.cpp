// Score_Statement.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int score = 0;
	cout << "Enter an interger score between 0 - 100." << endl;
	cin >> score;

	if (score >= 90 && score <= 100)
	{
		cout << "Awesome !" << endl;

	}

	if (score >= 80 && score <= 89)
	{
		cout << "Well Done. ! " << endl;

	}

	if (score >= 70 && score <= 79)
	{
		cout << "Average." << endl;

	}


	if (score >= 60 && score <= 69)
	{
		cout << "Bummer." << endl;

	}


	if (score >= 0 && score <= 59)
	{
		cout << "Sad Times" << endl;

	}

	else
	{
		cout << "Invalid score was input. \n";
	}

	string key = "";
	cout << "Press any key and enter to escape." << endl;
	cin >> key;

    return 0;
}

