// Including Library

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

// Function's Declaration

long double area(int);
void PrintArea(int,int);

// Main Function

int main()
{
   int iTeration, eVent;
   cout << "Number of iterations (10^ ): " ;
   cin >> iTeration; 
   cout << "Number of events (seeds) (10^ ): ";
   cin >> eVent;
   cout << "Wait a minute !" << endl; 
   PrintArea(iTeration,eVent);
   return 0;

} 

// Function's Definition

long double area(int seed)

{

   srand(time(0));
   long double x ;
   long double y ;
   cout.precision(50);
   int count=0;
   int countCheck = 0;
   for (int i=0; i<seed;i++)
   {
     x = 3*((double) rand() / (RAND_MAX))+2;
     y = ((double) rand() / (RAND_MAX)) ;
     if (pow((x-5),2)+pow((y-5),2)>25)
     {
       count++;
     }
     if (x<0 || y <0)
     {
       cout << x << " & " << y << endl;
     }
   }
   long double AreaofTriangle = 3*count*pow(seed,-1);
   return (long double)99 - AreaofTriangle - M_PI*25; 

}

void PrintArea(int iter, int event)

{
   int Niter = pow(10,iter);
   double blackRegion[Niter];
   double SumBlackRegion = 0;
   for (int i = 0; i<Niter;i++)
   {
     blackRegion[i] = (double)area(pow(10,event));
     SumBlackRegion += blackRegion[i];
   }
   cout << "Area of black region = " << (double)SumBlackRegion/Niter << " (cm^2)" << endl;

}
