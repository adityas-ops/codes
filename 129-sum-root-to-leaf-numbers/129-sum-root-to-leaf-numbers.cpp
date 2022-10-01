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
    int sum=0;
    void traverse(TreeNode* root ,int value){
        if(root==NULL){
            return;
        }
        value=value*10;
        value+=root->val;
        if(!root->left && !root->right){
            sum+=value;
        }
        
        traverse(root->left, value);
        traverse(root->right,value);
        
    }
    int sumNumbers(TreeNode* root) {
      traverse(root,0);
        return sum;
    }
};