class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
    int n=nums.size();
     vector<int>v(n,-1);
    stack<int>s;
        

    for(int i=2*n-1; i>=0; i--){
        while(s.size()>0 && nums[i%n]>=s.top())
        s.pop();

        if(i<nums.size()){
            if(s.empty()==false)
                v[i]=s.top();
            
        }

        s.push(nums[i%n]);
    }
    return v;

  
        
    }
};