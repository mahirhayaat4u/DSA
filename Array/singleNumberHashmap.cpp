#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


int singleNumber(vector<int> &nums){
     if(nums.size()==0) return -1;

     unordered_map<int,int> freqMap;
     //count the frequency of each number in the vector.

     for(int i=0;i<nums.size();i++){
        int num=nums[i];
        freqMap[num]++;
     }
     //iterate through the map and find the number with frequency 1.

     unordered_map<int,int> :: iterator it;
     int ans;
     
     //find the number with frequency 1 and return it as the unique number.
     for(it=freqMap.begin();it!=freqMap.end();it++){
         //get the key and value from the iterator.
         int key=it->first;
         int freq=it->second;
         
         //if the frequency is 1, return the key (which is the unique number).

         if (freq==1)
         {
        
            ans=key;
            break;
         }

       
         
     }
       return ans ;
}

int main(){
    vector<int> nums={2,2,1,1,3,3,4};
    int result=singleNumber(nums);

    cout<<"Single number is : "<<result<<endl;
    return 0;

 
}