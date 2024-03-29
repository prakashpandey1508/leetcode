//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        // code here
          unordered_map<int,int>mp;
          int cnt=0;
          int curr=0;
          for(int i=0;i<N;i++)
          {
              curr+=Arr[i];
              if(curr==k)
              cnt++;
              if(mp.find(curr-k)!=mp.end())
              {
                  cnt+=mp[curr-k];
              }
              mp[curr]++;
          }
          return cnt;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends