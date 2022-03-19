from sys import last_value
from typing import Optional
class TreeNode:
    def __init__(self,val=-1,left=None,right=None):
        self.val=val
        self.left=left
        self.right=right
class Solution:
    max_val=0
    def maxPath(root)->int:
        if(root==None):
            return 0
        left_sum=Solution.maxPath(root.left)
        right_sum=Solution.maxPath(root.right)
        Solution.max_val=max(Solution.max_val,root.val+max(left_sum,right_sum,0,left_sum+right_sum))
        return root.val+max(left_sum,right_sum,0)

    def maxPathSum(self, root: Optional[TreeNode]) -> int:
        Solution.max_val=pow(10,8)*-1
        Solution.maxPath(root)
        return Solution.max_val