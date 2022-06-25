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
    vector<int> nextLargerNodes(ListNode* head) 
    {
        ListNode *temp=head;
        vector<int>ans;
        int x=0;
        while(temp!=NULL)
        {
            ListNode *temp1=temp->next;
            while(temp1!=NULL)
            {
                if(temp1->val>temp->val)
                {
                    ans.push_back(temp1->val);
                    x=1;
                    break;
                }
                temp1=temp1->next;
            }
            if(x==0)
            {
                ans.push_back(0);
                x=0;
            }
            x=0;
            temp=temp->next;
        }
       // ans.push_back(0);
        return ans;
        
    }
};