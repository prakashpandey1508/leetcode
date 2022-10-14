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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) 
    {
        ListNode* head1=list1;
        ListNode* head2=list2;
        ListNode* temp=list1;
        ListNode* temp1=list1;
        int x=a-1;
        while(x)
        {
            head1=head1->next;
            temp=temp->next;
            x--;
        }
        int y=b+1;
         while(y)
        {
            temp1=temp1->next;
            y--;
            
        }
        //head1=head1->next;
         temp->next=head2;
     while(head2!=NULL)
     {
         head2=head2->next;
         temp=temp->next;
     }
        temp->next=temp1;
        return list1;
        
        
    }
};