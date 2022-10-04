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

    void solve(TreeNode*root,int targetSum,bool &key){
        if(!root)return;
        
        targetSum-=root->val;
        
        if(!targetSum and !root->left and !root->right)
            key=true;
        
        solve(root->left,targetSum,key);
        solve(root->right,targetSum,key);
    }
    
    
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool key=false;
        solve(root,targetSum,key);
        return key;
    }
};