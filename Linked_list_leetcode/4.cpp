/*
https://leetcode.com/explore/interview/card/top-interview-questions-easy/93/linked-list/560/
reverse linked list
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head){
        if(head==NULL||head->next==NULL)
            return head;
        ListNode *prev=NULL;
        ListNode *curr=head;
        ListNode *succ=head->next;
        while(curr->next!=NULL)
        {
            curr->next=prev;
            prev=curr;
            curr=succ;
            succ=succ->next;
        }
        curr->next=prev;
        head=curr;
        return head;
        
        
    }
};