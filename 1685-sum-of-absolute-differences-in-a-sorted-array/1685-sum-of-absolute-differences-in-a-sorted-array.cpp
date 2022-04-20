class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>vp(n);
        vector<int>vs(n);
        vp[0]=nums[0];
        for(int i=1;i<n;i++)
            vp[i]=(vp[i-1]+nums[i]);
        
        vs[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            vs[i]=vs[i+1]+nums[i];
        }
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            v[i]=nums[i]*(i+1)-vp[i];
            if(i!=n-1)
                v[i]+=vs[i+1]-nums[i]*(n-1-i);
        }
        return v;
        
            
    }
};