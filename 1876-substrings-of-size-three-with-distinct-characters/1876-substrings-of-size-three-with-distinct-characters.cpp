class Solution {
public:
    int countGoodSubstrings(string s) 
    {
        int cnt=0;
        int n=s.size();
       for(int i=0;i<=n-3;i++)
       {
           int j=i;
           if(s[j]!=s[j+1] && s[j+1]!=s[j+2] && s[j]!=s[j+2])
               cnt++;
       }
        return cnt;
    }
};