#include <iostream> 
using namespace std;
#include <string>

/*
Create a structure of type date that contains three members: the month, the day of the
month, and the year, all of type int. (Or use day-month-year order if you prefer.) Have
the user enter a date in the format 12/31/2001, store it in a variable of type struct date,
then retrieve the values from the variable and print them out in the same format.
*/


int main() {
	int a, b, c; 
	cout << "Enter a date like dd/mm/yy : ";
	cin >> a >> b >> c ;
	//cout << "\n" << a << "/" << b << "/" << c << "\n";
	// not working 


	cout << b;
	return 0;
}