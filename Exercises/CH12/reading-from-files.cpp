#include <iostream> 
#include <string>
#include <fstream>
using namespace std;

int main() {

	int integer ;
	float fNum;
	char ch;
	std::string str;
	std::ifstream file = std::ifstream("text4.txt");
	file >> ch >> integer >> fNum >> str;

	cout << ch << endl << integer << endl << fNum << endl << str;
	return 0;
}