class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        int x=n/3;
        vector<int>v;
        map<int,int>::iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second>x)
            {
                v.push_back(it->first);
            }
        }
        return v;
    }
};