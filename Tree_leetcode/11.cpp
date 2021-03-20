/*
https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
Two Sum IV - Input is a BST
*/

class Solution
{
public:
    bool findTarget(TreeNode *root, int k)
    {

        if (root->left == NULL && root->right == NULL)
            return false;
        struct TreeNode *ptr = root;
        stack<TreeNode *> s;
        s.push(root);
        while (!s.empty())
        {
            ptr = s.top();
            if (search(k - ptr->val, root))
            {
                if (2 * ptr->val == k)
                    return false;
                else
                    return true;
            }
            s.pop();
            if (ptr->right)
                s.push(ptr->right);
            if (ptr->left)
                s.push(ptr->left);
        }
        return false;
    }
    bool search(int k, struct TreeNode *root)
    {
        struct TreeNode *ptr = root;
        while (ptr)
        {
            if (ptr->val == k)
            {
                if (ptr != root)
                    return true;
                else
                    return false;
            }
            else if (ptr->val > k)
            {
                ptr = ptr->left;
            }
            else
            {
                ptr = ptr->right;
            }
        }
        return false;
    }
};