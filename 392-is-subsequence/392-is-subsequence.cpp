class Solution {
public:
    bool isSubsequence(string s, string t)
    {
        int x=s.size();
        int y=t.size();
       int dp[x+1][y+1];
        for(int i=0;i<x+1;i++)
            dp[i][0]=0;
        for(int i=0;i<y+1;i++)
            dp[0][i]=0;
        for(int i=1;i<x+1;i++)
        {
            for(int j=1;j<y+1;j++)
            {
                if(s[i-1]==t[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        int ans=dp[x][y];
        if(ans==s.size())
            return true;
        else
            return false;
    }
};