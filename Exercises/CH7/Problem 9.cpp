#include <iostream> 

/*
A queue is a data storage device much like a stack. The difference is that in a stack the
last data item stored is the first one retrieved, while in a queue the first data item stored
is the first one retrieved. That is, a stack uses a last-in-first-out (LIFO) approach, while a
queue uses first-in-first-out (FIFO). A queue is like a line of customers in a bank: The
first one to join the queue is the first one served.
Rewrite the STAKARAY program from this chapter to incorporate a class called queue
instead of a class called stack. Besides a constructor, it should have two functions: one
called put() to put a data item on the queue, and one called get() to get data from the
queue. These are equivalent to push() and pop() in the stack class.
Arrays and Strings
Both a queue and a stack use an array to hold the data. However, instead of a single int
variable called top, as the stack has, you�ll need two variables for a queue: one called
head to point to the head of the queue, and one called tail to point to the tail. Items
are placed on the queue at the tail (like the last customer getting in line at the bank) and
removed from the queue at the head. The tail will follow the head along the array as
items are added and removed from the queue. This results in an added complexity:
When either the tail or the head gets to the end of the array, it must wrap around to the
beginning. Thus you�ll need a statement like
if(tail == MAX-1)
tail = -1;
to wrap the tail, and a similar one for the head. The array used in the queue is sometimes
called a circular buffer, because the head and tail circle around it, with the data between
them.

*/

using namespace std; 


class Queue {
	const static int MAX = 5; 
	int arr[MAX]; 
	int head ; 
	int tail ; 
public : 
	Queue() : tail(-1), head(-1) 
	{
		
		
		for (int i = 0; i < MAX; i++) {
		arr[i] = 0;
		}

		

	}

	void put(int item) {

		if (tail == MAX - 1 ) {
			tail = -1;
		}

		arr[++tail] = item;
		
	}

	int get() {

		if (head == MAX - 1) {
			head = -1;
		}
		return arr[++head];

	}


};

int main() {

	Queue queue; 

	for (int i = 0; i < 10; i++ ) {
		queue.put(i); 
	}

	for (int i = 0; i < 10; i++) {
		cout << queue.get() << endl;
	}

	return 0; 
}