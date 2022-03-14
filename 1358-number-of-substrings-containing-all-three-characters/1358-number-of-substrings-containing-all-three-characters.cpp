class Solution {
public:
    int numberOfSubstrings(string s) 
    {
        int n=s.size();
        int i=0;
        int j=0;
        int last=n-1;
        int ans=0;
        map<char,int>m;
        while(j!=n)
        {
            
                m[s[j]]++;
                //j++;
            while(m['a']>=1 && m['b']>=1 && m['c']>=1)
            {
                ans=ans+(last-j)+1;
                
                m[s[i]]--;
                i++;
            }
            j++;
        }
        return ans;
    }
};