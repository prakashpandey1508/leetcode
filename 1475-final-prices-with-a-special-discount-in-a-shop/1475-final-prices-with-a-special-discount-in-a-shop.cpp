class Solution {
public:
    vector<int> finalPrices(vector<int>& prices)
    {
          stack<int>s;
        s.push(0);
        int n=prices.size();
        vector<int>ans;
        for(int i=n-1;i>=0;i--)
        {
            int curr=prices[i];
            while(s.top()>curr)
                s.pop();
            int x=curr-s.top();
            ans.push_back(x);
            s.push(curr);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};