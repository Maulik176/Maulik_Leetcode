class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int mono_inc = 1;
        int mono_dec = 1;
        for(int i=0; i<nums.size()-1;i++){
            if(nums[i]<=nums[i+1]) mono_inc++;
            if(nums[i]>=nums[i+1]) mono_dec++; 
        }
        if(mono_inc == nums.size() || mono_dec == nums.size()) return true;
        else return false;
    }
};