class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows=matrix.size(); //size of a row
        int columns= matrix[0].size(); //size of a column
        vector<vector<int>> trans(columns,vector<int> (rows,0)); //row becomes column and colum becomes row in transpose
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                trans[j][i] = matrix[i][j]; // filling the matrix 
            }
        }
        return trans;
    }
};