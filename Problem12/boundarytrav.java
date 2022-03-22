import java.util.LinkedList;
import java.util.List;

class Solution {
    List<Integer>traversal=new LinkedList<>();
    public void left_boundary(TreeNode cur_node){
        if((cur_node==null) || ((cur_node.left==null) && (cur_node.right==null)))
             return ;
        traversal.add(cur_node.val);
        if(cur_node.left!=null)
             left_boundary(cur_node.left);
        else
              left_boundary(cur_node.right);
    }
    public void leaf_boundary(TreeNode cur_node)
    {
        if(cur_node==null)
             return ;
        if((cur_node.left==null) && (cur_node.right==null))
        {
            traversal.add(cur_node.val);
            return ;
        }
        leaf_boundary(cur_node.left);
        leaf_boundary(cur_node.right);
    }
    public void right_boundary(TreeNode cur_node)
    {
        if((cur_node==null) || ((cur_node.left==null) && (cur_node.right==null)))
              return;
         if(cur_node.right!=null)
               right_boundary(cur_node.right);
         else
               right_boundary(cur_node.left);
        traversal.add(cur_node.val);
    }
    public List<Integer> boundaryOfBinaryTree(TreeNode root) {
        traversal.clear();
        if(root==null)
            return traversal;
        traversal.add(root.val);
        left_boundary(root.left);
        leaf_boundary(root.left);
        leaf_boundary(root.right);
        right_boundary(root.right);
        return traversal;
    }
}