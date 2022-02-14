class Solution {
public:
    int minSetSize(vector<int>& arr) 
    {
        map<int,int>m;
        for(int i=0;i<arr.size();i++)
            m[arr[i]]++;
        
        int x=arr.size()/2;
        map<int,int>::iterator it;
        vector<int>v;
        for(it=m.begin();it!=m.end();it++)
        {
           v.push_back(it->second);
        }
        sort(v.begin(),v.end(),greater<int>());
        int y=v.size();
        int a[y+1];
        a[0]=v[0];
        for(int i=1;i<y;i++)
        {
            a[i]=a[i-1]+v[i];
        }
        int ans;
        for(int i=0;i<y;i++)
        {
            if(a[i]>=x)
            {
                ans=i;
                break;
            }
        }
        return (ans+1);
        
    }
};