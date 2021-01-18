

/*
https://leetcode.com/explore/interview/card/top-interview-questions-easy/93/linked-list/771/
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
        ListNode *l3=NULL;
        if(l1==NULL&&l2==NULL)
            return l1;
        else if(l1==NULL)
            return l2;
        else if(l2==NULL)
            return l1;
        else
        {
            ListNode *temp1=l1;
            ListNode *temp2=l2;
            
            while(l1!=NULL&&l2!=NULL)
            {
                if(l1->val<l2->val)
                {
                    create(l3,l1->val);
                    l1=l1->next;
                }
                else if(l1->val>l2->val)
                {
                    create(l3,l2->val);
                    l2=l2->next;
                }
                else
                {
                    create(l3,l1->val);
                    create(l3,l2->val);
                    l1=l1->next;
                    l2=l2->next;
                }
            }
            while(l1!=NULL)
            {
                    create(l3,l1->val);
                    l1=l1->next; 
            }
            while(l2!=NULL)
            {
                   create(l3,l2->val);
                    l2=l2->next;
            }
        }
        
        return l3;
    }
    void create(ListNode* &head,int a)
    {   ListNode *x=new ListNode(a);
        if(head==NULL)
            head=x;
        else
        {
            ListNode *temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=x;
        }
            
    }
};