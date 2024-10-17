//sum of all subarray in a given array

#include<iostream>
using namespace std;

int main(){
    

    int arr[]={-1,-2,3};

    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;

    int ans=INT_MIN;
    int sum =0;

    for (int i = 0; i < n; i++){
        for(int j=i; j < n;j++){
            sum=sum+arr[j];
             if(sum<0){
                sum=0;
            }
            ans=max(ans,sum);
             // If the current subarray sum is negative, reset it to 0 (start a new subarray) 
           
        }
    }

    cout<<"Maximum sum of a contiguous subarray: "<<ans<<endl;
    
    return 0;
}