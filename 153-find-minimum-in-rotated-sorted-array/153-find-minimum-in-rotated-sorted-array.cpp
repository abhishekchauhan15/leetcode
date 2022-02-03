class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0;
        int n=nums.size();
        int end=n-1;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(nums[mid]<=nums[(mid+1)%n] && nums[mid]<=nums[(mid-1+n)%n])
                return nums[mid];
                
                
             if(nums[mid]>=nums[end])
                    start=mid+1;
            else
                end=mid-1;
        }
        return -1;
        
        
    }
};