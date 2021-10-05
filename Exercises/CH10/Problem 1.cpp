#include <iostream> 

using namespace std; 
/* 
Write a program that reads a group of numbers from the user and places them in an array
of type float. Once the numbers are stored in the array, the program should average
them and print the result. Use pointer notation wherever possible.

*/

float arrAverage(float arr[]) {
	float average = 0; 
	for (int i = 0; i < sizeof(arr); i++) {
		average += *(arr + i); 
	}
	return average / sizeof(arr); 
}

int main() {
	const int MAX = 5;
	float arr[MAX];
	float* ptr = arr; 

	for (int i = 0; i < MAX; i++) {
		cout << "Enter a number for the array : "; 
		cin >> *(arr + i); 
	}

	cout << "The average is : " << arrAverage(arr) << endl ; 
	return 0; 
}