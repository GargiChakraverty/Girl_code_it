
/*
preorder traversal of tree
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root){
        
        stack<TreeNode*> s;
        vector<int> v;
        if(root==NULL)
            return v;
        s.push(root);
        TreeNode *ptr;
        while(!s.empty())
        {
            ptr=s.top();
            v.push_back(ptr->val);
            s.pop();
            if(ptr->right)
                s.push(ptr->right);
            if(ptr->left)
                s.push(ptr->left);
         }
            
        return v;
            
      }
        
        

    
};