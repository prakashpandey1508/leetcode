class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
      sort(nums.begin(),nums.end());
        set<int>s(nums.begin(),nums.end());
        vector<int>v;
        for(auto it:s)
        {
            v.push_back(it);
        }
        int ans;
        if(s.size()<3)
        {
            ans=nums[nums.size()-1];
        }
        else
            ans=v[v.size()-3];
        
        return ans;
    }
};