class Solution {
public:
    int countOdds(int low, int high)
    {
        int x=(high-low);
        int ans;
        if(high%2==0 && low%2==0)
        {
             return x/2;
        }
        if(high%2==1 && low%2==1)
        {
            ans=(x/2)+1;
            return ans;
        }
        else
        {
            ans=(x/2)+1;
            return ans;
        }
        
    }
};