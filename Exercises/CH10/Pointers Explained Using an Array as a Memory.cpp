#include <iostream> 
using namespace std; 

/* 
Create a class called Float. We’ll use it to model numbers of type float that are stored
in fmemory instead of real memory. The only instance data in Float is its own “address”;
that is, the index where its float value is stored in fmemory. Call this instance variable
addr. Class Float also needs two member functions. The first is a one-argument constructor to initialize the Float with a float value. This constructor stores the float
value in the element of fmemory pointed to by fmem_top, and stores the value of
fmem_top in addr. This is similar to how the compiler and linker arrange to store an ordinary variable in real memory. The second member function is the overloaded & operator.
It simply returns the pointer (really the index, type int) value in addr.


Create a second class called ptrFloat. The instance data in this class holds the address
(index) in pmemory where some other address (index) is stored. A member function initializes this “pointer” with an int index value.

The second member function is the overloaded * (dereference, or “contents of”) operator. Its operation is a tad more complicated.
It obtains the address from pmemory, where its data, which is also an address, is stored. It
then uses this new address as an index into fmemory to obtain the float value pointed to
by its address data.
float& ptrFloat::operator*()
{
return fmemory[ pmemory[addr] ];
}
In this way it models the operation of the dereference operator (*). Notice that you need
to return by reference from this function so that you can use * on the left side of the
equal sign.


The two classes Float and ptrFloat are similar, but Float stores floats in an array representing memory, and ptrFloat stores ints (representing memory pointers, but really
array index values) in a different array that also represents memory.

Here’s a typical use of these classes, from a sample main():
Float var1 = 1.234; // define and initialize two Floats
Float var2 = 5.678;

ptrFloat ptr1 = &var1; // define two pointers-to-Floats,
ptrFloat ptr2 = &var2; // initialize to addresses of Floats

cout << “ *ptr1=” << *ptr1; // get values of Floats indirectly
cout << “ *ptr2=” << *ptr2; // and display them

*ptr1 = 7.123; // assign new values to variables
*ptr2 = 8.456; // pointed to by ptr1 and ptr2

cout << “ *ptr1=” << *ptr1; // get new values indirectly
cout << “ *ptr2=” << *ptr2; // and display them

Notice that, aside from the different names for the variable types, this looks just the same
as operations on real variables. Here’s the output from the program:

*ptr1=1.234
*ptr2=2.678
*ptr1=7.123
*ptr2=8.456
* 
This may seem like a roundabout way to implement pointers, but by revealing the inner
workings of the pointer and address operator, we have provided a different perspective
on their true nature.

*/
int pmemory[500];
float fmemory[500];

class Float {
protected : 
	int addr; 
	static int fmm_top;

public : 
	Float() {
	}
	Float(float value) {
		fmemory[fmm_top] = value; 
		addr = fmm_top;
		fmm_top++;
	}
	int operator &(){
		return addr; 
	}
}; 

class PointerFloat{
	int addr; 
	static int pmm_top;

public : 

	PointerFloat(int index) 
	{
		pmemory[pmm_top] = index;
		addr = pmm_top;
		pmm_top++;
	}

	float& operator *() {
		return fmemory[ pmemory[addr] ];
	}
};
int Float::fmm_top = 0;
int PointerFloat::pmm_top = 0;

int main() {

	Float var1 = 1.234; // define and initialize two Floats
	Float var2 = 5.678;

	PointerFloat ptr1 = &var1; // define two pointers-to-Floats,
	PointerFloat ptr2 = &var2; // initialize to addresses of Floats
	
	cout << " * ptr1 = " << *ptr1 << endl; // get values of Floats indirectly
	cout << " * ptr2 = " << *ptr2 << endl; // and display them

	*ptr1 = 7.123; // assign new values to variables
	*ptr2 = 8.456; // pointed to by ptr1 and ptr2

	cout << " * ptr1 = " << *ptr1 << endl ; // get new values indirectly
	cout << " * ptr2 = " << *ptr2 << endl ; // and display them

	return 0; 
}