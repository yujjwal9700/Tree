#include<bits/stdc++.h>
struct TreeNode
{
    int val;
    TreeNode *left, *right;
};

class Solution {
public:
    std::vector<std::vector<int>>traversal;
    void level_traversal(TreeNode*root,int level)
    {
        if(root==NULL)
            return ;
        if(level==traversal.size())
              traversal.push_back({});
        traversal[level].push_back(root->val);
        level++;
        level_traversal(root->left,level);
        level_traversal(root->right,level);
    }
    std::vector<std::vector<int>> levelOrder(TreeNode* root) {
        traversal.clear();
        level_traversal(root,0);
        return traversal;
    }
};