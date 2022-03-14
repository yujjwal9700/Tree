#include<bits/stdc++.h>
struct TreeNode
{
     int val;
     TreeNode *left;
     TreeNode *right;
};
class Solution
{
     public:
     std::vector<int>ans;
     void preorder_trav(TreeNode *root)
     {
         if(root==NULL)
          return ;
        ans.push_back(root->val);
        preorder_trav(root->left);
        preorder_trav(root->right);
     }
     std::vector<int> preorderTraversal(TreeNode* root) {
        ans.clear();
        if(root==NULL)
          return ans;
        return ans;
       

    }
};