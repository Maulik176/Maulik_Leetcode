class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(count(nums.begin(), nums.end(), original) != 0){
                original*=2;
            }
        }
        return original;
    }
};