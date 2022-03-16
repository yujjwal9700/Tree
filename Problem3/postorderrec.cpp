#include<bits/stdc++.h>
struct TreeNode
{
   int val;
   TreeNode *left,*right;
};
class Solution {
public:
    std::vector<int>ans;
    void postorder_ite(TreeNode*root)
    {
       if(root==NULL)
            return ;
       std::stack<TreeNode*>st;
       TreeNode *temp;
       st.push(root);
       while(!st.empty())
       {
           temp=st.top();
           st.pop();
           if(temp->left!=NULL)
                  st.push(temp->left);
           if(temp->right!=NULL)
                st.push(temp->right);
           ans.push_back(temp->val);
       }
       reverse(ans.begin(),ans.end());
       
    }
    std::vector<int> postorderTraversal(TreeNode* root) {
         ans.clear();
         postorder_ite(root);
         return ans;
    }
};