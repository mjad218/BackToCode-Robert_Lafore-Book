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
	~LinkedList() {
		Link* current = head; 
		while (current->next != NULL) {
			delete current;
			current = current->next; 
		}
	}
};

class LinkedList2 {
	Link* head;
	Link* tail; 
public:
	LinkedList2() : head(NULL), tail(NULL)
	{
	}

	void add(int item) {
		Link* link = new Link;
		link->data = item;

		if (head == NULL && tail == NULL) {
			link->next = head; // = NULL
			head = link;
		} 
		else {
			tail->next = link;
			link->next = NULL;
		}
		tail = link; 
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

	// linklist 2
	cout << "Link list 2" << endl; 
	LinkedList2 linkedList2;

	linkedList2.add(10);
	linkedList2.add(5);
	linkedList2.add(6);
	linkedList2.add(7);
	linkedList2.add(5);
	linkedList2.add(547);

	linkedList2.display();



	return 0;
}