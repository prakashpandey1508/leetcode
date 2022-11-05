//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        Node* temp=head;
        Node* dummy=new Node(-1);
        Node* head1=dummy;
        while(temp!=NULL && k--)
        {
            dummy->next=temp;
           // cout<<dummy->data<<endl;
            temp=temp->next;
            dummy=dummy->next;
        }
        //cout<<temp->data<<endl;
        dummy->next=NULL;
       // cout<<dummy->data<<endl;
        
        if(temp==NULL)
        return head;
        else
        {
            Node* newhead=temp;
             Node*  temp1=newhead;
            while(newhead->next!=NULL)
            {
                newhead=newhead->next;
            }
         // dummy->next==NULL;
            newhead->next=head1->next;
           /* while(newhead!=NULL)
            {
                cout<<newhead->data<<endl;
                newhead=newhead->next;
            }*/
            return temp1;
        }
       // return head1->next;
        
    }
};
    


//{ Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}

// } Driver Code Ends