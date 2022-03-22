from ast import List
from typing import Optional
class TreeNode:
     def __init__(self,val=0,left=None,right=None):
         self.val=val
         self.left=left
         self.right=right
class Solution:
    traversal=list()
    def left_boundary(root):
        if root is None or (root.left is None and root.right is None):
            return 
        Solution.traversal.append(root.val)
        if root.left is not None :
            Solution.left_boundary(root.left)
        else:
            Solution.left_boundary(root.right)
    def leaf_boundary(root):
        if root is None:
            return 
        if root.left is None and root.right is None:
            Solution.traversal.append(root.val)
            return 
        Solution.leaf_boundary(root.left)
        Solution.leaf_boundary(root.right)
    def right_boundary(root):
        if root is None or ( root.left is None and root.right is None):
            return 
        if root.right is not None:
            Solution.right_boundary(root.right)
        else:
            Solution.right_boundary(root.left)
        Solution.traversal.append(root.val)
            
    def boundaryOfBinaryTree(self, root: Optional[TreeNode]) -> List[int]:
        Solution.traversal.clear()
        if root is None:
            return Solution.traversal
        Solution.traversal.append(root.val)
        Solution.left_boundary(root.left)
        Solution.leaf_boundary(root.left)
        Solution.leaf_boundary(root.right)
        Solution.right_boundary(root.right)
        return Solution.traversal