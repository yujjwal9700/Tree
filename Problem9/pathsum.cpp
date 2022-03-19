#include<bits/stdc++.h>
class TreeNode{
    public:
    int val;
    TreeNode *left,*right;
};
class Solution {
public:
    int max_val;
    int maxPath(TreeNode*root)
    {
        if(root==NULL)
             return 0;
        int left_sum=maxPath(root->left);
        int right_sum=maxPath(root->right);
        max_val=std::max(max_val,root->val+std::max({0,left_sum,right_sum,left_sum+right_sum}));
        return root->val+std::max({0,left_sum,right_sum});
    }
    int maxPathSum(TreeNode* root) {
        max_val=INT_MIN;
        maxPath(root);
        return max_val;
    }
};