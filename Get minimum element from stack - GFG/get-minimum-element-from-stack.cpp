//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{

    stack<int> s1;
    int mini=INT_MAX;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           //Write your code here
            if(s1.empty())
                return -1;
            else
                return mini;
       }
       
       /*returns poped element from stack*/
       int pop(){
           
           //Write your code here
            if(s1.size()==0)
            return -1;
            int curr=s1.top();
            s1.pop();
             if(curr>mini)
            {
        
                return curr;
            }
            else
            {
                
                 int prevmini=mini;
                 int val=2*mini-curr;
                 mini=val;
                 return prevmini;
        
            }
           }
       
       /*push element x into the stack*/
       void push(int x)
       {
           
           //Write your code her
           if(s1.size()==0)
           {
               s1.push(x);
               mini=x;
               
           }
           else
           {
               if(x<mini)
               {
               int val=2*x-mini;
               mini=x;
               s1.push(val);
               }
               else
           {
               s1.push(x);
           }
           }
          
       }
};

//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}

// } Driver Code Ends