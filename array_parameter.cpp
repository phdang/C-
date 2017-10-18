#include <iostream>

using namespace std;

// Constants

const int CAPACITY = 39;

// Function Declarations

void fillArray(int[], int&);
void printArray(const int[], int);
//print array
//@param const int[] - scores of students
// @param int - number of students

int main()

{

 int scores[CAPACITY];
 int numofElements = 0;

 fillArray(scores, numofElements);
 printArray(scores, numofElements);
 
 cout << endl; 

 return 0;

}

// Function Definition

void fillArray(int newScores[], int& numofElements)
{
 int i = 0;
 int score;
 cout << "Type in scores of students (-1 to stop): ";
 cin >> score;

 while ((score != -1) && (i < CAPACITY))
 {
  numofElements++;
  newScores[i] = score;
  i++;
  cin >> score;
 }
 
}
void printArray(const int newScores[], int numofElements)
{
 cout << "Scores: ";
 for (int i =0; i < numofElements; i++)
 {
   cout << newScores[i] << " ";

 }
}
