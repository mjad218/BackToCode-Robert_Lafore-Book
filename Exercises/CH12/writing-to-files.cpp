#include <iostream> 
#include <string>
#include <fstream>

int main() {

	int integer = 5;
	float fNum = 5.00;
	std::string str = "str";
	std::ofstream file = std::ofstream("text.txt");

	file << integer << ' ' << fNum << ' ' << str << '\n';

	std::cout << "done";

	std::cin.get();
	return 0;
}