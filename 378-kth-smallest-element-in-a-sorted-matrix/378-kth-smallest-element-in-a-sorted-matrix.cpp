class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int z) {
        int row = matrix.size();
        int column = matrix[0].size();
        int a[row*column];
        int k=0;
        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){
                a[k] = matrix[i][j];
                k++;
            }
        }
        sort(a, a+(row*column));
        return a[z-1];
    }
};