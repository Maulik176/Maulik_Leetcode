class Solution {
public:
    int solve(vector<vector<int>>& matrix, vector<vector<int>>& dp, int i, int j){
        if(i >= matrix.size() || j < 0 || j >= matrix[0].size()){
            return 10001;
        }
        if(matrix.size()-1 == i){
            return matrix[i][j];
        }

        if (dp[i][j] != 10001) {
            return dp[i][j];
        }
        
        int ld = matrix[i][j] + solve(matrix,dp,i+1,j-1);
        int d = matrix[i][j] + solve(matrix,dp,i+1,j);
        int rd = matrix[i][j] + solve(matrix,dp,i+1,j+1);

        int ans = min(ld, min(d, rd));  
        dp[i][j] = ans;  
        return ans;
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> dp(row, vector<int>(col, 10001));

        int ans = INT_MAX;
        for (int i = 0; i < col; i++) {  
            ans = min(ans, solve(matrix, dp, 0, i));
        }

        return ans;
    }
