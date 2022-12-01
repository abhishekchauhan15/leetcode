class Solution {
public:
     bool isVowel(char c){
            if(c=='a' || c =='e' ||c=='i' || c=='o' || c=='u' )
                return true;
            if(c=='A' || c =='E' ||c=='I' || c=='O' || c=='U' )
                return true;
            
            return false;
    }
    
    
    
    bool halvesAreAlike(string s) {
        int start=0, end=s.size()-1;
        int count1=0 ,count2=0;
        
        
        while(start<end){
            if(isVowel(s[start])) count1++;
            
            if(isVowel(s[end])) count2++;
            
            start++;
            end--;
        }
        
        return count1==count2;
        
    }
};