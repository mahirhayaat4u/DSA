class Solution {
public:

void findFirst(vector<int>nums,int n,int target,int &ansindex){
    
        int size=nums.size();
        int s=0;
        int e=size-1;
        int mid=s+(e-s)/2;

        while(s<=e){
            if(target==nums[mid]){
                ansindex=mid;
                e=mid-1;
              
            }
           if(target>nums[mid]){
            s=mid+1;
           }
           if(target<nums[mid]){
            e=mid-1;
           }

           mid=s+(e-s)/2;
        }
}
void findLast(vector<int>nums,int n,int target,int &ansindex){
    
        int size=nums.size();
        int s=0;
        int e=size-1;
        int mid=s+(e-s)/2;

        while(s<=e){
            if(target==nums[mid]){
                ansindex=mid;
                s=mid+1;
              
            }
           if(target>nums[mid]){
            s=mid+1;
           }
           if(target<nums[mid]){
            e=mid-1;
           }

           mid=s+(e-s)/2;
        }
}
    vector<int> searchRange(vector<int>& nums, int target) {
         int size=nums.size();
         int firstOccur=-1;
         int lastOccur=-1;
         
        findFirst(nums,size,target ,firstOccur);
        findLast(nums,size,target ,lastOccur);

        vector<int>temp(2);
        temp[0]=firstOccur;
        temp[1]=lastOccur;

        return temp;

    }
};