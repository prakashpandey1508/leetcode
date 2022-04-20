class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int left=1;
        int right=1000000000;
        int mid,total=0;;
        while(left<right)
        {
            mid=left+(right-left)/2;
            total=0;
            for(int p:piles)
            {
                total+=(p+mid-1)/mid;
                
            }
            if(total>h)
                left=mid+1;
            else
                right=mid;
                
                
        }
        return left;
    }
    
};