class Solution {
public:
    string count (string str){
        stack<char>st;
        for(int i=0; i<str.size(); i++){
            if(str[i]=='#' && !st.empty())
                    st.pop();
            
            else if(str[i]=='#')
                continue;
            else
                st.push(str[i]);
        }
        
        string ans;
        
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        
        return ans;
        
    }
    
    
    bool backspaceCompare(string s, string t) {
        s=count(s);
        t=count(t);
        
        if(s==t)
            return true;
        
        return false;
        
    }
};