#include <iostream>
#include <string>
#include <cmath>
using namespace std;

const double PI = 3.14159;

int getPosInt(string msg)
{

  int num = 0;

  do

  {

    cout << msg << endl;

    cin >> num;

  }while(num <= 0);

  return num;

}

double areaofCircle(int r)

{

  return PI * pow(r,2);

}

double volofSphere(int r)

{

  return 4/3.0 * PI * pow(r,3);

}

int main()

{

  int radius = getPosInt("Enter a positive integer for the radius of a circle/sphere: ");

  double aCircle = areaofCircle(radius);

  double vSphere = volofSphere(radius);

  cout << "The area of a circle that has a radius of " << radius << " is " << aCircle << "." << endl;

  cout << "The volume of a sphere that has a radius of " << radius << " is " << vSphere << "." << endl;

  return 0;

}
