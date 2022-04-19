class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int l=0;
        int r=nums.size()-1;
        int mid;
        vector<int>v;
        while(l<r)
        {
            if((nums[l]+nums[r])==target)
            {
                v.push_back(l+1);
                v.push_back(r+1);
                break;
            }
            if((nums[l]+nums[r])>target)
                r--;
            if((nums[l]+nums[r])<target)
                l++;
            
        }
        return v;
            
    }
};