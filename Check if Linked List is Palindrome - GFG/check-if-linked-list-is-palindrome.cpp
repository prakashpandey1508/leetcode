//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
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
Node* rev(Node* slow)
{
    Node* prev=NULL;
    Node* curr=slow;
    Node* currnext=slow->next;
    while(curr!=NULL)
    {
        curr->next=prev;
        prev=curr;
        curr=currnext;
        if(currnext!=NULL)
        currnext=currnext->next;
    }
    return prev;
}
class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(head==NULL)
          return false;
          if(head->next==NULL)
          return true;
         Node* slow=head;
         Node* fast=head;
         while(fast->next!=NULL && fast->next->next!=NULL)
         {
             slow=slow->next;
             fast=fast->next->next;
         }
        slow->next= rev(slow->next);
        Node* start=head;
        Node* mid=slow->next;
        while(mid!=NULL)
        {
            if(mid->data!=start->data)
            return false;
            mid=mid->next;
            start=start->next;
        }
        slow->next= rev(slow->next);
        return true;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends