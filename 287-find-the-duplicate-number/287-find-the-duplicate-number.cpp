class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int i=nums[0];
        int j=nums[0];
        i=nums[i]; //i moves 1 step ahead
        j=nums[nums[j]]; //j moves 2 step ahead
        while(j!=i)
        {
            i=nums[i];
            j=nums[nums[j]];
        }
        i=nums[0];
        while(j!=i)
        {
            i=nums[i];
            j=nums[j];
        }
        return i;
    }
};