#include <iostream>
#include <string>
using namespace std;

/*
Create a class called employee that contains a name (an object of class string) and an
employee number (type long). Include a member function called getdata() to get data
from the user for insertion into the object, and another function called putdata() to
display the data. Assume the name has no embedded blanks.
Write a main() program to exercise this class. It should create an array of type employee,
and then invite the user to input data for up to 100 employees. Finally, it should print out
the data for all the employees
*/
class Employee {
	
	string name;
	long number; 

public : 
	void getData() {
		cout << "Enter Employee Name : "; 
		cin >> name; 
		cout << "Enter Employee Number : "; 
		cin >> number; 
	}

	void putData() {
	
		cout << "Employee name is " << name << ", and his number is " << number; 
	}

};
int main() {

	const int MAX = 100; 

	Employee employees[MAX];

	for (int i = 0; i < MAX; i++ ) {
		employees[i].getData(); 

		cout << "You entered an employee :) " << endl; 
		employees[i].putData(); 
		cout << endl;
	}

	return 0;
}