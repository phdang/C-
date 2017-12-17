#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//Function Declaration
int checkLuyThua(long int);

int main() {

   long int number;
   cout << "Number: " ;
   cin >> number;
   // Call function
   int result = checkLuyThua(number); 
   cout << "Return " << result << endl; 
   return 0;
} 
//Function Definition
int checkLuyThua(long int input) {

	int n = 2;
	int checkLuyThua = 0;
	float luyThua;
	while (n <= sqrt(input)) {
		luyThua = log(input)/log(n);
		if (pow(n,luyThua) == input) { //check integer
			checkLuyThua = 1;
			cout << n << " ^ " << luyThua << " = " << input << endl;
			break;
		}	
		n++;
	}	
	return checkLuyThua;
}
