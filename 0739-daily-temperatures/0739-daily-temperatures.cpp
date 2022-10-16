class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        stack<int>s;
        //s.push(0);
        int n=temperatures.size();
        int cnt=0;
        vector<int>ans;
        for(int i=n-1;i>=0;i--)
        {
            cnt=0;
            int currele=temperatures[i];
            while(!s.empty() && temperatures[s.top()]<=currele)
            {
                s.pop();
            }
            if(!s.empty())
            {
                ans.push_back(s.top()-i);
            }
            else
                ans.push_back(0);
            s.push(i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};