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
    void deleteNode(ListNode* node)
    {
       if(node->next==NULL)
           delete node;
        
        ListNode* temp1=node;
        ListNode* temp2=node->next;
        swap(temp1->val,temp2->val);
        ListNode* temp3=node->next;
        node->next=node->next->next;
        delete temp3;
    }
};