class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int>nums;
        for(int i=0;i<nums2.size();i++)
        {
            nums.push_back(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++)
            nums.push_back(nums1[i]);
        sort(nums.begin(),nums.end());
        double ans;
        if(nums.size()%2==1)
        {
            int median=((nums.size()+1)/2);
             ans=nums[median-1];
        }
        if(nums.size()%2==0)
        {
            int median=(nums.size()/2);
            ans=((double)(nums[median-1]+nums[median]))/2.0;
        }
        return ans;
    }
};