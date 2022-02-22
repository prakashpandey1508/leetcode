class Solution {
public:
    int getMaximumGenerated(int n)
    {
        if(n==0)
            return 0;
        
        int num[n+1];
        num[0]=0;
        num[1]=1;
        int ans=(max(0,1));
        for(int i=2;i<=n;i++)
        {
            if(i%2==0)
            {
                num[i]=num[i/2];
                
            }
            else
            {
                int x=(i+1)/2;
                num[i]=num[x-1]+num[x];
            }
            ans=max(ans,num[i]);
        }
    
    return ans;
    }
};