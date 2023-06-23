#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    int i, j;
    int swaped;

    for (i = 0; i < n - 1; i++) {
        swaped = false;

        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swaped = true;
            }
        }

        if (swaped == false) {
            break;
        }
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
    bubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}
