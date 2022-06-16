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
    ListNode* swapNodes(ListNode* head, int k)
    {
        ListNode *temp=head;
        if(head==NULL)
            return head;
        vector<int>mylist;
        while(temp!=NULL)
        {
            mylist.push_back(temp->val);
        temp=temp->next;
        }
        swap(mylist[k-1],mylist[mylist.size()-k]);
        temp=head;
        int cnt=0;
        while(temp!=NULL)
        {
            temp->val=mylist[cnt];
            cnt++;
            temp=temp->next;
        }
        return head;
    }
    
};