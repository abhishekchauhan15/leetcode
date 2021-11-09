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
    int diameterOfBinaryTree(TreeNode* root) {
        int maxx=0;
        height(root, maxx);
        
        return maxx;

        
    }
    
    int height(TreeNode* root, int &maxx){
        if(root==NULL) return 0;
        
      int lh=  height(root->left, maxx);
      int rh=  height(root->right, maxx);
        
        maxx=max(maxx, lh+rh);
        
        return max(lh, rh)+1;
    }
};