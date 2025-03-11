#include <iostream>
using namespace std;
int findLargestNumber(int arr[], int size) {
 int largest = arr[0];
 for (int i = 1; i < size; i++) {
 if (arr[i] > largest) {
 largest = arr[i];
 }
 }
 return largest;
}
int main() {
 int arr[] = {10, 20, 30, 40, 50};
 int size = sizeof(arr) / sizeof(arr[0]);
 int largest = findLargestNumber(arr, size);
 cout << "The largest number in the array is: " << largest << 
endl;
 return 0;
}