class Solution {
public:
    int search(vector<int>& nums, int target) {

        int size=nums.size();
        int s=0;
        int e=size-1;
       
        while(s<=e){
             int mid=s+(e-s)/2;
           if(nums[mid]==target){
            return mid;
           }

           if(target>nums[mid]){
            s=mid+1;
           }

           if(target<nums[mid]){
            e=mid-1;
           }

          //mid=(s+e)/2;


        }

        return -1;
        
    }
};