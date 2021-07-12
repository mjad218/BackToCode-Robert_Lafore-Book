/*
Write a program that generates the following table :

1990		135
1191	   7290
1992	  11300
1993	  16200

Use a single cout statement

*/

#include <iostream> 
#include <string>
#include <iomanip>


using namespace std;

void myCout(string year, string num) {

	cout << setw(4) << year << "\t" << setw(5) << num << endl;
}

int main() {

	 myCout("1990", "135");
	 myCout("1191", "7290");
	 myCout("1992", "11300");
	 myCout("1993", "16200");


	return 0;
}


