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
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        
        if(root==NULL)
            return NULL;
        
        
        if(root->val==key){
             root=del(root);
            return root;
            
        }else{
            root->left=deleteNode(root->left, key);
            root->right= deleteNode(root->right, key);
        }
            
            return root;
    }
    
    TreeNode *del(TreeNode *root){
        if(root->left==NULL)
            return root->right;
        else if (root->right==NULL)
            return root->left;
        
        TreeNode * rig=root->right;    //7
        TreeNode *riglef=find(root->left);  //4
        
        
        riglef->right=rig;
        
        return root->left;
        
        
        
    }
    
    
    TreeNode *find(TreeNode *root){
        if(root->right==NULL)
            return root;
        
        
        
        return find(root->right);
    }
    
    
    
    
    
    
};