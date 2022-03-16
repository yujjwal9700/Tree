#include<bits/stdc++.h>
struct TreeNode{
    int val;
    TreeNode *left,*right;
};
class Solution {
public:
    bool flag;
    int find_depth(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int left_depth=find_depth(root->left);
        int right_depth=find_depth(root->right);
        if(abs(left_depth-right_depth)>1)
              flag=false;
        return 1+std::max(left_depth,right_depth);
    }
    bool isBalanced(TreeNode* root) {
        flag=true;
        find_depth(root);
        return flag;
    }
};