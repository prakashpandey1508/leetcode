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
    ListNode* reverse(ListNode* slow)
    {
        if(slow==NULL)
            return NULL;
        ListNode *p=NULL,*c=slow,*n=slow->next;
        while(c!=NULL)
        {
            c->next=p;
            p=c;
            c=n;
            if(n!=NULL)
                n=n->next;
        }
        return p;
    }
    bool isPalindrome(ListNode* head)
    {
         ListNode *slow=head;
        ListNode *fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);
        ListNode *start=head;
        ListNode *mid=slow->next;
        while(mid!=NULL)
        {
            if(start->val!=mid->val)
                return false;
            start=start->next;
            mid=mid->next;
        }
        slow->next=reverse(slow->next);
        return true;
        
    }
};