#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,4 };
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i <  n; i++){
        for (int j = i+1; j <n; j++){
            cout<<arr[i] <<" "<<arr[j]<<endl;
              
        }
      
    }
    return 0;
}
