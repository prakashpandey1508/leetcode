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
    ListNode* middleNode(ListNode* head) 
    {
        ListNode* temp=head;
        int cnt=0;
        int mid;
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->next;
        }
        mid=cnt/2;
        temp=head;
        while(mid--)
        {
            temp=temp->next;
        }
        return temp;
    }
};