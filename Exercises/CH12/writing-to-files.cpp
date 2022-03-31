#include <iostream> 
#include <string>
#include <fstream>

int main() {

	int integer = 5;
	float fNum = 7.1;
	char ch = 'g';
	std::string str = "str";
	std::ofstream file = std::ofstream("text4.txt");
	file << ch << integer << ' ' << fNum << str;

	return 0;
}