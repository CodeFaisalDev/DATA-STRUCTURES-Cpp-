#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int i, key, j;

    for (i = 1; i < n - 1; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[10];
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter 10 element of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Given array: " << endl;
    printArray(arr, n);
    cout << "\nSorted Array: " << endl;
    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}