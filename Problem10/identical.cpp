#include<bits/stdc++.h>
struct TreeNode
{
    int val;
    TreeNode *left,*right;
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL and q==NULL)
             return true;
        if(p==NULL or q==NULL or p->val!=q->val)
             return false;
        bool left_tree=isSameTree(p->left,q->left);
        bool right_tree=isSameTree(p->right,q->right);
        return left_tree and right_tree;
    }
};