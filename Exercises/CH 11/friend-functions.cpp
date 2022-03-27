#include <iostream> 
#include <string>
class Beta;
class Alpha {
private : 
	std::string name = "I am Alpha";
public:
	friend Beta;
	friend void func0(Alpha a);
};

class Beta {
public:
	void func(Alpha a) {
		std::cout << "I can access Beta's name: " << a.name << "\n";
	}
};


int main() {
	Alpha alpha;

	Beta beta; 

	func0(alpha);
	beta.func(alpha);

	return 0;
}

void func0(Alpha a) {
	std::cout << "I am func0 and I am a friend function to Alpha " << a.name << "\n";
}