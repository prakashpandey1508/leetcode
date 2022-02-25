class Solution {
public:
    bool static cmp(pair<int,int>&a,pair<int,int>&b)
    {
        return a.second<b.second;
    }
    int getKth(int lo, int hi, int k) 
    {
        int cnt=0;
        vector<pair<int,int>>vp;
          for(int i=lo;i<=hi;i++)
          {
              int cnt=0;
              int x=i;
              while(x!=1)
              {
                  if(x%2==0)
                  {
                      x=x/2;
                      cnt++;
                  }
                  else
                  {
                      x=3*x+1;
                      cnt++;
                  }
              }
              vp.push_back(make_pair(cnt,i));
              cnt=0;
          }
        sort(vp.begin(),vp.end());
        
        int ans=vp[k-1].second;
        return ans;
    }
};