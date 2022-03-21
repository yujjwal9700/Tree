#include<bits/stdc++.h>
struct TreeNode
{
    int val;
    TreeNode *left,*right;
};

class Solution {
public:
    std::vector<std::vector<int>>ans;
    void level_orderrec(TreeNode*root,int lev)
    {
        if(root==NULL)
              return ;
        if(lev==ans.size())
               ans.push_back({});
        ans[lev].push_back(root->val);
        level_orderrec(root->left,lev+1);
        level_orderrec(root->right,lev+1);
    }
        
    std::vector<std::vector<int>> zigzagLevelOrder(TreeNode* root) {
        ans.clear();
        level_orderrec(root,0);
        for(int i=1;i<ans.size();i+=2)
             std::reverse(ans[i].begin(),ans[i].end());
        return ans;
        
    }
};