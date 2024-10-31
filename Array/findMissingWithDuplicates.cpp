#include <iostream>

using namespace std;

int main()
{
    int a[] = {5, 1, 5, 5, 5};
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        int index = abs(a[i]);

        if (a[index-1] < 0)
        {
        //    cout << "Duplicate element "<<index << endl;
            continue;
        }
        else
        {
            a[index-1] *= -1;
        }
    }
 cout << "Missing elements: ";
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            cout << i+1 << " ";
        }
    }
    return 0;
}