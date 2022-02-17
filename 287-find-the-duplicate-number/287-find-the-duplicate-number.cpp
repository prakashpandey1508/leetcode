class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        int m[100001]={0};
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int ans;
        for(int i=1;i<=100001;i++)
        {
            if(m[i]>=2)
            {
                ans=i;
                break;
            }
        }
        return ans;
        
    }
};