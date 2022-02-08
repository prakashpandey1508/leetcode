class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) 
    {
        int sum=0;
        target=abs(target);
        for(int i=0;i<nums.size();i++)
            sum=sum+nums[i];
        
        int sbsum=(target+sum)/2;
        int n=nums.size();
        int m=sbsum;
        int dp[n+1][m+1];
         
        
       for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= m; j++)
            {
                if(i == 0)
                    dp[i][j] = 0;
                if(j == 0)
                    dp[i][j] = 1;
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(nums[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j-nums[i-1]]+dp[i-1][j];
                }
                else 
                    dp[i][j]=dp[i-1][j];
            }
        }
         if(sum < target || (sum + target)%2 != 0)
            return 0;
        
        else
            return dp[n][m];
    }
};