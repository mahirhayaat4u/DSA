#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int missingNumber(vector<int> &nums )
{

    sort(nums.begin(), nums.end());
    int n = nums.size();
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ansIndex = -1;

    while (s <= e)
    {
        int number = nums[mid];
        int index = mid;
        int difference = number - index;

        if (difference == 0)
        {
            s = mid + 1;
        }
        else if (difference == 1)
        {
            ansIndex = index;
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    if (ansIndex == -1)
    {
         cout<<n<<endl;
    }
    return ansIndex;

    // while(s<=e){
    //     if(mid+1<n && nums[mid+1]-nums[mid] != 1){
    //         return nums[mid]+1;
    //     }
    //     if(mid-1 >=0 && nums[mid]-nums[mid-1] != 1){
    //         return nums[mid]-1;
    //     }
    //     if(nums[mid]-mid ==0){
    //         s=mid+1;

    //     }

    //     if(nums[mid]-mid > 0){
    //         ansIndex=mid;
    //         e=mid-1;
    //     }

    //     if(ansIndex == -1){
    //         return n;
    //     }

    //     mid=s+ (e-s)/2;
    // }

     //return -1;
}

int main()
{

    vector<int> nums={0,2,3,4,5};

     

    missingNumber(nums);

     
     

    return 0;
}