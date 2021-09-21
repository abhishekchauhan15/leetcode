class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>>st;
        vector<int>answer;
        
    
        for(int i=temperatures.size()-1; i>=0; i--){

            if(st.empty())
                answer.push_back(0);
            
            else if(st.size()>0 && st.top().first>temperatures[i])
                answer.push_back(st.top().second-i);
            
            else if(st.size()>0 && st.top().first<=temperatures[i]){
                while(st.size()>0 &&  st.top().first<=temperatures[i]){
                    st.pop();
                }
                
                if(st.size()==0)
                    answer.push_back(0);
                
                else
                    answer.push_back(st.top().second-i);
                
                }
                
            
            st.push({temperatures[i], i});
}

        reverse(answer.begin(), answer.end());
        return answer;
        
        
    }
};