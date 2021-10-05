#include <iostream> 

#include <iomanip>
using namespace std; 
/*

 Modify the person class in the PERSORT program in this chapter so that it includes not
only a name, but also a salary item of type float representing the person’s salary.
You’ll need to change the setName() and printName() member functions to setData()
and printData(), and include in them the ability to set and display the salary as well as
the name. You’ll also need a getSalary() function. Using pointer notation, write a
salsort() function that sorts the pointers in the persPtr array by salary rather than by
name. Try doing all the sorting in salsort(), rather than calling another function as
PERSORT does. If you do this, don’t forget that -> takes precedence over *, so you’ll need
to say
if( (*(pp+j))->getSalary() > (*(pp+k))->getSalary() )
{  swap the pointers  }
*/

class Person {
	float salary; 
	string name; 
public: 
	Person(string name, float salary ): name(name), salary(salary)
	{}

	float getSalary() {
		return salary; 
	}
	string getName() {
		return name;
	}
	void setSalary(float salary) {
		this->salary = salary;
	}
};

void bubbleSort(Person**); 

int main() {
	const int MAX = 5; 
	Person* persons[MAX];
	persons[0] = new Person("Mohamed Gad", 90000);
	persons[1] = new Person("Sara", 1000);
	persons[2] = new Person("Ahmed", 11000);
	persons[3] = new Person("Adam", 10000);
	persons[4] = new Person("Mark", 100);

	bubbleSort(persons);

	for (int i = 0; i < MAX; i++  ) {
		cout << setw(15) << persons[i]->getSalary() << setw(20) << persons[i]->getName() << endl ; 
	}
	return 0; 
}

void bubbleSort(Person** arr) {
	for (int i = 0; i < sizeof(arr) - 1; i++) {
		for (int j = i + 1; j < sizeof(arr); j++) {
			if ( (*(arr+i))->getSalary() < (*(arr + j))->getSalary()) {
				Person* temp = *(arr + i);
				*(arr + i) = *(arr + j); 
				*(arr + j) = temp;
			}
		}
	}
}