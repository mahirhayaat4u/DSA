#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        // cout<<i<<" ";
        for (int j = 0; j < n-i; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 ||  j== n-i-1)
            {
                cout << i + 1 + j << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}