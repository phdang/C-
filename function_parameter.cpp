#include <iostream>
#include <string>

using namespace std;

// Function Declarations
void askUserName(string&);
// askUserName - sets name of user
// @parameter string& - name of user

int askUserScore();
//askUserScore
//@return int - credit score of user

void print(string, int);
//print -print whether user is in good standing
//@param string - name of user
//@param int -credit score of user

int main() 
{
 string name;
 askUserName(name);
 print(name,askUserScore());
 return 0;
}

//Functions Definitions
void askUserName(string& newName)
{
 cout << "Enter your name: ";
 getline(cin,newName);
 cout << endl;

}
int askUserScore()
{
 int score;
 cout << "Enter credit score:: ";
 cin >> score;
 cout << endl;
 return score;
}
void print(string newName, int newScore)
{
 if(newScore >=740)
 {
   cout << newName <<  " is in good standing!" << endl;
 }

 else if(newScore >=600)
 {
   cout << newName <<  " is in questionable standing!" << endl;
 }
 else
 {
   cout << newName << " is are not in good standing!" << endl;
}
}
