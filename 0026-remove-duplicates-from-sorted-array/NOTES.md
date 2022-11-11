class Solution {
public:
int removeDuplicates(vector<int>& nums) {
stack<int>st;
for(int i =0; i<nums.size(); i++){
if(!st.empty() && nums[i]==st.top()){
continue;
}
else
st.push(nums[i]);
}
int ans=st.size();
int j=st.size();
while(!st.empty()){
nums[j]=st.top();
cout<<st.top()<< " ";
cout<<nums[j]<<endl;
// cout<<st.top();
st.pop();
j--;
}
return ans;
}
};