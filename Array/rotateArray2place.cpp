#include<iostream>
using namespace std;

int main(){

    int arr[]={10,20,30,40,50,60,70};
    int n = 7;
    // int shift = 6; //you can change this value for different shifts
    int finalshift=6;

    int temp[100];

     //into temp array

    for (int i = 0; i <finalshift; i++)
    {
        temp[i] = arr[n-finalshift+i];
    }
     //shift elements to right
    for (int i = 3; i >= 0; i--)
    {
        arr[i+finalshift] = arr[i];
    }

    //temp to array
    for (int i = 0; i <finalshift; i++)
    {
        arr[i] = temp[i];
    }


    //after shifting
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
    return 0;
}