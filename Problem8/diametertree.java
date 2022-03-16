class Solution {
    int max_diam;
    public int find_diam(TreeNode root)
    {
        if(root==null)
              return 0;
        int left_diam=find_diam(root.left);
        int right_diam=find_diam(root.right);
        max_diam=Math.max(max_diam,left_diam+right_diam);
        return 1+Math.max(left_diam,right_diam);
    }
    public int diameterOfBinaryTree(TreeNode root) {
        max_diam=0;
        find_diam(root);
        return max_diam;
    }
}