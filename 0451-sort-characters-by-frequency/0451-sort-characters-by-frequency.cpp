  class Solution {
  public:
  string frequencySort(string s) {
    vector<pair<int,char>>v;
    map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    for(auto i:mp){
        v.push_back({i.second,i.first});
    }

    sort(v.rbegin(),v.rend());
    string ans;
    for(auto i:v){
        for(int j=0;j<i.first;j++){
            ans+= i.second;
        }
    }
    return ans;
}
};