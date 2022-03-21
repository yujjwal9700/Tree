import java.util.*;
class TreeNode{
    int val;
    TreeNode left,right;
    TreeNode(int val)
    {
        this.val=val;
    }
    TreeNode(int val,TreeNode left,TreeNode right)
    {
        this.val=val;
        this.left=left;
        this.right=right;
    }
}
class Solution {
    List<List<Integer>> ans = new ArrayList<>();
    void zigzagrec(TreeNode root,int cur_lev){
        if(root==null)
              return ;
        if(cur_lev==ans.size())
            ans.add(new ArrayList<Integer>());
        ans.get(cur_lev).add(root.val);
        cur_lev++;
        zigzagrec(root.left,cur_lev);
        zigzagrec(root.right,cur_lev);
    }
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
     ans.clear();
     zigzagrec(root,0);
     for(int i=1;i<ans.size();i+=2)
     {
         Collections.reverse(ans.get(i));
     }
        return ans;
    }
}