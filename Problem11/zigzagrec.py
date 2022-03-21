from ast import List
from typing import Optional
class TreeNode:
    def __init__(self,val=0,left=None,right=None) -> None:
        self.val=val
        self.left=left
        self.right=right
class Solution:
    ans=[]
    def zigzagrec(root,lev):
        if(root==None):
            return 
        if(len(Solution.ans)==lev):
            Solution.ans.append([])
        Solution.ans[lev].append(root.val)
        Solution.zigzagrec(root.left,lev+1)
        Solution.zigzagrec(root.right,lev+1)
    def zigzagLevelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        Solution.ans.clear()
        Solution.zigzagrec(root,0)
        for i in range(1,len(Solution.ans),2):
            Solution.ans[i].reverse()
        return Solution.ans