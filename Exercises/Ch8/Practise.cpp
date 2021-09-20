#include <iostream> 

using namespace std;


class String {

	// const int LIMIT = 80; 
	enum { LIMIT = 80 };

	char s[LIMIT];

public:

	String() {
		  
		s[0] = '\0';
	}

	String(const char s[]) {

		strcpy_s(this->s, s);

	}


	explicit operator char*() {
	
	
	
	}

};

int main() {

	String s;

	String s2 = "I a m";

	char cs[] = "I am Mohamed Gad";

	s = cs;




	cout << static_cast<char*>(s);



	return 1;
}