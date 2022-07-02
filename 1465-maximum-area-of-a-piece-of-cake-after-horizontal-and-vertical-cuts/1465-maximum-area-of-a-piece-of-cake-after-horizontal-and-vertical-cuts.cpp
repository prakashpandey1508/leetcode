class Solution {
public:
    int maxArea(int h1, int w1, vector<int>& h, vector<int>& v)
    {
      int ans;
        h.push_back(0);
        h.push_back(h1);
        v.push_back(0);
        v.push_back(w1);
           sort(h.begin(),h.end());
            sort(v.begin(),v.end());
            int verti=0;
            int hori=0;
            for(int i=0;i<v.size()-1;i++)
            {
                verti=max(verti,v[i+1]-v[i]);
            }
            for(int i=0;i<h.size()-1;i++)
            {
                hori=max(hori,h[i+1]-h[i]);
            }
            //cout<<verti<<" "<<hori<<endl;
             ans=(1LL*hori*verti)%1000000007;
        
        return ans;
    }
};