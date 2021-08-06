#include <iostream> 
using namespace std; 

/*
A phone number, such as (212) 767-8900, can be thought of as having three parts: the
area code (212), the exchange (767), and the number (8900). Write a program that uses a
structure to store these three parts of a phone number separately. Call the structure
phone . Create two structure variables of type phone . Initialize one, and have the user
input a number for the other one. Then display both numbers.
*/

struct Phone {
	int code; 
	int exchange; 
	int number; 

};

void printPhone(Phone phone) {
	cout << "(" << phone.code << ")" << " " << phone.exchange << "-" << phone.number << "\n"; 
} 

int main() {
	Phone phone1 = {212, 767, 8900};

	Phone phone2; 
	cout << "Enter your area code, exchange, and number : ";
	cin >> phone2.code >> phone2.exchange >> phone2.number; 

	cout << "My number is "; 
	printPhone(phone1) ; 
	cout << "your number is ";
	printPhone(phone2);

	return 0; 
}