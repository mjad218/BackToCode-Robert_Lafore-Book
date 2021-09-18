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

	String(char s[]) {

		strcpy_s(this->s, s);

	}

	operator char* () {

		return s;
	}

};

int main() {

	String s;


	char cs[] = "I am Mohamed Gad";

	s = cs;




	cout << static_cast<char*>(s);



	return 1;
}