class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MIN;
        if(n==1) return 0;
        // if(n==2) ans = nums[1] - nums[0];
        sort(nums.begin(), nums.end());
        for(int i=1;i<n;i++){
            ans = max(ans, nums[i] - nums[i-1]);
        }
        return ans;
    }
};
