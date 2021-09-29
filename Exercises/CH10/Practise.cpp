#include <iostream> 

using namespace std; 


int main() {
	int a = 10 , b = 0; 

	cout << &a << endl << &b << endl ; 
	
	int* ptr; 

	ptr = &a;
	cout << ptr << endl;

	//cout << ptr << endl << *ptr << endl ; 
	ptr = &b; 

	cout << ptr << endl; 


	ptr += 1; 

	cout << *ptr << endl;
	cout << *(ptr + 10 ) << endl;
	return 0;
}