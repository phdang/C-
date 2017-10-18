#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  ofstream file;
  file.open("sample.txt");
  file << "Hello World !\n" << "I'm Dang.\nPleased to meet everyone !" << endl;
  file.close();
  cout << "File written successfully!" << endl;
  return 0;

}

