#include<bits/stdc++.h>
struct TreeNode
{
    int val;
    TreeNode *left,*right;
};
class Solution {
public:
    std::vector<int>ans;
    void postorder_rec(TreeNode*root)
    {
        if(root==NULL)
            return ;
        postorder_rec(root->left);
        postorder_rec(root->right);
        ans.push_back(root->val);
    }
    std::vector<int> postorderTraversal(TreeNode* root) {
         ans.clear();
         postorder_rec(root);
         return ans;
    }
};