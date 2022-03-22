#include<bits/stdc++.h>
struct TreeNode{
    int val;
    TreeNode *left,*right;
    TreeNode(int val=0,TreeNode* left=NULL,TreeNode* right=NULL)
    {
        this->val=val;
        this->left=left;
        this->right=right;
    }
};

class Solution {
public:
   std::vector<int> traversal;
    void left_boundary(TreeNode* root)
    {
        if(root==NULL)
              return ;
        if(root->left==NULL and root->right==NULL)
              return ;
        traversal.push_back(root->val);
        if(root->left!=NULL)
             left_boundary(root->left);
        else
             left_boundary(root->right);
    }
    void leaf_node(TreeNode* root)
    {
        if(root==NULL)
              return ;
        if(root->left==NULL and root->right==NULL)
        {
            traversal.push_back(root->val);
        }
        leaf_node(root->left);
        leaf_node(root->right);
    }
    void right_boundary(TreeNode* root)
    {
        if(root==NULL)
              return ;
        if(root->left==NULL and root->right==NULL)
              return ;
        if(root->right!=NULL)
              right_boundary(root->right);
        else
              right_boundary(root->left);
        traversal.push_back(root->val);
    }
    std::vector<int> boundaryOfBinaryTree(TreeNode* root) {
        traversal.clear();
        if(root==NULL)
             return traversal;
        traversal.push_back(root->val);
        left_boundary(root->left);
        leaf_node(root->left);
        leaf_node(root->right);
        right_boundary(root->right);
        return traversal;
    }
};