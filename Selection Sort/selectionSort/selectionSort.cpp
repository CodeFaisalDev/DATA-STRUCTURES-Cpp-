#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    int i, j, min;

    for (i = 0; i < n - 1; i++) {
        min = i;
        
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        if (min != i) {
            swap(arr[min], arr[i]);
        }
    }
}

void printArray(int arr[], int n) {
    cout << '| ';
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " | ";
    }
}

int main()
{
    int arr[10];
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter 10 Elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enterd Array:" << endl;
    printArray(arr, n);

    selectionSort(arr, n);
    cout << "\nSorted Aray: " << endl;
    printArray(arr, n);
}