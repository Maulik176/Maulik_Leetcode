class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int major_element = nums.size()/2;
        return nums[major_element];
    } 
};