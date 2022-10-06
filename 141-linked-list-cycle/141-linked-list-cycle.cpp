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
        map<ListNode*,int>m;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            m[temp]++;
            cout<<temp<<endl;
            if(m[temp]>=2)
                return true;
            temp=temp->next;
        }
        return false;
        
    }
};