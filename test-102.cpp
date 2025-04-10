#include <iostream>
using namespace std;

int findLargest(int arr[], int size) {
    // Check if array is empty
    if (size <= 0) {
        return -1; // Return -1 to indicate empty array
    }
    
    // Initialize largest as first element
    int largest = arr[0];
    
    // Iterate through array to find largest
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    return largest;
}

int main() {
    // Example array
    int arr[] = {23, 45, 12, 67, 89, 34};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Call function and get result
    int result = findLargest(arr, size);
    
    // Print the result
    if (result != -1) {
        cout << "The largest number in the array is: " << result << endl;
    } else {
        cout << "Array is empty" << endl;
    }
    
    return 0;
}
