#include<bits/stdc++.h>
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
std::vector<int> getTopView(TreeNode<int> *root) {
    std::vector<int>traversal;
    if(root==NULL)
        return traversal;
    int left_mostdig=0,right_mostdig=0;
    std::unordered_map<int,int>mp;
    std::queue<std::pair<int,TreeNode<int>*>>pq;
    pq.push({0,root});
    std::pair<int,TreeNode<int>*>temp;
    int sz;
    while(!pq.empty())
    {
        sz=pq.size();
        for(int i=0;i<sz;i++)
        {
            temp=pq.front();
            pq.pop();
            if(mp.find(temp.first)==mp.end())
                  mp[temp.first]=temp.second->val;
            if(temp.second->left!=NULL)
                  pq.push({temp.first-1,temp.second->left});
            if(temp.second->right!=NULL)
                  pq.push({temp.first+1,temp.second->right});
            left_mostdig=std::min(left_mostdig,temp.first);
            right_mostdig=std::max(right_mostdig,temp.first);
        }
    }
    for(int i=left_mostdig;i<=right_mostdig;i++)
          traversal.push_back(mp[i]);
    return traversal;
}