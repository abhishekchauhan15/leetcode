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
    int maxDown(TreeNode* root, int &maxx){
         if (root==NULL)
            return 0;
        
        //if node is -ve then 0 is better than -ve number
       int left= max (0, maxDown(root->left, maxx));
       int right= max(0, maxDown(root->right, maxx));
        
        
        maxx=max(maxx, root->val + right+ left);
        
        
        return root->val+ max(right, left);
        
    }
    
   
    
    int maxPathSum(TreeNode* root) {
         int maxx=INT_MIN;
            
        maxDown(root, maxx);
        
        return maxx;
        
       
        
        
        
        
    }
};