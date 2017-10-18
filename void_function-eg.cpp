// Score_Statement.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
void printScore(int);
int main()
{
	int score = 0;
	cout << "Enter an interger score between 0 - 100." << endl;
	cin >> score;
	printScore(score);
	//	system( "read -n 1 -s -p \"Press any key to continue...\"" );
    return 0;
}

void printScore(int score)
{

	if (score >= 90 && score <= 100)
	{
		cout << "Awesome !" << endl;

	}

	else if (score >= 80 && score <= 89)
	{
		cout << "Well Done ! " << endl;

	}

	else if (score >= 70 && score <= 79)
	{
		cout << "Average." << endl;

	}


	else if (score >= 60 && score <= 69)
	{
		cout << "Bummer." << endl;

	}


	else if (score >= 0 && score <= 59)
	{
		cout << "Sad Times" << endl;

	}

	else
	{
	  cout << score << " " <<  "Invalid score was input. \n";
	}
		
}
