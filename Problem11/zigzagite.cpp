#include<bits/stdc++.h>
struct TreeNode
{
     int val;
     TreeNode *left,*right;
};

class Solution {
public:
    std::vector<std::vector<int>>ans;
    void levelorderite(TreeNode *root)
    {
        if(root==NULL)
             return ;
        int val=1,sz;
        std:: deque<TreeNode*>dq;
        TreeNode *cur;
        std::vector<int>temp;
        dq.push_front(root);
        while(!dq.empty())
        {
            sz=dq.size();
            temp.clear();
            for(int i=0;i<sz;i++)
            {
                if(val==1)
                {
                    cur=dq.front();
                    dq.pop_front();
                    if(cur->left!=NULL)
                           dq.push_back(cur->left);
                    if(cur->right!=NULL)
                           dq.push_back(cur->right);
                }
                else
                {
                    cur=dq.back();
                    dq.pop_back();
                    if(cur->right!=NULL)
                          dq.push_front(cur->right);
                    if(cur->left!=NULL)
                          dq.push_front(cur->left);
                }
                temp.push_back(cur->val);
            }
            ans.push_back(temp);
            val^=1;
            
        }
    }
    std::vector<std::vector<int>> zigzagLevelOrder(TreeNode* root) {
        ans.clear();
        levelorderite(root);
        return ans;
    }
};