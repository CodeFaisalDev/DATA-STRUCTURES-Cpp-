#include <iostream>
#include <array>
using namespace std;

class Stack
{
private:
	int top;
	int arr[5];

public:
	Stack() {
		top = -1;
		for (int i = 0; i < 5; i++) {
			arr[i] = 0;
		}
	}

	bool isEmpty() {
		if (top == -1) 
			return true;
		else 
			return false;
	}

	bool isFull() {
		if (top == 4)
			return true;
		else
			return false;
	}

	void push(int val) {
		if (isFull())
			cout << "Stack Overflow" << endl;
		else {
			top++;
			arr[top] = val;
		}
	}

	int pop() {
		if (isEmpty()) {
			cout << "Stack Underflow" << endl;
			return 0;
		}
		else {
			int popvalue = arr[top];
			arr[top] = 0;
			top--;
			return popvalue;
		}
	}

	int count() {
		return (top + 1);
	}

	int peek(int pos) {
		if (isEmpty()) {
			cout << "Stack Underflow" << endl;
			return 0;
		}
		else {
			return arr[pos];
		}
	}

	void change(int pos, int val) {
		arr[pos] = val;
		cout << "Value is changed at location: " << pos << endl;
	}

	void display() {
		cout << "The values are: " << endl;
		for (int i = top; i >= 0; i--) {
			cout << arr[i] << endl;
		}
	}
};

int main() {
	Stack s1;
	
	// Push And Display Item in stack:
	cout << "Push Operation: " << endl;
	s1.push(5);
	s1.display();
	s1.push(6);
	s1.display();
	s1.push(7);
	s1.display();


	//Pop item from Stack:
	cout << "\nPop Operation: " << endl;
	s1.pop();
	s1.display();

	//Chacking if the Stack is Empty:
	cout << "\nisEmpty Operation: " << endl;
	if (s1.isEmpty()) {
		cout << "Stack is Empty" << endl;
	}
	else {
		cout << "Stack is not Empty" << endl;
	}

	//Chacking if the Stack is Full:
	cout << "\nisFull Operation: " << endl;
	if (s1.isFull()) {
		cout << "Stack is Full" << endl;
	}
	else {
		cout << "Stack is not Full" << endl;
	}

	// Counting the item in the Stack:
	cout << "\nCount Operation: " << endl;
	cout << s1.count() << endl;

	// Peeking to an item in Stack:
	cout << "\nPeek Operation: " << endl;
	cout << s1.peek(1) << endl;
}