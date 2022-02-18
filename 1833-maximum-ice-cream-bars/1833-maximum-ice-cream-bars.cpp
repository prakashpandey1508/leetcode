class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins)
    {
         long long int sum=0;
         long int cnt=0;
        sort(costs.begin(),costs.end());
        for(int i=0;i<costs.size();i++)
        {
             sum=sum+costs[i];
            if(sum<=coins)
            {
                cnt++;
            }
        
        }
        if(cnt==0)
            return 0;
        else
            return cnt;
    }
    
};