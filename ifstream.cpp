#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  ifstream file;
  file.open("list.txt");

  //check for errors

  if (file.fail())
    {
      cerr << "Error opening file" << endl;
      exit(1);
    }
  //  int x, y;
  // file >>  x >> y;
  // cout << "Number 1: " << x << endl;
  // cout << "Number 2: " << y << endl;
  string item;
  int count = 0;
  while(!file.eof())
    {
      file >> item;
     
      if (item ==  "orange")

	{

	  count++;

	}
    }
  file.close();
  cout << count << " instance(s) of Orange found!" << endl;
    return 0;

}
