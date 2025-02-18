#include <iostream>
#include <limits.h>
using namespace std;
int findSumOfLargestAndSecondLargest(int arr[], int n) {
    if (n < 2) return -1;
    int largest = INT_MIN, secondLargest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    if (secondLargest == INT_MIN) return -1;
    return largest + secondLargest;
}
int main() {
    int arr[] = {10, 5, 20, 8, 25, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = findSumOfLargestAndSecondLargest(arr, n);
    if (sum != -1) {
        cout << "Sum of largest and second largest: " << sum << endl;
    }
    return 0;
}
