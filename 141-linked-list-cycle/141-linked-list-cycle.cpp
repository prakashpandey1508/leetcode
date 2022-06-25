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
       ListNode* temp=head;
        map<ListNode*,int>m;
        int ans=0;
        while(temp!=NULL)
        {
            m[temp]++;
            temp=temp->next;
            if(m[temp]>=2)
            {
                ans=1;
                break;
            }
        }
        // map<ListNode*,int>::iterator it;
        // int ans=0;
        // for(it=m.begin();it!=m.end();it++)
        // {
        //     cout<<it->first<<it->second<<endl;
        //     if(it->second>=2)
        //     {
        //         ans=1;
        //         break;
        //     }
        // }
        if(ans==1)
            return true;
        else
            return false;
        
    }
};