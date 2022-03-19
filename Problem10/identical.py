from typing import Optional
class TreeNode:
    def __init__(self,val=0,left=None,right=None):
         self.val=val
         self.left=left
         self.right=right

class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        if (p==None and q==None):
            return True
        if (p==None or q==None or p.val!=q.val) :
            return False
        check_left=self.isSameTree(p.left,q.left)
        check_right=self.isSameTree(p.right,q.right)
        return check_left and check_right