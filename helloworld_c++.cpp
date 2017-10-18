#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{ 
  ifstream file;
  string word;
  file.open("hello.txt");
  while (file >> word)
    {
      cout << word << " " ;
    }
  cout << endl;
  cout << "Hello World! I'm Dang." << endl;
 
  return 0;
}
