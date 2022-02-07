class Solution {
public:
    char findTheDifference(string s, string t)
    {
        map<char,int>m;
        for(int i=0;i<t.size();i++)
        {
            m[t[i]]++;
            m[s[i]]--;
        }
        char ans;
        for(auto it:m)
        {
            if(it.second==1)
            {
            ans=it.first;
            }
        }
        return ans;
    }
};