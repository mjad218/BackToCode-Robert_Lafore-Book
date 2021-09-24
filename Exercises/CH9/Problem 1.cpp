/*
Imagine a publishing company that markets both book and audiocassette versions of its
works. Create a class publication that stores the title (a string) and price (type float)
of a publication. From this class derive two classes: book, which adds a page count (type
int), and tape, which adds a playing time in minutes (type float). Each of these three
classes should have a getdata() function to get its data from the user at the keyboard,
and a putdata() function to display its data.
Write a main() program to test the book and tape classes by creating instances of them,
asking the user to fill in data with getdata(), and then displaying the data with putdata().

*/

#include <iostream> 
#include <string> 

using namespace std;


class Publication {
private:
	string name;
	float price;

public:
	Publication() : name("N/A"), price(0)
	{
	}
	Publication(string name, float price) : name(name), price(price) {

	}


};

class Book : public Publication {

	int pageCount;

public:
	Book(string name, float price, int pageC) : Publication(name, price), pageCount(pageC) {

	}

};
int main() {


	return 0;
}