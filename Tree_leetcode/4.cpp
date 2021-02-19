/*
inorder traversal of tree
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
    vector<int> inorderTraversal(TreeNode* root){
       
        TreeNode *ptr=root;
        stack<TreeNode*> s;
        vector<int> v;
         if(root==NULL)
            return v;
        
        while(true)
        {
            while(ptr)
            { 
              s.push(ptr);
              ptr=ptr->left;  
            }
            if(s.empty())
                break;
            else
            {
                v.push_back(s.top()->val);
                ptr=s.top()->right;
                s.pop();
            }
                
        }        
    return v;
        
    }
};