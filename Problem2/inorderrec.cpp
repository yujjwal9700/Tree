#include<bits/stdc++.h>
struct TreeNode {
   int val;
   TreeNode *left,*right;
};
class Solution {
public:
    std::vector<int>ans;
    void inorder_rec(TreeNode * root)
    {
        if(root==NULL)
            return ;
        inorder_rec(root->left);
        ans.push_back(root->val);
        inorder_rec(root->right);
    }
    std::vector<int> inorderTraversal(TreeNode* root) {
        ans.clear();
        inorder_rec(root);
        return ans;
    }
};