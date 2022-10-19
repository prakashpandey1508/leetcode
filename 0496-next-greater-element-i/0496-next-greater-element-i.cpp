class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
    {
        stack<int>s;
        map<int,int>m;
        for(int i=nums2.size()-1;i>=0;i--)
        {
            while(!s.empty() && ((!s.empty())&& s.top()<nums2[i]))
            {
              s.pop();
            }
            if(!s.empty())
            {
                m[nums2[i]]=s.top();
            }
            else
                m[nums2[i]]=-1;
            s.push(nums2[i]);
        }
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            auto it=m.find(nums1[i]);
            if(it!=m.end())
            {
                ans.push_back(it->second);
            }
        }
        return ans;
    }
};