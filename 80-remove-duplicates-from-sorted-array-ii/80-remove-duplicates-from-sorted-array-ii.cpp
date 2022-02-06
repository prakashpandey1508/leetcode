class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        if(nums.size()<=2)
            return nums.size();
        int cnt=1;
        int index=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]==nums[i])
                cnt++;
            else 
                cnt=1;
            if(cnt<=2)
            {
                nums[index]=nums[i];
                index++;
            }
                
            
                
        }
        return index;
    }
};