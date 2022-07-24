class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int row = mat.size();
        int column = mat[0].size();
        int i = row - 1;
        int j = 0;
        while (i>=0 && j<column){
            if (mat[i][j] == target) return true;
            else if (mat[i][j] < target) j++;
            else i--;
        }
        return false;
        
    }
};