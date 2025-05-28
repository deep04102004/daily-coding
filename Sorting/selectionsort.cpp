#include <bits/stdc++.h>
using namespace std;

// Function to perform selection sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Assume current index has the minimum value

        // Find the index of the minimum element
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the current element with the smallest element found
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Function to take input from user
void inputArray(int arr[], int n) {
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main function
int main() {
    int arr[100], n;

    // Take size input from user
    cout << "Enter the number of elements: ";
    cin >> n;

    // Call function to input array
    inputArray(arr, n);

    // Call function to sort the array
    selectionSort(arr, n);

    // Call function to print sorted array
    cout << "Sorted array in ascending order:\n";
    printArray(arr, n);

    return 0;
}
