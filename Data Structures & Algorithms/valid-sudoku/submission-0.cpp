class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> rows(9, vector<int> (9,0));
        vector<vector<int>> cols(9, vector<int> (9,0));
        vector<vector<int>> grid(9, vector<int> (9,0));

        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                int k = i/3*3 + j/3;

                if(board[i][j] != '.'){
                    int number = board[i][j] - '0';
                
                    if(rows[i][number-1]++ || cols[j][number-1]++ || grid[k][number-1]++){
                        return false;
                    }
                }
                    
            }
        }

        return true;
    }
};
