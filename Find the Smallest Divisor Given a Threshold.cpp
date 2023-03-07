class Solution {
public:
    int getSum(vector<int>& nums, int& mid){
        int sum = 0;
        for(int i=0; i<nums.size();i++){
            sum+= ceil(nums[i]*1.00/mid);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        while(low<=high){
            int mid = low + (high-low)/2;
            int res = getSum(nums,mid);
            if(res <= threshold){
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
