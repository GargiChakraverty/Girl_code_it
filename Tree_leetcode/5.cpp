/*
symmetric tree 
https://leetcode.com/problems/symmetric-tree/solution/
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
    bool isSymmetric(TreeNode* root){
        return isMirror(root->left,root->right);
        }
    bool isMirror(TreeNode *n1,TreeNode *n2)
    {
        if(n1==NULL&&n2==NULL)
            return true;
        else if(n1==NULL||n2==NULL)
            return false;
        else
        {
            if(n1->val==n2->val)
               return(isMirror(n1->right,n2->left)&&isMirror(n1->left,n2->right));
            else
                return false;
        }
    }
};