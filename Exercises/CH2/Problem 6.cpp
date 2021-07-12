/*

Problem 6 

On a certain day the British pound was equivalent to $1.487 U.S., the French franc was
$0.172, the German deutschemark was $0.584, and the Japanese yen was $0.00955.
Write a program that allows the user to enter an amount in dollars, and then displays this
value converted to these four other monetary units.

*/
 
#include <iostream> 

using namespace std; 

/* 
1 british pound			=>		1.487 dollars 

---						=>		amountOfmoney dollars 


*/
int main() {

	double amountOfmoney; 


	cout << "Enter the amount of money you want to convert : "; 

	cin >> amountOfmoney; 

	if (amountOfmoney > 0) {
		cout << "In British Pound : " << amountOfmoney * 1.487 << endl
			<< "In French franc : " << amountOfmoney * 0.172 << endl
			<< "In German deutschemark : " << amountOfmoney * 0.584 << endl;

	} 
	else {
	
		cout << "Money can't be negative" ;
	}

	return 0; 
}