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
    ListNode *detectCycle(ListNode *head)
    {
         ListNode* slow=head;
        ListNode *fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                break;
        }
        ListNode *ptr1=head,*ptr2=slow;
        if(fast==NULL || fast->next==NULL)
        {
         return NULL;
            
        }
        while(ptr1!=ptr2)
            {
                ptr1=ptr1->next;
                ptr2=ptr2->next;
            }
        return ptr1;
        
    }
};