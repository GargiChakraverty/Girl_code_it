/*
https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/submissions/
lowest common ancestor of a binary search tree
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       if((root->val>=p->val)&&(root->val<=q->val))
           return root;
      if((root->val<=p->val)&&(root->val>=q->val))
            return root;
        TreeNode *ptr=(root->val>p->val)?root->left:root->right;
        while(ptr)
        {
            if((ptr->val==p->val)||(ptr->val==q->val))
               return ptr;
            if(((ptr->val>p->val)&&(ptr->val<q->val))||((ptr->val<p->val)&&(ptr->val>q->val)))
               return ptr;
             else if(ptr->val>p->val&&ptr->val>q->val)
               ptr=ptr->left;
            else
               ptr=ptr->right;
               
        }
        
        return root;    
    }
};