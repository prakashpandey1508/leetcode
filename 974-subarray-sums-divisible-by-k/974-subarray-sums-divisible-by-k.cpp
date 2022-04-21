class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k)
    {
          int n=nums.size();
          int prefix;
        prefix=0;
        map<int,int>m;
        m[prefix]++;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            prefix+=nums[i];
            int rem=prefix%k;
            
            if(rem<0)
                rem+=k;
            if(m.count(rem)>0)
            {
                ans+=m[rem];
            }
            m[rem]++;
        }
        return ans;
    }
};