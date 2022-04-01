class Solution {
public:
    int reductionOperations(vector<int>& nums) 
    {
       map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>>v;
        int l=0;
        
        for(auto it:mp)
        
        {
            v.push_back({it});
        }
        int r=v.size()-1;
        int ans=0;
        while(l<r)
        {
            ans+=((r-l)*v[r].second);
            r--;
        }
        return ans;
    }
};