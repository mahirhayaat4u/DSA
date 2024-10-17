#include <iostream>

int findMissingNumber(const int arr[], int n, int diff) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if the difference between arr[mid] and arr[0] matches the expected difference
        if (arr[mid] != arr[0] + mid * diff) {
            // If the difference does not match, the missing number is on the left side
            high = mid - 1;
        } else {
            // Otherwise, it is on the right side
            low = mid + 1;
        }
    }

    // The missing number is where the expected difference does not match
    return arr[0] + low * diff;
}

int main() {
    int arr[] = {0,1,2,4,5,6,7};  // Example array with missing 30
    int n = sizeof(arr) / sizeof(arr[0]);
    int diff = 1;  // The expected difference between consecutive numbers is 10
    std::cout << "The missing number is: " << findMissingNumber(arr, n, diff) << std::endl;
    return 0;
}
