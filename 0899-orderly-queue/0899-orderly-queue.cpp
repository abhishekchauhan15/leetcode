class Solution {
public:
    string orderlyQueue(string s, int k) {
        int n=s.size();
        string ans=s;
        
        if(k==1){
            string doublestr=s+s;
            for(int i =1; i<n; i++){
                string temp=doublestr.substr(i,n);
                ans=min(temp,ans); 
                
            }
            return ans;
        }
        
        sort(s.begin(), s.end());
        
        return s;
        
    }
};