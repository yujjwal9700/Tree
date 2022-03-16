public class TreeNode
{
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int val)
    {
        this.val=val;
        this.left=this.right=null;
    }
    TreeNode(int val,TreeNode left,TreeNode right)
    {
        this.val=val;
        this.left=left;
        this.right=right;
    }
}
class Solution {
    
    public int maxDepth(TreeNode root) {
        if(root==null)
            return 0;
        int left_depth=maxDepth(root.left);
        int right_depth=maxDepth(root.right);
        return 1+Math.max(left_depth,right_depth);
    }
}