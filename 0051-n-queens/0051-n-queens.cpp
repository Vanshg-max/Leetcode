class Solution {
public:
    // Helper to convert the current board state into the required string format
    void addSolution(vector<string>& board, vector<vector<string>>& ans) {
        ans.push_back(board);
    }

    bool isSafe(int row, int col, vector<string>& board, int n) {
        int x = row;
        int y = col;

        // 1. Check same row (to the left)
        while (y >= 0) {
            if (board[x][y] == 'Q') return false;
            y--;
        }

        // 2. Check upper-left diagonal
        x = row; y = col;
        while (x >= 0 && y >= 0) {
            if (board[x][y] == 'Q') return false;
            x--; y--;
        }

        // 3. Check lower-left diagonal
        x = row; y = col; // Reset x and y!
        while (x < n && y >= 0) {
            if (board[x][y] == 'Q') return false;
            x++; y--;
        }

        return true;
    }

    void solve(int col, vector<vector<string>>& ans, vector<string>& board, int n) {
        if (col == n) {
            addSolution(board, ans);
            return;
        }

        for (int row = 0; row < n; row++) {
            if (isSafe(row, col, board, n)) {
                board[row][col] = 'Q';       // Place Queen
                solve(col + 1, ans, board, n);
                board[row][col] = '.';       // Backtrack
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        // Initialize board with '.'
        vector<string> board(n, string(n, '.')); 
        
        solve(0, ans, board, n);
        return ans;
    }
};