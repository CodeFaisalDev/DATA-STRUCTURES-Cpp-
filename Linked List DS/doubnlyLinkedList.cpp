#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* prev;
	Node* next;
};

class DoublyLinkedList {
private:
	Node* head;
	Node* tail;

public:
	DoublyLinkedList() {
		head = nullptr;
		tail = nullptr;
	}

	void appendNode(int d) {
		Node* newNode = new Node();
		newNode->data = d;
		newNode->prev = nullptr;
		newNode->next = nullptr;

		if (head == nullptr) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail->next = newNode;
			newNode->prev = tail;
			tail = newNode;
		}
	}

	void prependNode(int d) {
		Node* newNode = new Node();
		newNode->data = d;
		newNode->prev = nullptr;
		newNode->next = nullptr;
		if (head == nullptr) {
			head = newNode;
			tail = newNode;
		}
		else {
			newNode->next = head;
			head = newNode;
			head->prev = newNode;
		}
	}

	void traverse() {
		Node* current = head;
		while (current != nullptr) {
			cout << current->data << "-->";
			current = current->next;
		}
	}

	void remove(int d) {
		Node* current = head;

		while (current != nullptr) {
			if (current->data == d) {
				if (current == head && current == tail) {
					head = nullptr;
					tail = nullptr;
				}
				else if (current == head) {
					head = current->next;
					head->prev = nullptr;
				}
				else if (current == tail) {
					tail = current->prev;
					tail->next = nullptr;
				}
				else {
					Node* prevNode = current->prev;
					Node* nextNode = current->next;
					nextNode->next = nextNode;
					prevNode->prev = prevNode;
				}

				delete current;
				return;
			}
			current = current->next;
		}
		cout << "Node not found" << endl;
	}

	void displayNodes() {
		Node* current = head;

		std::cout << "Doubly Linked List: ";
		while (current != nullptr) {
			std::cout << current->data << "-->";
			current = current->next;
		}
		std::cout << std::endl;
	}
};


int main()
{
	DoublyLinkedList d1;

	d1.appendNode(20);
	d1.appendNode(30);
	d1.appendNode(40);
	d1.appendNode(50);
	d1.displayNodes();

	cout << " " << endl;

	d1.prependNode(10);
	d1.displayNodes();

	cout << " " << endl;

	d1.remove(20);
	d1.displayNodes();
}
