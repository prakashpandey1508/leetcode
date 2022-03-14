class Solution {
public:
    int subtractProductAndSum(int n)
    {
        int prd = 1, sum = 0;  
        while (n > 0){
            int dig = n % 10;
            prd *= dig;
            sum += dig;
            n = n / 10;
        }
        return (prd - sum);
    }
};