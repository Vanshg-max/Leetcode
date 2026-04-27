class Solution {
public:
    bool hasValidPath(vector<vector<int>>& grid) {
         int m = grid.size(), n = grid[0].size();

        // Directions for each type
        vector<vector<vector<int>>> dirs = {
            {}, // 0 (unused)
            {{0,-1},{0,1}},      // 1: left, right
            {{-1,0},{1,0}},      // 2: up, down
            {{0,-1},{1,0}},      // 3: left, down
            {{0,1},{1,0}},       // 4: right, down
            {{0,-1},{-1,0}},     // 5: left, up
            {{0,1},{-1,0}}       // 6: right, up
        };

        // Check reverse compatibility
        auto isValid = [&](int x, int y, int px, int py) {
            for (auto &d : dirs[grid[x][y]]) {
                if (x + d[0] == px && y + d[1] == py)
                    return true;
            }
            return false;
        };

        queue<pair<int,int>> q;
        vector<vector<bool>> vis(m, vector<bool>(n, false));

        q.push({0,0});
        vis[0][0] = true;

        while (!q.empty()) {
            auto [x, y] = q.front(); q.pop();

            if (x == m-1 && y == n-1) return true;

            for (auto &d : dirs[grid[x][y]]) {
                int nx = x + d[0];
                int ny = y + d[1];

                if (nx >= 0 && ny >= 0 && nx < m && ny < n && !vis[nx][ny]) {
                    // check reverse connection
                    if (isValid(nx, ny, x, y)) {
                        vis[nx][ny] = true;
                        q.push({nx, ny});
                    }
                }
            }
        }

        return false;
    }
};