class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start=0;
        int n=nums.size();
        int end=nums.size()-1;
        int ans=0;
        
        
         if(nums.size()==1)
             return 0;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(nums[mid]>nums[(mid+1)%n] && nums[mid]>nums[(mid-1+n)%n])
                return mid;
            
            else if(nums[mid]<nums[(mid+1)%n])
                start=mid+1;
            else
                end=mid-1;
            
        }
        return ans;
        
        
    }
};