#include<bits/stdc++.h>
struct TreeNode
{
    int val;
    TreeNode *left, *right;
};

class Solution {
public:
    int max_diam;
    int find_diam(TreeNode *root)
    {
        if(root==NULL)
              return 0;
        int left_diam=find_diam(root->left);
        int right_diam=find_diam(root->right);
        max_diam=std::max(max_diam,left_diam+right_diam);
        return 1+std::max(left_diam,right_diam);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        max_diam=0;
        find_diam(root);
        return max_diam;
    }
};