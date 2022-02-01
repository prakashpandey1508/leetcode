class Solution {
public:
    bool containsDuplicate(vector<int>& nums)
    {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        bool ans=false;
        for(auto it:m)
        {
            if(it.second>=2)
            {
                ans=true;
                break;
            }
        }
        if(ans==true)
            return ans;
        else
            return false;
    }
};