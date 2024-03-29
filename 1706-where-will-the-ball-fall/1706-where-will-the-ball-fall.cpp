class Solution {
public:
vector<int> findBall(vector<vector<int>>& grid) {
    int n = grid[0].size();
    vector<int> vec(n,-1);
    for(int ball=0;ball<grid[0].size();ball++)
    {
        int i=0,j=ball;
        while(j>=0 && j<grid[0].size())
        {
           //checking j+1 < grid[0].size() and j-1 >= 0. for index bound
            if(grid[i][j] == 1 && j+1<grid[0].size() && grid[i][j+1] == 1)
                i+=1,j+=1;
            else if(grid[i][j] == -1 && j-1>=0 && grid[i][j-1] == -1)
                i+=1,j-=1;
            else
                break;
            if(i>=grid.size())
            {
                vec[ball] = j;
                break;
            }    
        }
    }
    return vec;
}
};