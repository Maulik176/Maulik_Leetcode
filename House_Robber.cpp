class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int previous = 0;
        int current = 0;
        int ans = 0;

        for(int i=0;i<n;i++){
            ans = max(previous + nums[i], current);
            previous = current;
            current = ans;
        }
        return ans;

    }
};
