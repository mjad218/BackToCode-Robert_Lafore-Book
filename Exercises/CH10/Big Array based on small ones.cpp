#include <iostream>

/*
Problem 9 : Let’s say that you need to store 100 integers so that they’re easily accessible. However,
let’s further assume that there’s a problem: The memory in your computer is so fragmented that the largest array that you can use holds only 10 integers. (Such problems
actually arise, although usually with larger memory objects.) You can solve this problem
by defining 10 separate int arrays of 10 integers each, and an array of 10 pointers to
these arrays. The int arrays can have names like a0, a1, a2, and so on. The address of
each of these arrays can be stored in the pointer array of type int*, which can have a
name like ap (for array of pointers). You can then access individual integers using
expressions like ap[j][k], where j steps through the pointers in ap and k steps through
individual integers in each array. This looks as if you’re accessing a two-dimensional
array, but it’s really a group of one-dimensional arrays.
Fill such a group of arrays with test data (say the numbers 0, 10, 20, and so on up to
990). Then display the data to make sure it’s correct.

Problem 10 : As presented, Exercise 9 is rather inelegant because each of the 10 int arrays is declared
in a different program statement, using a different name. Each of their addresses must
also be obtained using a separate statement. You can simplify things by using new, which
allows you to allocate the arrays in a loop and assign pointers to them at the same time:
for(j=0; j<NUMARRAYS; j++) // allocate NUMARRAYS arrays
*(ap+j) = new int[MAXSIZE]; // each MAXSIZE ints long
Rewrite the program in Exercise 9 to use this approach. You can access the elements of
the individual arrays using the same expression mentioned in Exercise 9, or you can use
pointer notation: *(*(ap+j)+k). The two notations are equivalent.

Problem 11 : Create a class that allows you to treat the 10 separate arrays in Exercise 10 as a single
one-dimensional array, using array notation with a single index. That is, statements in
main() can access their elements using expressions like a[j], even though the class
member functions must access the data using the two-step approach. Overload the subscript operator [] (see Chapter 9, “Inheritance”) to achieve this result. Fill the arrays
with test data and then display it. Although array notation is used in the class interface in
main() to access “array” elements, you should use only pointer notation for all the operations in the implementation (within the class member functions).

*/

using namespace std; 
class BigArray {
	int* arr[10];
public : 
	BigArray(int LIMIT) 
	{
		int numOfArrays = (LIMIT % 10 == 0 ) ? LIMIT / 10  : LIMIT / 10 + 1 ;
		for (int i = 0; i < numOfArrays; i++)  {
			*(arr + i) = new int[10];
		}
	} 

	int& operator[](int index){
		int outerIndex = index / 10; 
		int innerIndex = index - outerIndex * 10;
		return *( (*(arr + outerIndex) ) + innerIndex);
	}


};
int main() {

	BigArray arr = BigArray(100);

	for (int i = 0; i < 100; i++) {
		arr[i] = i + 1; 
		cout << arr[i] << endl;

	}

	return 0; 
}