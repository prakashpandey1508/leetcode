class Solution {
public:
    int lcs(vector<int>&nums,vector<int>&v,int x,int y)
    {
        int dp[x+1][y+1];
        for(int i=0;i<x;i++)
            dp[i][0]=0;
        for(int i=0;i<y;i++)
            dp[0][i]=0;
        
        for(int i=1;i<x+1;i++)
        {
            for(int j=1;j<y+1;j++)
            {
                if(nums[i-1]==v[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                
            }
            
        }
        return dp[x][y];
    }
    int lengthOfLIS(vector<int>& nums) 
    {
        int n=nums.size();
        set<int>s;
        for(int i=0;i<n;i++)
            s.insert(nums[i]);
        
        vector<int>v1;
        set<int>::iterator it;
        for(it=s.begin();it!=s.end();it++)
            v1.push_back(*it);
        
        int m=s.size();
        return lcs(nums,v1,n,m);
            
        
    }
};