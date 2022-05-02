class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
       int start=0, next=start+1;
        
        
        
        if(nums.size()==0)
            return nums;
        
        while(next<=nums.size()-1){
            //odd even
            if(nums[start]%2!=0 && nums[next]%2==0){
                swap(nums[start], nums[next]);
                start++;
                next++;
                
            }
            //odd odd 
            else if(nums[start]%2!=0 && nums[next]%2!=0){
                next++;
                
            }
             //even odd && even even 
            else{
                start++;
                next++;
                
            }
            
        }
        return nums;
        
    }
};