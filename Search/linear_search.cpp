#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target)
            return i;  // Found at index i
    }
    return -1; // Not found
}

int main() {
    int arr[] = {5, 3, 7, 1, 9};
    int target = 7;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = linearSearch(arr, size, target);

    if(result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
