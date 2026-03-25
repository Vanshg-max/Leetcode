class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        long long totalSum = 0;

        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                totalSum += grid[i][j];
            }
        }

        
        if (totalSum % 2 != 0) return false;
        long long target = totalSum / 2;

        
        long long currentPrefixSum = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                currentPrefixSum += grid[i][j];
            }
            if (currentPrefixSum == target) return true;
        }

        
        currentPrefixSum = 0;
        for (int j = 0; j < cols; j++) {
            for (int i = 0; i < rows; i++) {
                currentPrefixSum += grid[i][j];
            }
            if (currentPrefixSum == target) return true;
        }

        return false;
    }
};