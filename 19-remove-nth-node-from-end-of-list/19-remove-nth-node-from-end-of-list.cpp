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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int cnt=0;
        ListNode* temp=head;
        if(head==NULL || head->next==NULL)
            return NULL;
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->next;
        }
        if(cnt==n)
            return head->next;
        cout<<cnt<<endl;
        int starting=(cnt-n);
        cout<<starting<<endl;
        //cout<<starting<<endl;
        int i=1;
        temp=head;
        while(i<starting)
        {
            temp=temp->next;
            i++;
        }
        cout<<temp->val<<endl;
        temp->next=temp->next->next;
        return head;
    }
};