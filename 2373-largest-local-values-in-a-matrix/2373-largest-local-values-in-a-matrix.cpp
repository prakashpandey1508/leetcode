class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) 
    {
        int n=grid.size();
            vector<vector<int>>v(n-2,vector<int>(n-2));
        for(int i=0;i<n-2;i++)
        {
            for(int j=0;j<n-2;j++)
            {
                for(int ai=i;ai<i+3;ai++)
                {
                    for(int aj=j;aj<j+3;aj++)
                    {
                        v[i][j]=max(v[i][j],grid[ai][aj]);
                    }
                }
            }
        }
        return v;
    }
};