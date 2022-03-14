class Solution {
public:
    double average(vector<int>& salary) 
    {
        int mn=INT_MAX;
        int mx=INT_MIN;
        long long int sum=0;
        for(int i=0;i<salary.size();i++)
        {
            mx=max(salary[i],mx);
            mn=min(salary[i],mn);
            sum+=salary[i];
            
        }
        int ans=(sum-(mx+mn));
        int size=salary.size()-2;
        double ans1=(double)ans/(double)size;
        return ans1;
    }
};