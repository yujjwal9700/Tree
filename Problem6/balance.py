from typing import Optional
class Solution:
    flag=True
    def find_depth(root)->int :
        if root is None:
            return 0
        left_depth=Solution.find_depth(root.left)
        right_depth=Solution.find_depth(root.right)
        if abs(left_depth-right_depth)>1 :
             Solution.flag=False
        return 1+max(left_depth,right_depth)
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        Solution.flag=True
        Solution.find_depth(root)
        return Solution.flag