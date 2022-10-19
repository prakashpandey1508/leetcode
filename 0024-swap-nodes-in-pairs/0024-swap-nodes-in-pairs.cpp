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
    ListNode* swapPairs(ListNode* head) 
    {
        if(head==NULL || head->next==NULL)
            return head;
      //  if(head->next->next!)
        ListNode* dummy=new ListNode(-1);
        ListNode* prev=dummy;
        ListNode* curr=head;
        prev->next=head;
        while(curr!=NULL && curr->next!=NULL)
        {
            prev->next=curr->next;
            curr->next=prev->next->next;
            prev->next->next=curr;
            
            prev=curr;
            curr=curr->next;
        }
        return dummy->next;
    }
};