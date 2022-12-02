class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n = word1.length(), m = word2.length();
        //Condition 1 - if length of both string is different
        if( n != m ){
            return false;
        }
        vector freq1(26,0), freq2(26,0);
        set<char> w1, w2;

        //Now calculating frequency of each character
        for(char i : word1){
            w1.insert(i);
            freq1[i - 'a']++;
        }

        for(char i : word2){
            w2.insert(i);
            freq2[i - 'a']++;
        }

        //sorting frequency array
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        return (w1 == w2) && (freq1 == freq2);
    }
};