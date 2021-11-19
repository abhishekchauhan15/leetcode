/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
           vector<vector<int>>result;
          queue<TreeNode*>q;
        int flag=0;
        
        if(root)
            q.push(root);
        
        else 
            return result;
        
        
        while(!q.empty()){
            int size=q.size();
            vector<int>level;
            for(int i=0; i<size; i++){
                // vector<int>level;
                TreeNode *node=q.front();
                q.pop();
                
                level.push_back(node->val);
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                
                
            }
            
            if(flag!=0){
                reverse(level.begin(), level.end());
                 result.push_back(level);
                    flag=0;
            }
            else{
                flag=1;
                result.push_back(level);
                 
                
            }
                 
           
        
    }
        
        return result;
        
        
    }
};