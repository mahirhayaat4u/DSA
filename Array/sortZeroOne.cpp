#include<iostream>
using namespace std;

int main(){

    int arr[]={0,1,1,0,2,0,1,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i <  n; i++)
    {
        for (int j = i+1; j <  n; j++)
        {
             if (arr[i] >arr[j])
             {
                /* code */
                // int temp = arr[i];
                // arr[i] = arr[j];
                // arr[j] = temp;
                swap(arr[i],arr[j]);
             }
             
        }
        
         
        
    }

    // int left=0;
    // int right=n-1;
    // while(left < right){
    //     if(arr[left] < arr[right]){
    //          left++;
    //          right--;
    //     }
    //     if (arr[left] > arr[right])
    //     {
    //         swap(arr[left],arr[right]);
    //           left++;
    //          right--;
    //     }
    //     if (arr[left] == arr[right])
    //     {
              
    //          right--;
    //     }
        

        

    // }

    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}