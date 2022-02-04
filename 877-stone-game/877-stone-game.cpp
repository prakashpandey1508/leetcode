class Solution {
public:
    bool stoneGame(vector<int>& piles) 
    {
        int r=piles.size()-1;
        int l=0;
        int cntr=1;
        int alice=0;
        int bob=0;
        while(l<r)
        {
            if(cntr%2==1)
            {
                if(piles[l]>=piles[r])
                {
                    alice=alice+piles[l];
                    l++;
                    cntr++;
                }
                else
                {
                    alice=alice+piles[r];
                    r--;
                        cntr++;
                }
            }
            if(cntr%2==0)
            {
                if(piles[l]>=piles[r])
                {
                    bob=bob+piles[l];
                    l++;
                    cntr++;
                }
                else
                {
                    bob=bob+piles[r];
                    r--;
                    cntr++;
                } 
            }
        }
        return true;
    }
};