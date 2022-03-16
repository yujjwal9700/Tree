class Solution {
    boolean flag;
    int find_depth(TreeNode root)
    {
        if(root==null)
              return 0;
        int left_depth = find_depth(root.left);
        int right_depth = find_depth(root.right);
        if(Math.abs(left_depth-right_depth)>1)
              flag=false;
        return 1 + Math.max(left_depth,right_depth);
    }
    public boolean isBalanced(TreeNode root) {
        flag = true;
        find_depth(root);
        return flag;
    }
}