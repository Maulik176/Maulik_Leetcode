class Solution {
public:
    int largestAltitude(vector<int>& gain) {
    int start = 0 , mx = 0;
    for(int i : gain){
        start += i;
        mx = max(mx , start);
    }
    return mx;
}
        
    
};