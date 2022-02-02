class Solution 
{
public:
     int dp[39]={-1};
   
    int tribonacci(int n) 
    {
     vector<long long int>dp(38,-1);
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        if(n<3)
            return dp[n];
        for(int i=3;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }
        return dp[n];
        
    }
};