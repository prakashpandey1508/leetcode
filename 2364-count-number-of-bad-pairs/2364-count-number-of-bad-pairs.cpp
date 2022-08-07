class Solution {
public:
    long long countBadPairs(vector<int>& nums)
    {
        long long int n=nums.size();
        map<long long int,long long int>m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]-i]++;
        }
        long long int x=0;
        for(auto it:m)
        {
            x+=(it.second*(it.second-1))/2;
        }
        long long total=(n*(n-1))/2;
        long long int ans=total-x;
        return ans;
    }
    
};