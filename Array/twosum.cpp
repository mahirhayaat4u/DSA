#include<iostream>
using namespace std;

int main(){
    
    int arr[]={1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target=5;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
           if ((arr[i]+arr[j])==target)
           {
            cout<<i<<j<<endl;
           }
           
        }
        
    }
    

    return 0;
}