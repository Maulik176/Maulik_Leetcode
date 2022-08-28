class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> notzero;
        vector<int> zero;
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i]!=0) notzero.push_back(nums[i]);
            else zero.push_back(nums[i]);
        }
        
        nums.clear();
        nums.insert(nums.begin(), notzero.begin(), notzero.end());
        nums.insert(nums.end(), zero.begin(), zero.end());
        
    }
};