class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) 
    {
        map<int,int>um;
        for(int i=0;i<nums.size();i++)
        {
            um[nums[i]]++;
        }
        list<int>l{};
        vector<int>v;
        map<int,int>::iterator it;
        it=um.find(pivot);
            if(it!=um.end())
            {
                for(int i=0;i<it->second;i++)
                    l.push_front(pivot);
            }
         
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>pivot)
                l.push_back(nums[i]);
            if(nums[i]<pivot)
                v.push_back(nums[i]);
        }
         
        for(int i=v.size()-1;i>=0;i--)
            l.push_front(v[i]);
        
        vector<int>ans;
        for (auto it = l.begin(); it != l.end(); ++it)
            ans.push_back(*it);
        return ans;
        
        
    }
};