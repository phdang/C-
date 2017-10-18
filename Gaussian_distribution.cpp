#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int seed = pow(10,8);
int main ()
{
 srand(time(0));
 cout.precision(5);
 int countSum = 0;
 const int N = 50;
 int count[50];
 double prob[50], countProb ;
 int countBegin =0;
 int countEnd = 0;
 for (int i = 0; i<N;i++)
 {
   count[i] = 0;
   prob[i] = 0;

 }
 int numberEvent = 0;	  
 while (numberEvent != seed)
 {
   double x = N*((rand()%1000001)*pow(10,-6))+1 ;
   int y = int(x);
   count[y-1]+=1;
   if (count[y-1]<0)
   {
     break;
   }
   numberEvent = 0;
   for(int i=0; i < N;i++)
   {   
     numberEvent += count[i];
   }  
  if (numberEvent < 0)
  {
    break;
  }
 }
 int k =0;
  while (k !=N)
 {
   countBegin =0;
   countEnd = 0;
   if (k<N/2+1)
   {
    for(int i = 0;i!=k+1;i++)
    {
      countBegin += count[i]; 
    }
   }
   else
   {
    for(int i = N/2+1; i!=k+1; i++)
    {
      countEnd += count[i];
    }
   } 
    cout << countBegin << " & " << countEnd << endl;
   if (k<N/2+1)
   {
     prob[k]= (double)countBegin/seed;
   }
   else
   {
     prob[N-1-(k-N/2-1)]= (double)countEnd/seed;
   }
   k += 1;
 }
 for (int j = 0; j<N;j++)
 {
   cout << "Count " << j+1 << " : " << count[j] << endl;
   cout << "Probability " << j+1 << ": " << scientific << prob[j] << endl;
   countSum += count[j];
 }
 countProb = prob[N/2]+prob[N/2+1];
 cout << countSum << " & " << countProb << endl; 
 for (int j = 0; j<N;j++)
 {
  cout << prob[j] << endl;
 }
 return 0;

}

