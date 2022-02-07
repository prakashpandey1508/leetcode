class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        map<int,int>::iterator it;
        int ans;
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second==1)
            {
                ans=it->first;
                break;
            }
        }
        return ans;
    }
};