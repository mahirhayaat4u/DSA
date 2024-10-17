#include<iostream>
using namespace std;

int main(){

    int arr[]={10,2,8,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int l=0;
    int h=n-1;

    int ans=0;

    while(l<=h){

         ans=max(arr[l],arr[h]);

         if(ans==arr[l]){
            h--;
         }
         if(ans==arr[h]){
            l++;

         }
    }
    cout<<"Max element is: "<<ans<<endl;
    
    return 0;
}