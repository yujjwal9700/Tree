class Solution {
    public boolean isSameTree(TreeNode p, TreeNode q) {
        if((p==null) && (q==null))
              return true;
        if((p==null) || (q==null) || (p.val!=q.val))
            return false;
        boolean check_left=isSameTree(p.left,q.left);
        boolean check_right=isSameTree(p.right,q.right);
        return (check_left && check_right);
    }
}