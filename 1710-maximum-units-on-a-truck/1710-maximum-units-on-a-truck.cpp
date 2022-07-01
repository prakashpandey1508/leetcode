class Solution {
public:
    bool static cmp(pair<int,int>&a,pair<int,int>&b)
    {
        return a.second>b.second;
    }
    int maximumUnits(vector<vector<int>>& b, int t) 
    {
         vector<pair<int,int>>vp;
        for(int i=0;i<b.size();i++)
        {
            vp.push_back({b[i][0],b[i][1]});
        }
        sort(vp.begin(),vp.end(),cmp);
        int ans=0;
        for(int i=0;i<vp.size();i++)
        {
           // cout<<vp[i].first<<" "<<vp[i].second<<endl;
            if(vp[i].first<t)
            {
                ans=ans+(vp[i].first*vp[i].second);
                t=t-vp[i].first;
            }
           else if(vp[i].first>=t && t!=0)
            {
                ans=ans+((t)*vp[i].second);
                t=0;
            }
        }
        return ans;
    }
};