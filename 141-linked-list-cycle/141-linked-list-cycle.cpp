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
    bool hasCycle(ListNode *head) 
    {
         if(head==NULL)
             return false;
        if(head->next==NULL)
            return false;
       ListNode* temp=head;
        ListNode* slow=head;
        ListNode* fast=head;
        int ans=0;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                ans=1;
                break;
            }
        }
        if(ans==1)
            return true;
        else
            return false;
        
    }
};