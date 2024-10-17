// result in printing duplicate pairs in reverse order. For example, the pair (2, 1) might get printed, and later, the pair (1, 2) will be considered a new pair. To avoid this, you should always store pairs in a consistent order (i.e., always store the smaller number first). This will ensure that pairs like (2, 1) and (1, 2) are treated as the same pair.

#include <iostream>
#include <map>
using namespace std;

int main()
{
    int arr[] = {2, 1, 1, 7, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Map to track pairs that have been printed
    map<pair<int, int>, bool> mp;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // Store pairs in a consistent order (small, large)
            pair<int, int> p = make_pair(min(arr[i], arr[j]), max(arr[i], arr[j]));

            // Check if the sum is odd and the pair hasn't been printed yet
            if ((arr[i] + arr[j]) % 2 != 0 && !mp[p])
            {
                cout << arr[i] << " " << arr[j] << endl;
                mp[p] = true;  // Mark the pair as printed
            }
        }
    }

    return 0;
}

// result in printing duplicate pairs in reverse order. For example, the pair (2, 1) might get printed, and later, the pair (1, 2) will be considered a new pair.

// #include <iostream>
// #include<map>
// using namespace std;

// int main()
// {

//     int arr[] = {2, 1, 1, 7, 5, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     map<pair<int, int>, bool> mp;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {

//             pair<int, int> p = make_pair(arr[i], arr[j]);
//             if ((arr[i] + arr[j]) % 2 != 0 && mp[p] != true)
//             {
//                   cout << arr[i] << " " << arr[j] << endl;
//                   mp[p] = true;
//             }
            
//         }
//     }
//     return 0;
// }