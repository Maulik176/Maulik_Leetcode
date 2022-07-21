class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int row = image.size();
        int column = image[0].size();
        for(int i=0 ; i<row; i++){
            for(int j=0; j<(column+1)/2 ; j++){
                int temp = image[i][j] ^ 1;
                image[i][j] = image[i][column - j - 1] ^ 1; 
                image[i][column - j - 1] = temp;
            }
        }
        return image;
    }
};