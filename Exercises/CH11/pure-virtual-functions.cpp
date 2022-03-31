#include <iostream> 

class Animal {

public:
	//void makeSound() {
	//	std::cout << "Animal Sound";
	//}
	virtual void makeSound() = 0;
};

class Dog : public Animal {
public:
	void makeSound() {
		std::cout << "A Dog Sound" << std::endl;
	}

};
class Cat : public Animal {
public:
	void makeSound() {
		std::cout << "A Cat Sound" << std::endl;
	}

};

int main() {
	// Animal animal; // not alowed Animal is an abstract class
	Animal* animal;
	Dog dog;
	Cat cat;
	animal = &dog;
	animal->makeSound();
	animal = &cat;
	animal->makeSound();

	return 0;
}