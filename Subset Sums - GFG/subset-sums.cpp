//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void subSet(vector<int>arr, int N, int indx, int sum, vector<int>&ans){
        if(indx==N){
            ans.push_back(sum);
            return;
        }
        
        
        //taking the element
        subSet(arr, N, indx+1, sum+arr[indx], ans);
        
        //not taking the element
        subSet(arr, N, indx+1, sum, ans);
        
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>ans;
        int indx=0;
        int sum=0;
        subSet(arr, N, indx, sum, ans);
        sort(ans.begin(), ans.end());
        
        return ans;
    }
    
    //TC:2^n + 2^n(log(2^n))
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends