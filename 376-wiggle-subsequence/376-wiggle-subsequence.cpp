class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int x=1,y=1;
        for(int i=1; i<nums.size(); ++i){
                 if(nums[i]>nums[i-1])x=y+1;
            else if(nums[i]<nums[i-1])y=x+1;
        }
        return max(x ,y);
    }
};