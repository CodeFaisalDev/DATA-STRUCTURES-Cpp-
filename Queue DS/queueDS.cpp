#include <iostream>
#include <conio.h>

using namespace std;

class Queue {
private:
	int rear, front;
	int arr[5];
public:
	Queue() {
		front = -1;
		rear = -1;
		for (int i = 0; i < 5; i++) {
			arr[i] = 0;
		}
	}

	bool isEmpty() {
		if (rear == -1 && front == -1) {
			return true;
		}
		else
			return false;
	}

	bool isFull() {
		if (rear == (size(arr) - 1)) {
			return true;
		}
		else
			return false;
	}

	void enqueue(int val) {
		if (isFull()) {
			cout << "Queue is full" << endl;
			return;
		}
		else if (isEmpty()) {
			rear = 0; 
			front = 0;
			arr[rear] = val;
		}
		else {
			rear++;
			arr[rear] = val;
		}
	}

	int dequeue() {
		int x = 0;
		if (isEmpty()) {
			cout << "Queue is empty" << endl;
			return 0;
		}
	
		else if(rear == front) {
			x = arr[front];
			arr[front] = 0;
			front = -1;
			rear = -1;
			return x;
		}
		else {
			x = arr[front];
			arr[front] = 0;
			front++;
			return x;

		}
	}

	int count() {
		return (rear - front + 1);
	}

	void display() {
		cout << "All values in the Queue are - " << endl;
		for (int i = 0; i < 5; i++) {
			cout << arr[i] << "  ";
		}
	}

};

int main() {
	int option, value;

	Queue q1;

	do
	{
		cout << "What operation you want to perform? Press 0 to close." << endl;
		cout << "Press 1 for Enqueue operation" << endl;
		cout << "Press 2 for Dequeue operation" << endl;
		cout << "Press 3 for check if the queue is full operation" << endl;
		cout << "Press 4 for check if the queue is empty operation" << endl;
		cout << "Press 5 to count all the items in the queue." << endl;
		cout << "Press 6 to display the queue" << endl;
		cout << "Press 7 to clear the tarminal" << endl;

		cin >> option;

		switch (option)
		{
		case 0 :
			break;

		case 1:
			cout << "Enqueue Operation\ Enter a value you want to enque: " << endl;
			cin >> value;
			q1.enqueue(value);
			break;

		case 2:
			cout << "Dequeue Operation\ Dequeued value: " << endl;
			q1.dequeue();
			break;

		case 3:
			cout << "isFull operation: " << endl;
			if (q1.isFull()) {
				cout << "The queue is Full." << endl;
			}
			else {
				cout << "The queue not Full." << endl;
			}
			break;

		case 4:
			cout << "isEmpty operation: " << endl;
			if (q1.isEmpty()) {
				cout << "The queue is empty." << endl;
			}
			else {
				cout << "The queue not empty." << endl;
			}
			break;

		case 5:
			cout << "Count operation: " << endl;
			cout << "There are : " <<  q1.count() << " items in the queue" << endl;
			break;

		case 6:
			cout << "Display Operation: " << endl;
			q1.display();
			break;

		case 7:
			system("cls");
			break;

		default:
			break;
		}
	} while (option != 0);

}