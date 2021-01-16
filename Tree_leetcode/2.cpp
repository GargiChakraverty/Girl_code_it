/*
https://leetcode.com/explore/interview/card/top-interview-questions-easy/94/trees/625/
Validate BST
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
    bool isValidBST(TreeNode* root) {
     
    stack<TreeNode *> s; 
    TreeNode *curr = root;
    long long int prev_val=-2147483649;
  
    while (curr != NULL || s.empty() == false) 
    { 
        
        while (curr !=  NULL) 
        { 
            
            s.push(curr); 
            curr = curr->left; 
        } 
        curr = s.top(); 
        if(prev_val>=curr->val)
        {
            return false;
        }
        else
            prev_val=curr->val;
        s.pop(); 
        curr = curr->right; 
  
       }
         return true;
     } 
 
 };