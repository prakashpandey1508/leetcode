class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) 
    {
        long long ans=0;
        if(cost1==cost2 && cost1>total) 
            return 1;
        else
        {
            if(cost1>=cost2)
            {
                int x=total/cost1;
                for(int i=0;i<=x;i++)
                {
                    
                        int x=(total-i*cost1);
                        int y=x/cost2;
                        ans+=y+1;
                    
                }
            }
            if(cost2>cost1)
            {
                 int x=total/cost2;
                for(int i=0;i<=x;i++)
                {
                
                        int x=(total-i*cost2);
                        int y=x/cost1;
                        ans+=y+1;
                    
                }
            }
        }
        return ans;
    }
};