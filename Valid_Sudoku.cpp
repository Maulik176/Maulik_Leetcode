class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9] = {false}; //creating 2d array for rows
        bool cols[9][9] = {false};//creating 2d array for cols
        bool boxes[9][9] = {false};//creating 2d array for boxes
        
        for(int i=0; i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j] != '.'){ //if it is . we skip
                    int chatToNum = board[i][j] - '1';
                    int boxIndex = (i / 3) * 3 + (j / 3); 
                    //3 becuase box is cut in 3 sections
                    if (rows[i][chatToNum] || cols[j][chatToNum] || boxes[boxIndex][chatToNum]){
                        return false;
                    }
                    rows[i][chatToNum] = cols[j][chatToNum] = boxes[boxIndex][chatToNum] = true;
                }
            }
        }
        return true;
    }
};
