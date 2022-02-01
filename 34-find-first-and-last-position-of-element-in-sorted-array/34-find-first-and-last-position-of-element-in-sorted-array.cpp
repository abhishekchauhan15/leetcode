class Solution {
public:
int first(vector<int>& v, int e){
     int ans=-1;

    int start=0;
    int end=v.size()-1;

    while(start<=end){
        int mid=start+(end-start)/2;
        if(e==v[mid]){
            ans=mid;
            end=mid-1;

        }
        else if(e<v[mid])
            end=mid-1;
        else
            start=mid+1;
    }

    return ans;
    
}
    
    int last(vector<int>& v, int e){
     int ans=-1;

    int start=0;
    int end=v.size()-1;

    while(start<=end){
        int mid=start+(end-start)/2;
        if(e==v[mid]){
            ans=mid;
            start=mid+1;

        }
        else if(e<v[mid])
            end=mid-1;
        else
            start=mid+1;
    }

    return ans;
    
}
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int f1=first( nums, target);
       int f2= last(nums, target);
        
        vector<int>v={f1, f2};
        
        return v;
        
        
    }
};