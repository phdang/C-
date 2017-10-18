// Statement_problem.cpp : Defines the entry point for the console application.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Get the seed color
	string seedColor = "";
	cout << "Enter the seed color (red or blue): \n";
	cin >> seedColor;

	if (seedColor != "red" && seedColor != "blue")
	{
		//Terminate program
		cout << "Invalid color selected. Program will terminate. \n";

		//See output and escape. Thank you !
		cout << "Hit any key and enter to escape. Thank you ! \n";
		string key = "";
		cin >> key;

		return 0;
	}

	// Get Temperature
	int temp = 0;
	cout << "Enter the temperature (F): \n";
	cin >> temp;

	// define variable soil
	string soilMoisture = "";

	// If red seed
	if (seedColor == "red")
	{
		//If temp >= 75

		if (temp >= 75)
		{
			//Get the soil moisture
			cout << "Enter the soil moisture (wet or dry): \n";
			cin >> soilMoisture;

			if (soilMoisture != "wet" && soilMoisture != "dry")
			{
				//Terminate program
				cout << "Invalid soil was selected. Program will terminate. \n";

				//See output and escape. Thank you !
				cout << "Hit any key and enter to escape. Thank you ! \n";
				string key = "";
				cin >> key;

				return 0;
			}

			//If the soil is wet
			if (soilMoisture == "wet")
			{
				// Output sunflower
				cout << "A sunflower will grow. \n";
			}
			//If the soil is dry
			if (soilMoisture == "dry")
			{
				// Output dandelion
				cout << "A dandelion will grow. \n";
			}
		}
		//Otherwise
		else
		{
			// Output mushroom
			cout << "A mushroom will grow. \n";
		}
		
	}
	// If blue seed
	if (seedColor == "blue")
	{
		//If the temp is between 60 and 70
		if (temp >= 60 && temp <= 70)
		{
			//Get the soil moisture
			cout << "Enter the soil moisture (wet or dry): \n";
			cin >> soilMoisture;

			if (soilMoisture != "wet" && soilMoisture != "dry")
			{
				//Terminate program
				cout << "Invalid soil was selected. Program will terminate. \n";

				//See output and escape. Thank you !
				cout << "Hit any key and enter to escape. Thank you ! \n";
				string key = "";
				cin >> key;

				return 0;
			}

			//If the soil is wet
			if (soilMoisture == "dry")
			{
				// Output dandelion
				cout << "A dandelion will grow. \n";
			}
			//If the soil is dry
			if (soilMoisture == "wet")
			{
				// Output sunflower
				cout << "A sunflower will grow. \n";
			}
		}
		else
		{
			// Output mushroom
			cout << "A mushroom will grow. \n";
		
		}
	}
	//See output and escape. Thank you !
	cout << "Hit any key and enter to escape. Thank you ! \n";
	string key = "";
	cin >> key;

    return 0;
}
