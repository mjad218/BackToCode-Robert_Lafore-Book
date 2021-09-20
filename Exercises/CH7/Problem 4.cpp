#include <iostream> 

/*
Start with a program that allows the user to input a number of integers, and then stores
them in an int array. Write a function called maxint() that goes through the array,
element by element, looking for the largest one. The function should take as arguments
the address of the array and the number of elements in it, and return the index number of
the largest element. The program should call this function and then display the largest
element and its index number. (See the SALES program in this chapter.)


*/
using namespace std;

int findMax(int arr[], int arrSize) {

	int max = 0; 
	int index = 0;
	for (int i = 0; i < arrSize; i++) {
		/*
		cout << i << endl; 

		*/
		if (arr[i] > max) {
			max = arr[i];
			index = i;
		}
	
	}

	return index;
}
int main() {

	const int LIMIT = 1000; 
	int SIZE; 
	int numbers[LIMIT] ; 

	cout << "Enter the size of the array : "; 
	cin >> SIZE; 

	for (int i = 0; i < SIZE; i++ ) {
		
		if( i > 0) {
			cout << "Enter another number : ";
			cin >> numbers[i];

			/*
			
			cout << "want to add more numbers enter Y or N to cancel : "; 
			
			char str = 'N'; 
			cin >> str; 

			if (toupper(str) == 'N') 
				break; 
			*/


		}
		else {
		
			cout << "Enter a number : ";
			cin >> numbers[i];
		}
	}
	int index = findMax(numbers, SIZE); 
	cout << "Max int is at index : " << index << " and equals : " << numbers[index];


	return 0; 
}