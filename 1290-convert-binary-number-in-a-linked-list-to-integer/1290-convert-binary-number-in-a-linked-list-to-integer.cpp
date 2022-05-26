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
    int getDecimalValue(ListNode* head) 
    {
        ListNode* temp=head;
        string s;
        while(temp!=NULL)
        {
            s+=to_string(temp->val);
            temp=temp->next;
        }
        int x=0;
        int num=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            cout<<s[i]<<" ";
            num=num+(((s[i]-'0'))*pow(2,x));
            x++;
        }
        return num;
    }
};