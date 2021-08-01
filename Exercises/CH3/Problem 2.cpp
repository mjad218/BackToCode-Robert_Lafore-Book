#include <iostream> 
#include <conio.h>
#include <iomanip>
using namespace std;
/*

Write a temperature-conversion program that gives the user the option of converting
Fahrenheit to Celsius or Celsius to Fahrenheit. Then carry out the conversion. Use
floating-point numbers.

*/


int main() {


	char calculateAgain = 'n'; 
	do {
		int process = 0;
		cout << "1 to convert Fahrenheit to Celcius,\n2 to convert Celcius to Fahrenheit\n Enter your choice 1/2: ";
		cin >> process;
		double temperature, converted;

		if (process == 1) {
			cout << "Enter the temperature in Fahrenheit : ";
			cin >> temperature;
			// (32F - 32) * 5/9 = 0C
			converted = (temperature - 32) * 5 / 9;

			cout << "In celsius that is : " << converted;
		}
		else
		{
			cout << "Enter the temperature in celsius : ";
			cin >> temperature;
			// (32F - 32) * 5/9 = 0C
			// F -32 = 9/5 * C 
			// F = 32 + 9/5 * C
			converted = 32 + temperature *9/ 5;

			cout << "In Fahrenheit that is : " << converted;


		}
		cout << "\nEnter y to calculate again : "; 
		cin >> calculateAgain;

	} while (calculateAgain == 'y'); 



	cin.get();
	return 0;
}