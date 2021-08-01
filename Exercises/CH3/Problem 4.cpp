#include <iostream> 
#include <conio.h>
#include <iomanip>
using namespace std;

/*
Create the equivalent of a four-function calculator. The program should ask the user to
enter a number, an operator, and another number. (Use floating point.) It should then
carry out the specified arithmetical operation: adding, subtracting, multiplying, or divid-
ing the two numbers. Use a switch statement to select the operation. Finally, display the
result.

*/


int main() {

	char again = 'n'; 
	do {
		cout << "Enter fist number, operation, second number : "; 
		double a = 0 , b = 0; 
		char operation; 
		cin >> a >> operation >> b; 

		//cout << a << operation << b; 

		switch (operation) {
		case '+' : 
			cout << "Answer : " << a + b << endl;
			break;
		case '-' : 
			cout << "Answer : " << a - b << endl;
			break;
		case '*':
			cout << "Answer : " << a * b << endl;
			break;
		case '/':
			if (b == 0) {
				cout << "second number can't be zero " << endl; 
				break;
			}
			else {
				cout << "Answer : " << a / b << endl;
				break;
			}

		}
		cout << "Do another (y/n)? :"; 
		cin >> again;
	
	} while (again == 'y'); 
	cin.get();

	return 0;
}