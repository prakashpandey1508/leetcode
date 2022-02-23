class Solution {
public:
    int lcs(string a, string b,int x, int y)
    {
        int dp[x+1][y+1];
        for(int i=0;i<x+1;i++)
            dp[0][i]=0;
        for(int i=0;i<y+1;i++)
            dp[i][0]=0;
        
        for(int i=1;i<x+1;i++)
        {
            for(int j=1;j<y+1;j++)
            {
                if(a[i-1]==b[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[x][y];
    }
    int longestPalindromeSubseq(string s) 
    {
        int x=s.size();
        string p="";
        for(int i=0;i<s.size();i++)
            p+=s[i];
        
        reverse(p.begin(),p.end());
        int y=p.size();
        return lcs(s,p,x,y);
    }
};