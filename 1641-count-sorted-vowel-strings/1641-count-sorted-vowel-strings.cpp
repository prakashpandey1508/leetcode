class Solution {
public:
    int countVowelStrings(int n) 
    {
        if(n<=2)
        {
            if(n==1)
                return 5;
            else
                return 15;
        }
         int dp[n+1][51];
        for(int i=0;i<6;i++)
        {
            dp[0][i]=0;
        }
        for(int i=0;i<n+1;i++)
        {
            dp[0][i]=0;
            
        }
        for(int i=1;i<6;i++)
            dp[1][i]=1;
        int x=5;
        
       int sum=5;
        for(int i=2;i<n+1;i++)
        {
            for(int j=1;j<6;j++)
            {
                if(j==1)
                {
                    dp[i][j]=sum;
                    
                }
                else
                {
                dp[i][j]=(dp[i][j-1]-dp[i-1][j-1]);
                    sum=sum+dp[i][j];
                }
            }
        }
//         int sum=0;
//         for(int j=1;j<6;j++)
//             sum=sum+dp[n][j];
        
        return sum;
    }
};