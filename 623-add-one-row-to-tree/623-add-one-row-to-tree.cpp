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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1)   
        {
            TreeNode* newNode=new TreeNode(val);
            newNode->left=root;
            return newNode;
        }
        
        queue<pair<TreeNode*,int>> q;             // {node, currentLevel}
        q.push({root,1});
        
        while(!q.empty())
        {
            TreeNode* node = q.front().first;
            int level = q.front().second;
            q.pop();
            
            if(level!=depth-1)                 // normal level order
            {
                if(node->left)  
                    q.push({node->left, level+1});
                if(node->right)
                    q.push({node->right, level+1});
            }
            else                                // reached the previous level 
            {
                TreeNode* nodeleft = node->left;                       //storing left and right
                TreeNode* noderight = node->right;
                
                TreeNode* newLeft = new TreeNode(val);
                node->left = newLeft;
                newLeft->left = nodeleft;
                
                TreeNode* newRight = new TreeNode(val);
                node->right = newRight;
                newRight->right = noderight;
                
                q.push({newLeft, level+1});
                q.push({newRight, level+1});
            }
        }
        
        return root;
    }
};