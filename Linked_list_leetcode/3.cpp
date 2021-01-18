/*
Remove nth node from end of linked list.
https://leetcode.com/explore/interview/card/top-interview-questions-easy/93/linked-list/603/
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
    ListNode* removeNthFromEnd(ListNode* head, int n){
        
        ListNode *temp=head;
        int count=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        if(count<n)
            return head;
        else if(count==n)
        { head=head->next;
         return head;
        }
        else{
        int c=1;
        temp=head;
        while(c<=(count-n-1))
        {
           temp=temp->next; 
            c++;
        }
        temp->next=temp->next->next;}
        
        return head;
       
    }
};