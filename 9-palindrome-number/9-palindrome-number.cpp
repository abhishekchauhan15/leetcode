class Solution {
public:
    bool isPalindrome(int n) {
       long long int rev=0;
        long long on=n;
        long long int rem;
        
        while(n!=0){
            rem=n%10;
            rev=rev*10+ rem;
            n/=10;
        }
        
        if(rev==on && rev>=0)
            return true;
        else
            return false;
        
    }
};