class Solution {
public:
    string count (string str){
        int i=str.size()-1;
        string ans;
         int backspace=0;
        
        while(i>=0){
           
            
            if(str[i]=='#')
                backspace++;
            
            else if(backspace==0)
                ans+=str[i];
            
                    
            else if(backspace>0)
                    backspace--;
                
            i--;
                  
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