class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int curr_sum = 0;
        int result = INT_MIN;
        for(int i=0; i<nums.size();i++){
            curr_sum += nums[i];
            if(curr_sum > result){
                result = curr_sum;
            }
            if(curr_sum < nums[i]){
                curr_sum = nums[i];
            }
            result = max(curr_sum,result);
        }
        return result;
    }
};