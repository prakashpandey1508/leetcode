class Solution 
{
    private:
     vector<int> next(vector<int>arr,int n)
    {
        stack<int>s;
        s.push(-1);
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--)
        {
            int x=arr[i];
            while(s.top()!=-1 && x<=arr[s.top()])
            {
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
         return ans;
    }
     vector<int> prev(vector<int>arr,int n)
    {
        stack<int>s;
        s.push(-1);
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            int x=arr[i];
            while(s.top()!=-1 && x<=arr[s.top()])
            {
                s.pop();
            }
            ans[i]=s.top();
            
            s.push(i);
        }
         return ans;
    }
public:
    int largestRectangleArea(vector<int>& h) 
    {
        int n=h.size();
        vector<int>nextsmaller(n);
        nextsmaller=next(h,n);
        vector<int>prevsmaller(n);
        prevsmaller=prev(h,n);
        int mx=0;
        for(int i=0;i<n;i++)
        {
            if(nextsmaller[i]==-1)
                nextsmaller[i]=n;
            int w=nextsmaller[i]-prevsmaller[i]-1;
            int ans=w*h[i];
            mx=max(ans,mx);
            
        }
        return mx;
        
        
    }
};