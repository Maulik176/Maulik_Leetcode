class Solution {
public:    
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        long cur = 0;
        long pre = 1; 
        ans.emplace_back(pre);
        
        for(int r = 1; r <= rowIndex; r++) {
            cur = (pre * (rowIndex - r + 1))/r;
            ans.emplace_back(cur);
            pre = cur;
        }
        return ans;   
    }
};