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
    ListNode* mergeNodes(ListNode* head)
    {
         ListNode *temp=head;
        vector<int>v;
        int cnt=0,sum=0;
        while(temp!=NULL)
        {
            if(temp->val==0)
            {
                cnt++;
               // cout<<cnt<<endl;
            }
             if(cnt!=2)
            {
                sum+=temp->val;
            }
             if(cnt==2)
            {
                cnt=1;
                v.push_back(sum);
                //cout<<sum<<endl;
                sum=0;
            }
            temp=temp->next;
        }
        ListNode *dummy=new ListNode(-1);
        ListNode *x=dummy;
        dummy->next=NULL;
        for(int i=0;i<v.size();i++)
        {
           // cout<<v[i]<<endl;
            ListNode *newvalue=new ListNode(v[i]);
            dummy->next=newvalue;
            dummy=dummy->next;
            dummy->next=NULL;
        }
        return x->next;
    }
};