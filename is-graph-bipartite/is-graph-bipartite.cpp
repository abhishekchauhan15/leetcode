class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int v=graph.size();
        vector<int>color(v,-1);
        for(int i=0; i<v; i++){
            if(color[i]==-1){
                color[i]=0;
                if(!dfs(i, color, graph )) return false;
            }
        }
        return true;
        
    }
public:
    bool dfs(int node, vector<int>&color, vector<vector<int>>&graph){
      
        
        for(auto it : graph[node]){
            if(color[it]==-1){
                color[it]=1-color[node];
                if(!dfs(it, color, graph)) return false;
                
                
            }else if(color[node]==color[it])
                return false;
        }
    
        return true;
    }
};
