#include <iostream> 
using namespace std;
#include <string>

/*
Create a structure of type date that contains three members: the month, the day of the
month, and the year, all of type int. (Or use day-month-year order if you prefer.) Have
the user enter a date in the format 12/31/2001, store it in a variable of type struct date,
then retrieve the values from the variable and print them out in the same format.
*/

struct Date {
	int dd, mm, yy;
};

Date dateEncode(string date) {

	string dd, mm, yy;
	int index = 0, old = 0;

	index = date.find('/');
	dd = date.substr(0, index);

	old = index; 

	index = date.find('/', index + 1);

	mm = date.substr(old + 1, index - old);

	old = index; 
	index = date.find('/', index + 1);

	yy = date.substr(old + 1 );

	return { stoi(dd) ,stoi(mm)  ,stoi(yy)  };
}

void printDate(Date date) {

	cout << date.dd << "/" << date.mm << "/" << date.yy << "\n"; 
}

int main() {

	string stringDate ;

	cout << "Enter a date like dd/mm/yy : ";
	cin >> stringDate;
	 
	Date date = dateEncode(stringDate); 

	printDate(date);

	return 0;
}