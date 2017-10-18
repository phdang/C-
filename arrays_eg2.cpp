#include <iostream>
#include <array>
#include <string>
using namespace std;
const int CAPACITY = 5;
int main()
{

//string colors[] = {"red","orange","yellow","green","blue","purple"};
 //for(int i=0;i!=6;i++)
 //{

  // cout << "Color: " << colors [i] << endl;;

// }
string colors[CAPACITY];
int i = 0;
int numOfElements = 0;
string input;

cout << "Please type in the colors you want (-1 to stop): ";
cin >> input;

while ((input !="-1") && (i<CAPACITY))
 {
   colors[i] = input;
   i++;
   cin >> input;

 }
 for (int j = 0; j < i; j++)
 {
  cout << "Color # " << (j+1) << " " << colors[j] << endl;
 } 
 return 0;
}
