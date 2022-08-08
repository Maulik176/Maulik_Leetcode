class Solution {
public:
    void solve(vector<string> &ans , int n, int open, int close, string s){
        if(open == n && close == n){
            ans.push_back(s);
            return;
        }
        
        if(open < n){
            solve(ans, n, open+1,close, s+"(");
        }
        if(close < open){
            solve(ans, n, open,close+1, s+")");
        }
    }
    
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int open = 0;
        int close = 0;
        solve(ans, n, open, close, "");
        return ans;
    }
};