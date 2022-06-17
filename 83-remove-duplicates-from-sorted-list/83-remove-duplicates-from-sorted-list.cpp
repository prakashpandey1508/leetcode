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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(head==NULL)
            return head;
         ListNode *temp=head;
        ListNode *p=head;
        ListNode *c=head->next;
        
        
            while(c!=NULL)
            {
                if(p->val==c->val)
                {
                    ListNode *tem=c;
                    p->next=c->next;
                    c=c->next;
                    delete tem;
                }
                else
                {
                    p=p->next;
                    c=c->next;
                }
            }
            return head;
        
    }
};