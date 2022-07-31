class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int j=0; //check the missing number
        for(int i=0; i<n;i++){
            if(nums[i]!=j){
                return j;
            }
            j++;
        }
        return j; 
    }
};