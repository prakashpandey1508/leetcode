class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
       int sum=0;
        int i=0;
        vector<double>v;
        for(int j=0;j<nums.size();j++)
        {
            sum+=nums[j];
            if((j-i+1)==k)
            {
                double x=k;
                double ans=(sum/x);
                v.push_back(ans);
                sum=sum-nums[i];
                i++;
            }
        }
        double ans1=*max_element(v.begin(),v.end());
        return ans1;
    }
};