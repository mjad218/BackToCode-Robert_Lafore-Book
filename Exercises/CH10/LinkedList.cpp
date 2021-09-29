#include <iostream> 

using namespace std;
struct Link {
	int data; 
	Link* next; 
};
class LinkedList {
	Link* head; 
public: 
	LinkedList() : head(NULL)
	{
	}

	void add(int item) {
		Link* link = new Link;
		link->data = item; 
		link->next = head;
		head = link; 
	}
	 
	void display() {
		Link* current = head; 
		while (1) {
			cout << current->data << endl;
			if (current->next == NULL)
				break;

			current = current->next;
		}
	}
};
int main() {

	LinkedList linkedList; 

	linkedList.add(10);
	linkedList.add(5);
	linkedList.add(6);
	linkedList.add(7);
	linkedList.add(5);
	linkedList.add(547);

	linkedList.display();
	return 0;
}