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
     std::vector<int> preorderTraversal(TreeNode* root) {
        ans.clear();
        if(root==NULL)
          return ans;
        std::stack<TreeNode*>st;
        st.push(root);
        TreeNode *temp;
        while(!st.empty())
        {
            temp=st.top();
            st.pop();
            ans.push_back(temp->val);
            if(temp->right!=NULL)
               st.push(temp->right);
            if(temp->left!=NULL)
              st.push(temp->left);
        }
        return ans;

    }
};