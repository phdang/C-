// Algorithm.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <string>

using namespace std;
// Creating a program that displays the average scores

int main()
{
	// Get the name of the movie
	string movie = "";
	cout << "What is the name of the movie: \n";
	getline(cin, movie);
	//Get the Metascore
	float metascore = 0;
	cout << "What is the metascore rating for" << movie << "?\n";
	cin >> metascore;

	//Get the Tomatometer score
	float tomatometer = 0;
	cout << "What is the Tomatometer rating for" << movie << "?\n";
	cin >> tomatometer;

	//Calculate the average
	float avg = (float)(metascore + tomatometer) / 2;

	//Rescale average
	float rescaledScore = avg / 10;
	//Display the results of the calculations
	cout << "Our calculated average on a 10 point scale for "
		<< movie << "is " << rescaledScore << ".";
	string see = "";
	cin >> see;
    return 0;
}

