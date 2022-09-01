/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int goodNodes(TreeNode root) {
        int count = 1;
        if(root == null){
            return 0;
        }
        count+= dfs(root.left,root.val);
        count+= dfs(root.right,root.val);
    
    return count;
}
    
  public  int dfs(TreeNode root, int MaxVal){
        if(root == null){
            return 0;
        }
        int a = 0;
        if(root.val>= MaxVal){
            a+=1;
            MaxVal = root.val;
        }
        a+=dfs(root.left,MaxVal);
        a+=dfs(root.right,MaxVal);
        return a;
    }

}