// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int>vp;
        vector<int>vn;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            vn.push_back(arr[i]);
            else
            vp.push_back(arr[i]);
        }
        for(int i=0;i<vn.size();i++)
        vp.push_back(vn[i]);
        
        for(int i=0;i<n;i++)
        arr[i]=vp[i];
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends