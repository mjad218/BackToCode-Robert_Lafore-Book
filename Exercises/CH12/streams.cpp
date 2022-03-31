#include <iostream> 
#include <string>

int main() {

	std::cout << "I am a message\n";
	std::cerr << "I am an Error\nI am not buffered nor redirected";

	std::clog << "\nI am a log message!";
	return 0;
}