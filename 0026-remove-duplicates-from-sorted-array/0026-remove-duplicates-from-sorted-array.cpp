class Solution {
     public:
int removeDuplicates(vector<int>& nums) {
    auto itWrite = nums.begin();
    auto itRead = nums.cbegin();
    while(true){
        *itWrite = *itRead;
        do{
            itRead++;
            if(itRead == nums.cend())return distance(nums.begin(), itWrite)+1;
        }while(*itRead == *itWrite);//skip over all itReads that hold the same value as the last written value. 
        *itWrite++;
    }
}
};
