#include <iostream>
using namespace std;

// Function to find the smallest number in an array
int findSmallest(int arr[], int size) {
    int smallest = arr[0]; // Assume the first element is the smallest

    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i]; // Update smallest if a smaller element is found
        }
    }

    return smallest;
}

int main() {
    int arr[] = {120, 45, 67, 89, 34, 23, 90, 11}; 
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    int smallest = findSmallest(arr, size);
    cout << "The smallest number in the array is: " << smallest << endl;

    return 0;
}