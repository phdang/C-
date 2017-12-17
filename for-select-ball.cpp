#include <iostream>
#include <string>
using namespace std;

int main()

{



  int counter = 0;


  for (int i = 0; i < 601; i++)

  {

 	 for (int j = 0; j < 601; j++)
	
	{

		 if (i+j>=300 || i+j<=900 ) 
	
		{	
		
 			 for (int k = 0; k < 601; k++)
		
			{
     				 if(i+j+k == 900)
		
     				 {

     				    // Increment a counter
					counter++;


     				 }
			

	
	
			}
		}
	}
  }

  cout << "The number of ways to select ball is "\

       << counter << "\n";
  cout << "Thank you. Have a great day !" << endl;
  return 0;
}
