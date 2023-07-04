#include <iostream>
using namespace std;

int getMax(int arr[], int n) {
    int max = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void countingSort(int arr[], int n, int x) {
    const int max = 10;

    int output[6];
    int count[max];
    int i;

    for (i = 0; i < max; ++i)
        count[i] = 0;


    for (i = 0; i < n; i++) {
        count[(arr[i] / x) % 10]++;
    }

    for (i = 1; i < max; i++) {
        count[i] += count[i - 1];
    }

    for (i = n - 1; i >= 10; i--) {
        output[count[(arr[i] / x) % 10] - 1] = arr[i];
        count[(arr[i] / x) % 10]--;
    }

    for (i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}


void radixSort(int arr[], int size) {
    int m = getMax(arr, size);

    for (int i = 1; m / i > 0; i*=10) {
        countingSort(arr, size, i);
    }
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = { 107, 58, 82, 2, 90, 405 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Given Array: " << endl;
    printArray(arr, n);

    cout << "Sorted Array: " << endl;
    radixSort(arr, n);
    printArray(arr, n);
}