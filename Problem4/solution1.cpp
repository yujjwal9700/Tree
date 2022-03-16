#include<bits/stdc++.h>
struct TreeNode
{
    int val;
    TreeNode *left,*right;
};
class Solution {
public:
    std::vector<std::vector<int>>traversal;
    void level_traversal(TreeNode*root)
    {
        if(root==NULL)
              return ;
        std::queue<TreeNode*>pq;
        pq.push(root);
        int sz;
        std::vector<int>temp;
        TreeNode *cur_nd;
        while(!pq.empty())
        {
            sz=pq.size();
            temp.resize(sz,0);
            for(int i=0;i<sz;i++)
            {
                 cur_nd=pq.front();
                 pq.pop();
                 if(cur_nd->left!=NULL)
                       pq.push(cur_nd->left);
                 if(cur_nd->right!=NULL)
                       pq.push(cur_nd->right);
                 temp[i]=cur_nd->val;
            }
            traversal.push_back(temp);
        }
    }
    std::vector<std::vector<int>> levelOrder(TreeNode* root) {
        traversal.clear();
        level_traversal(root);
        return traversal;
    }
};