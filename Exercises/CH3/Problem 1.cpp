#include <iostream> 
#include <conio.h>
#include <iomanip>
using namespace std;
/*
Assume that you want to generate a table of multiples of any given number. Write a pro-
gram that allows the user to enter the number and then generates the table, formatting it
into 10 columns and 20 lines.
	   7      14      21      28      35      42      49      56      63      70
	  77      84      91      98     105     112     119     126     133     140
	 147     154     161     168     175     182     189     196     203     210
	 217     224     231     238     245     252     259     266     273     280
	 287     294     301     308     315     322     329     336     343     350

*/


int main() {

	int a = 0;
	cout << "Enter a number " << endl; 
	cin >> a; 
	int i = 1;
	for (i = 1 ; i <= 200 ; i++) {
	
		cout << setw(8) << (a * i) ;

		!(i % 10) ? cout << endl : cout << ""; 
		
	
	}


	cin.get();
	return 0;
}