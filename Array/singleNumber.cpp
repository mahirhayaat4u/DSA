//another method using xor

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> arr={ 2,1,5,5,2,1,3,3,6};
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int i=0;
     while(i<n)
     {
        if (i+1 <n && arr[i]==arr[i+1]) 
        {
            i+=2;
        }
        else{
            cout<<"single number is : "<<arr[i]<<endl;
            break;
        }

         
     }
     
    


    return 0;
}
