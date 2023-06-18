#include <iostream>
using namespace std;

void linearSearch(int arr[], int num, int count) {
	int i;

	for (i = 0; i < count; i++) {
		if (arr[i] == num) {
			cout << "Element found in index: " << i << endl;
			break;
		}
	}

	if (i == count) {
		cout << "Element is not present in the array." << endl;
	}

	return;
}


int main()
{	
	int arr[100], count, num;
	cout << "Enter the number of elemnt of the array." << endl;
	cin >> count;

	cout << "Please enter " << count << " elements of the array." << endl;
	for (int i = 0; i < count; i++) {
		cin >> arr[i];
	}

	cout << "Enter the number you want to search in the array." << endl;
	cin >> num;


	linearSearch(arr, num, count);

	return 0;
}