/*
https://leetcode.com/explore/interview/card/top-interview-questions-easy/94/trees/555/
Maximum depth of binary tree
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
    int maxDepth(TreeNode* root){
        if(root==NULL)
            return 0;
        int l=maxDepth(root->left);
        int u=maxDepth(root->right);
        if(l>u)
            return l+1;
        else
            return u+1;
        
    }
};
