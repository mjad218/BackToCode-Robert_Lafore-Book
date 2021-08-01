#include <iostream> 
#include <conio.h>
#include <iomanip>
using namespace std;

/*
Operators such as >> , which read input from the keyboard, must be able to convert a
series of digits into a number. Write a program that does the same thing. It should allow
the user to type up to six digits, and then display the resulting number as a type long
integer. The digits should be read individually, as characters, using getche() .
Constructing the number involves multiplying the existing value by 10 and then adding
the new digit. (Hint : substract 48 or '0' to go from ASCII to a numeric digit ) 

*/


int main() {


	long a = 0, b = 0; 

	cout << "Enter a number : ";  


	// b = getche() - 48;

	

	for (int i = 0; ; i++) {


		b = getche();

		if (b == '\r') {
			break;
		}
		else {
			a = a * 10 + b - '0'; 
		}
	}
	cout << "\nThe number is : " << a;

	cin.get(); 
	
	return 0;
}