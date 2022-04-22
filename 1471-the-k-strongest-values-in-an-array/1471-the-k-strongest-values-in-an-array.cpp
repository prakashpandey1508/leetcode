class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) 
    {
          int n=arr.size();
        int median=((n-1)/2);
        
        vector<int>v(arr.begin(),arr.end());
        sort(arr.begin(),arr.end());
        int mediann=arr[median];
        
        vector<pair<int,int>>vp;
        for(int i=0;i<v.size();i++)
        {
            vp.push_back({abs(v[i]-mediann),v[i]});
        }
        sort(vp.begin(),vp.end());
        vector<int>ans;
        int cnt=0;
        for(int i=vp.size()-1;i>=0;i--)
        {
            ans.push_back(vp[i].second);
            cnt++;
            if(cnt==k)
                break;
        }
        return ans;
        
    }
};