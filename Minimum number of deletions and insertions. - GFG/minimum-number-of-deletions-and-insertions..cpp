// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int minOperations(string str1, string str2) 
	{ 
	    int x=str1.size();
	    int y=str2.size();
	    int dp[x+1][y+1];
	    for(int i=0;i<x+1;i++)
	    dp[i][0]=0;
	    for(int i=0;i<y+1;i++)
	    dp[0][i]=0;
	    
	    for(int i=1;i<x+1;i++)
	    {
	        for(int j=1;j<y+1;j++)
	        {
	            if(str1[i-1]==str2[j-1])
	            {
	                dp[i][j]=1+dp[i-1][j-1];
	            }
	            else
	            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	        }
	    }
	    int len=dp[x][y];
	    
	    int del= x-len;
	    int ins=y-len;
	    int ans=ins+del;
	    return ans;
	    
	} 
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends