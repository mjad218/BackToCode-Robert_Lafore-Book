/* 
Problem : 

Assuming there are 7.481 gallons in a cubic foot, write a prgoram that asks the user to 
enter the number of gallons, and then display the equavalent in cubic feet.

*/



#include<iostream> 
#include <string>


using namespace std; 
int main() {


	double numberOfGallons = 0, numberofCubicFeet = 0;
	bool again = false;

	do {
	cout << "Begining the program "; 

	cout << endl; 
	cout << "Please Enter the number of gallons : "; 


	cin >> numberOfGallons;


	/*
	1 cubic foot						=> 7.481 gallons
	numberofCubicFeet of cubic feet		=> numberOfGallons

	numberofCubicFeet = numberOfGallons / 7.481
	*/
	cout << "The number of cubic feet is : "; 

	cout << (numberOfGallons / 7.481) ;

	cout << "  Program Finished ";

	cout << endl << "Type yes to calculate the number of cubic feet again and no to exit :  "; 

	string doItAgain = " ";


	cin >> doItAgain; 

	if (doItAgain == "yes") {

		again = true; 
	
	}

} while(again); 

	return 0; 

}