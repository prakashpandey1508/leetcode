class Solution {
public:
    bool static cmp(pair<string,int> a,pair<string,int> b)
    {
        if(a.second>b.second || (a.second==b.second && a.first<b.first))
            return true;
        else
            return false;
    }
    vector<string> topKFrequent(vector<string>& words, int k) 
    {
        map<string,int>m;
       for(int i=0;i<words.size();i++)
       {
           m[words[i]]++;
       }
        vector<pair<string,int>>v;
        for(auto it: m)
        {
            v.push_back(make_pair(it.first,it.second));
        }
        sort(v.begin(),v.end(),cmp);
        vector<string>ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].first);
            
        }
        return ans;
        
    }
};