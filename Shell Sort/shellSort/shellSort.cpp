#include <iostream>
using namespace std;


void shellSort(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i += 1) {
            int temp = arr[i];
            int j;

            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }

            arr[j] = temp;
        }
    }
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int arr[] = { 170, 2, 25, 50, 66, 90, 41 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array: " << endl;
    printArray(arr, size);

    cout << "Sorted array: " << endl;
    shellSort(arr, size);
    printArray(arr, size);
}