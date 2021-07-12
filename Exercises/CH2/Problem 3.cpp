
/* 

Problem Three 


Write a program that generates the following output 

	10 
	20
	19 

	Use an integer contant for the 10, an arithmetic assignment operator to generate the 20, and a decrement operator to generate the 19 


*/

#include <iostream>
#include <iomanip>
using namespace std; 


int main() {


	int myNum = 10; 

	cout << myNum << endl; 
	myNum += 10 ; 

	cout << myNum << endl; 

	cout << --myNum; 


	return 0; 
}