class Solution {
public:
bool solve(vector<int>& weights, int &days, int &mid){
    int day = 1;
    int sum = 0;
    for(int i=0;i<weights.size();i++){
        sum += weights[i];
        if(sum > mid){
            day++;
            sum = weights[i];
        }
    }
    return day<=days;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int N = weights.size();
        int low = *max_element(weights.begin(), weights.end());
        int high = 0;
        for(int i=0;i<N;i++){
            high += weights[i];
        }
        while(low<=high){
            int mid = (low+high)/2;
            if(solve(weights, days, mid)){
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};