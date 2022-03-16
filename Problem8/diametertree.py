from typing import Optional
class Solution:
    max_diam=0
    def find_diameter(root) -> int:
        if root is None:
            return 0
        left_diam=Solution.find_diameter(root.left)
        right_diam=Solution.find_diameter(root.right)
        Solution.max_diam=max(Solution.max_diam,left_diam+right_diam)
        return 1+max(left_diam,right_diam)
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        Solution.max_diam=0
        Solution.find_diameter(root)
        return Solution.max_diam
        