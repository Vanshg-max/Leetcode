class Solution {
public:
    bool isSafe(int row , int col , vector<vector<char>> &board, char val){
            int n = board.size();
            for(int i =0  ;i < n ; i++){
                //check row
                if(board[row][i] == val){
                    return false;
                }
                if(board[i][col] == val){
                    return false;
                }
                if(board[3* (row/3) + (i/3)] [3* (col/3) + (i%3)] == val){
                    return false;
                }

            }
            return true;
    }



    bool solve(vector<vector<char>>& board) {
      
        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                // check if empty
                if (board[row][col] == '.') {
                    for (char i = '1'; i <= '9'; i++) {
                        if (isSafe(row,col,board,i)) {
                            board[row][col] = i; // place
                            if(solve(board)){
                                return true;
                            }
                            board[row][col] ='.'; //backtrack
                        } 
                       
                    }
                     return false;// no valid number found
                }
            }
        }
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {

        solve(board);
        
    }
};