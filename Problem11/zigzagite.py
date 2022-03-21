from ast import List
from logging.config import valid_ident
from typing import Optional
import collections
class TreeNode:
    def __init__(self,val=0,left=None,right=None) -> None:
        self.val=val
        self.left=left
        self.right=right
class Solution:
    def zigzagite(root)->List[List[int]]:
        ans=[]
        if(root==None):
            return ans
        dq=collections.deque()
        dq.append(root)
        val=1
        cur=None
        while len(dq)>0:
            sz=len(dq)
            temp=[]
            for i in range(0,sz):
                if val==1:
                    cur=dq[0]
                    dq.popleft()
                    if(cur.left!=None):
                         dq.append(cur.left)
                    if(cur.right!=None):
                        dq.append(cur.right)
                else:
                    cur=dq[-1]
                    dq.pop()
                    if(cur.right!=None):
                        dq.appendleft(cur.right)
                    if(cur.left!=None):
                        dq.appendleft(cur.left)
                temp.append(cur.val)
            ans.append(temp)
            val=1-val
        return ans
                        
                   
      
    def zigzagLevelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        return Solution.zigzagite(root)
       