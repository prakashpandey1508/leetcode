class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k)
    {
        int sz=nums.size();
         vector<int>v(sz,-1);
        int i=0;
        long long int sum=0;
        int index=k;
        for(int j=0;j<nums.size();j++)
        {
            sum=sum+nums[j];
           // cout<<sum<<endl;
            if(((j-i)/2)==k)
            {
                int avg=sum/(k*2+1);
               // cout<<"*"<<avg<<endl;
                 
               // cout<<"?"<<index<<endl;
                v[index]=avg;
                index++;
                sum=sum-nums[i];
                
                i++;
                //cout<<sum<<endl<<i<<endl<<j;
            }
        }
       // vector<int>v(ans,ans+nums.size());
        return v;
    }
};