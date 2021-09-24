/*
Various situations require that pairs of numbers be treated as a unit. For example, each
screen coordinate has an x (horizontal) component and a y (vertical) component. Represent
such a pair of numbers as a structure called pair that comprises two int member variables.
Now, assume you want to be able to store pair variables on a stack. That is, you want to
be able to place a pair (which contains two integers) onto a stack using a single call to a
push() function with a structure of type pair as an argument, and retrieve a pair using a
single call to a pop() function, which will return a structure of type pair. Start with the
Stack2 class in the STAKEN program in this chapter, and from it derive a new class called
pairStack. This new class need contain only two members: the overloaded push()
and pop() functions. The pairStack::push() function will need to make two calls to
Stack2::push() to store the two integers in its pair, and the pairStack::pop() function
will need to make two calls to Stack2::pop() (although not necessarily in the same order)

*/


#include <iostream> 
#include <string> 

using namespace std;

struct Pair {
	float x; 
	float y;

} ;
class Stack {
private:
	static const int MAX = 100;
	int top; 
	float arr[MAX];
public:
	Stack() : top(-1)
	{
	
	}
	void push(float value) {
		arr[++top] = value; 
	}

	float pop() {
		return arr[top--]; 
	}

};

class PairStack : public Stack {

public:
	void push(Pair pair) {
		Stack::push(pair.x);
		Stack::push(pair.y);
	}

	Pair pop() {
		float y = Stack::pop();
		float x = Stack::pop();

		return { x , y };
	}


};

void displayCoord(Pair pair) {
	cout << "{ " << pair.x << ", " << pair.y << " }";
}
int main() {
	Stack numbers; 
	for (int i = 0; i < 10; i++) {
		if (i == 0)
			cout << "Pushing numbers into stack : " << endl; 
		numbers.push(i); 
		cout << i << endl ;
	}
	for (int i = 0; i < 10; i++) {
		if (i == 0)
			cout << "Popping numbers from stack : " << endl;

		cout << numbers.pop() << endl ;
	}


	PairStack coordinates;

	for (int i = 0; i < 10; i++) {
		if (i == 0)
			cout << "Pushing structures  into stack : " << endl;
		coordinates.push({ (float)i, (float)i + 1 });
		displayCoord({ (float)i, (float)i + 1 });
		cout << endl;
	}
	for (int i = 0; i < 10; i++) {
		if (i == 0)
			cout << "Popping structures from stack : " << endl;
		displayCoord(coordinates.pop());
		cout << endl; 
	}

	return 0;
}