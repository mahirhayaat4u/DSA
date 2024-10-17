// C++ Program to sort an array of 0s, 1s and 2s

#include <iostream>
using namespace std;

// Function to sort the array of 0s, 1s and 2s
void sort012(int a[], int n)
{
    int c0 = 0, c1 = 0, c2 = 0;

    // Count 0s, 1s and 2s
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            c0 += 1;
        }
        else if (a[i] == 1) {
            c1 += 1;
        }
        else {
            c2 += 1;
        }
    }

    int idx = 0;
    // Place all the 0s
    for (int i = 0; i < c0; i++)
        a[idx++] = 0;

    // Place all the 1s
    for (int i = 0; i < c1; i++)
        a[idx++] = 1;

    // Place all the 2s
    for (int i = 0; i < c2; i++)
        a[idx++] = 2;
}

int main()
{
      
    // Sample Input
    int a[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    int n = sizeof(a) / sizeof(a[0]);

    sort012(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}

// Example:
// If idx = 0 and you execute a[idx++] = 0;, here’s what happens:

// The current value of idx (which is 0) is used to access a[0].
// a[0] is assigned the value 0.
// After the assignment, idx is incremented to 1.
// Visualization:
// Let's assume idx = 2 initially, and you use the expression a[idx++] = 1;.

// The value of idx (which is 2) is used to access a[2].
// a[2] is assigned the value 1.
// idx is then incremented to 3.
// This way, idx is updated for the next element in the array without needing a separate statement like idx = idx + 1.
