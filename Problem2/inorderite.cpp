#include<bits/stdc++.h>
struct TreeNode {
   int val;
   TreeNode *left,*right;
};
class Solution {
public:
    std::vector<int>ans;
    void inorder_ite(TreeNode * root)
    {
        if(root==NULL)
            return ;
        std::stack<TreeNode*>st;
        TreeNode *temp=root;
        while(!st.empty() or temp!=NULL)
        {
            while(temp!=NULL)
            {
                st.push(temp);
                temp=temp->left;
            }
            temp=st.top();
            st.pop();
            ans.push_back(temp->val);
            temp=temp->right;
        }
    }
    std::vector<int> inorderTraversal(TreeNode* root) {
        ans.clear();
        inorder_ite(root);
        return ans;
    }
};