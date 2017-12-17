#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//Function Declaration
int checkChinhPhuong(long int);

int main() {

   long int number;
   cout << "Number: " ;
   cin >> number;
   // Call function
   int result = checkChinhPhuong(number); 
   cout << "Return " << result << endl; 
   return 0;
} 
//Function Definition
int checkChinhPhuong(long int input) {

	long int n = 2;
	int checkChinhPhuong = 0;
	long int soLuyThua2;
	float luyThua;
	while (n <= sqrt(input)) {
		luyThua = log(input)/log(n);
		if ((pow(n,luyThua) == input) && (luyThua >= 2) && (int(luyThua) % 2 == 0)) { //check integer
			soLuyThua2 = pow(n,(luyThua/2));
			checkChinhPhuong = 1;
			cout << soLuyThua2 << "^2 = " << input << endl; 
			break;
		}	
		n++;
	}	
	return checkChinhPhuong;
}
