class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        if(n<0)
            return v;
        
       
        v.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++){
            v.push_back(nums[i]+v[i-1]);
        }
        return v;
        
    }
};