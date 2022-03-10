class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
       vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back(make_pair(nums[i],i));
            
        }
        sort(v.begin(),v.end());
        int cnt=0;
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i].first==v[i+1].first)
            {
                if(abs(v[i].second-v[i+1].second)<=k)
                    cnt++;
            }
            if(cnt==1)
                break;
        }
        
        if(cnt==1)
            return true;
        else
            return false;
    }
};