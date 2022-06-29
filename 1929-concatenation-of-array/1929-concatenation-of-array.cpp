class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        for (int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
        } 
        for (auto &it : nums){
            ans.push_back(it);
        } 
        return ans ;
    }
};