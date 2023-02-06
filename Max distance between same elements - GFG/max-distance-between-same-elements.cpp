//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
        unordered_map<int, int>dist;
        
        int maxDist=0;
        
        for(int i =0;i<n; i++){
            
            if(dist.find(arr[i])!=dist.end())
                maxDist=max(maxDist, i- dist[arr[i]]);
            
            else
                dist[arr[i]]=i;
        }
        
        return maxDist;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.maxDistance(arr,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends