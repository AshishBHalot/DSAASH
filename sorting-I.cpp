#include <iostream>
#include <vector>
using namespace std;

// Function declarations
void selectionSort(vector<int>& arr);
void bubbleSort(vector<int>& arr, int n);
void insertionSort(int arr[], int n);

int main() {
    // Test data
    vector<int> data1 = {5, 2, 9, 1, 5, 6};
    int data2[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(data2) / sizeof(data2[0]);

    // Selection Sort
    cout << "Selection Sort:" << endl;
    selectionSort(data1);
    for (int num : data1)
        cout << num << " ";
    cout << endl;

    // Bubble Sort
    cout << "Bubble Sort:" << endl;
    bubbleSort(data1, data1.size());
    for (int num : data1)
        cout << num << " ";
    cout << endl;

    // Insertion Sort
    cout << "Insertion Sort:" << endl;
    insertionSort(data2, n);
    for (int i = 0; i < n; ++i)
        cout << data2[i] << " ";
    cout << endl;

    return 0;
}

// Selection Sort
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i <= n - 1; i++) {
        int mini = i;
        for (int j = i; j <= n - 1; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

// Bubble Sort
void bubbleSort(vector<int>& arr, int n) {
    for (int i = n - 1; i >= 0; i--) {
        int didswap = 0;
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didswap = 1;
            }
        }
        if (didswap == 0) {
            break;
        }
    }
}

// Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
