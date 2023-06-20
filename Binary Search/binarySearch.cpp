#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (arr[mid] == x) {
			return mid;
		}
		else if (mid > x) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}

	return -1;
}

int main()
{
	int arr[10];
	int output, num;

	cout << "Enter 10 values n assanding order: " << endl;
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}

	cout << "Enter the value you want to search in the array: " << endl;
	cin >> num;

	output = binarySearch(arr, 0, 9, num);

	if (output == -1) {
		cout << "No match found." << endl;
	}
	else {
		cout << "Match fount at index: " << output << endl;
	}

	return 0;
}