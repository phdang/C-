#include <iostream>
#include <array>
using namespace std;

void printArray(double [], int);


int main()
{

  //  double rainfall[5];
  
  array<double,5> rainfall;
 
  rainfall[0] = 2.3;
 
  rainfall[1]=0.3;
 
  rainfall[2]=0.0;
 
  rainfall[3]=4.1;
 
  rainfall[4]=0.5;
  
  printArray(rainfall, 5);

  for(int i = 0; i < rainfall.size(); i++)
  {

    cout << rainfall[i] << endl;
  }

  return 0;
}

void printArray(double array[], int size)
{

for(int i=0; i< size; i++)
  {

    cout << array[i] << endl;

  }

}
