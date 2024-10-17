

// Function to check if an array is sorted or not recursively

#include<iostream>
using namespace std;


bool checkSorted(int arr[],int n, int index){
    //base case: if array is empty or has one element, it's sorted
    if(index == n-1 || n == 0 || n==1) 
    //if array is sorted, return true
        return true;
        
     //recursive case: check if the next element is greater than or equal to the current element, and if the rest of the array is sorted recursively
    
     if(arr[index+1]==arr[index] || arr[index+1] > arr[index]){
        //increment the index and recursively check the rest of the array
        index=index+1;
        //if next element is greater than or equal to current element, and the rest of the array is sorted, return true
        return checkSorted(arr, n, index);
     }
     else{
        //if next element is less than current element, the array is not sorted, return false
        return false;
     }


}

int main(){
    //test the function with a sorted array and an unsorted array
    int arr[] = {1, 2, 4, 5, 9, 7};

    int n = sizeof(arr)/sizeof(arr[0]);
    
    
    cout << (checkSorted(arr, n, 0)? "Array is sorted" : "Array is not sorted") << endl;
    
     
    
    return 0;
}