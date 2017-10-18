#include <iostream>
#include <string>

using namespace std;
string name = "";
int main()
{
  cout << "What's your name ?\n";
  getline(cin,name);
  cout << "Hello " << name << "! Pleased to meet you !" << endl << \
  "Have great nice day !" << endl;
  return 0;
}
