/*
https://leetcode.com/explore/interview/card/top-interview-questions-easy/93/linked-list/553/
Delete node in a linked list
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        
        ListNode *ptr=node;
        ListNode *prev;
        while(ptr->next!=NULL)
        {   prev=ptr;
            ptr->val=ptr->next->val;
            ptr=ptr->next;
        }
        prev->next=NULL;
    }
};