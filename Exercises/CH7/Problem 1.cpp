#include <iostream> 


/*
Problem : 
Write a function called reversit() that reverses a C-string (an array of char). Use a for
loop that swaps the first and last characters, then the second and next-to-last characters,
and so on. The string should be passed to reversit() as an argument.
Write a program to exercise reversit(). The program should get a string from the user,
call reversit(), and print out the result. Use an input method that allows embedded
blanks. Test the program with Napoleon’s famous phrase, “Able was I ere I saw Elba.”



*/
using namespace std;


void reverseit(char str[]) {
	const int LIMIT = strlen(str);
	for (int i = 0; i <= LIMIT / 2; i++ ) {
		char temp = str[i];
		str[i] = str[LIMIT - i - 1];
		str[LIMIT - i - 1] = temp;

	}

}
int main() {
	int EXIT = 1;
	while (EXIT) {

		char str[410];
		cout << "PLease Enter some text : ";

		cin.get(str, 410);

		reverseit(str);

		cout << endl << "the reverse : " << str << endl;
		cout << "Enter 0 to exit or 1 to continue : "; 
		cin >> EXIT; 

	}

	return 1;
}