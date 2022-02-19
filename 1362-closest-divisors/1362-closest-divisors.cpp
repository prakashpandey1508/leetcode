class Solution {
public:
    vector<int> closestDivisors(int num)
    {
      vector<vector<int>>v;
        int x=num+1;
        int k=0;
        for(int i=1;i*i<=x;i++)
        {
            if(x%i==0)
            {
                vector<int>v2;
                v2.push_back(i);
                 v2.push_back(x/i);
                 v2.push_back(abs(i-(x/i)));
                v.push_back(v2);
            }
        }
        int y=num+2;
        for(int i=1;i*i<=y;i++)
        {
            if(y%i==0)
            {
                vector<int>v2;
                v2.push_back(i);
                 v2.push_back(y/i);
                 v2.push_back(abs(i-(y/i)));
                v.push_back(v2);
            }
        }
        
        
        int n=v.size();
        // for(int i=0;i<n;i++)
        // {
        //     cout<<v[i][2]<<endl;
        // }
        int z=INT_MAX;
        int ans;
        for(int i=0;i<n;i++)
        {
            if(v[i][2]<=z)
            {
                z=v[i][2];
                ans=i;
            }
        }
       // cout<<ans<<endl;
        vector<int>v1;
        v1.push_back(v[ans][0]);
            v1.push_back(v[ans][1]);
        
        return v1;
        
    }
};