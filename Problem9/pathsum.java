class Solution {
    int max_sum;
    public int maxPath(TreeNode root)
    {
        if(root==null)
              return  0;
        int left_sum=maxPath(root.left);
        int right_sum=maxPath(root.right);
        int val=root.val+Math.max(left_sum,Math.max(right_sum,Math.max(0,left_sum+right_sum)));
        max_sum=Math.max(max_sum,val);
        return root.val+Math.max(0,Math.max(left_sum,right_sum));
    }
    public int maxPathSum(TreeNode root) {
        max_sum=Integer.MIN_VALUE;
        maxPath(root);
        return max_sum;
    }
}