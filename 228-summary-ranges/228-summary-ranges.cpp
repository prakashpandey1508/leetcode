class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums)
    {
         vector<string>ans;
        int n=nums.size();
        if(n<=1)
        {
            if(n==0)
                return ans;
            else
            {
                ans.push_back(to_string(nums[0]));
                return ans;
            }
        }
            
          long long int a=nums[0]; 
        
        long long int b;
        for(int i=0;i<n-1;i++)
        {
            if(abs((long long int)(nums[i+1])-(long long int)nums[i])>=2)
            {
                b=nums[i];
                if(a==b)
                {
                    string x="";
                        x=to_string(a);
                    ans.push_back(x);
                    a=nums[i+1];
                }
                else
                {
                    string s="";
                    s=to_string(a)+"->"+to_string(b);
                    ans.push_back(s);
                    a=nums[i+1];
                    
                }
                
                
                
                
            }
        }
        if(nums[n-1]==a)
        {
         string x="";
                        x=to_string(a);
                    ans.push_back(x);   
        }
        else
        {
            long long int b=nums[n-1];
            string s="";
                    s=to_string(a)+"->"+to_string(b);
                    ans.push_back(s);
                    
        }
        return ans;
    }
};