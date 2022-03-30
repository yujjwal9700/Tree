#include<bits/stdc++.h>
int left_most,right_most;
std::vector<int>traversal;
std::vector<int>level;
template <typename T>
class TreeNode{
    public:
    T val;
    TreeNode<T> *left;
    TreeNode<T> *right;
    TreeNode(T val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void preorder(TreeNode<int> *root,int lev)
{
    if(root==NULL)
        return ;
    left_most=std::min(left_most,lev);
    right_most=std::max(right_most,lev);
    preorder(root->left,lev-1);
    preorder(root->right,lev+1);
}
void top_view(TreeNode<int> *root,int dig,int lev)
{
    if(root==NULL)
        return ;
    if(traversal[dig]==-1 or level[dig]>lev){
           traversal[dig]=root->val;
           level[dig]=lev;
    }
    top_view(root->left,dig-1,lev+1);
    top_view(root->right,dig+1,lev+1);
}
std::vector<int> getTopView(TreeNode<int> *root) {
    traversal.clear();
    level.clear();
    if(root==NULL)
         return traversal;
    left_most=right_most=0;
    preorder(root,0);
    traversal.resize(right_most+abs(left_most)+1,-1);
    level.resize(right_most+abs(left_most)+1,INT_MAX);
    top_view(root,abs(left_most),0);
    return traversal;
}