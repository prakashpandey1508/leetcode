class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
           int n=nums.size();
        if(n==1)
        {
            if(nums[0]==k)
                return 1;
            else
                return 0;
        }
            int currsum=0;
            map<int,int>m;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            currsum+=nums[i];
           
            if(currsum==k)
            {
                cnt++;
            }
            if(m.find(currsum-k)!=m.end())
            {
                cnt+=m[currsum-k];
                
            }
             m[currsum]++;
        }
        return cnt;
    }
};