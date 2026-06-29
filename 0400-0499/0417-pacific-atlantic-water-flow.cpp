class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int rows = heights.size();
        int cols = heights[0].size();

        vector<vector<bool>> pacific(rows, vector<bool>(cols, false));
        vector<vector<bool>> atlantic(rows, vector<bool>(cols, false));

        for (int c = 0; c < cols; c++) {
            dfs(0, c, heights, pacific);
            dfs(rows - 1, c, heights, atlantic);
        }

        for (int r = 0; r < rows; r++) {
            dfs(r, 0, heights, pacific);
            dfs(r, cols - 1, heights, atlantic);
        }

        vector<vector<int>> result;

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (pacific[r][c] && atlantic[r][c]) {
                    result.push_back({r, c});
                }
            }
        }

        return result;
    }

private:
    void dfs(
        int r,
        int c,
        vector<vector<int>>& heights,
        vector<vector<bool>>& ocean
    ) {
        if (ocean[r][c]) {
            return;
        }

        ocean[r][c] = true;

        int rows = heights.size();
        int cols = heights[0].size();

        vector<pair<int, int>> directions = {
            {1, 0},
            {-1, 0},
            {0, 1},
            {0, -1}
        };

        for (auto [dr, dc] : directions) {
            int nr = r + dr;
            int nc = c + dc;

            if (
                nr < 0 || nr >= rows ||
                nc < 0 || nc >= cols ||
                ocean[nr][nc] ||
                heights[nr][nc] < heights[r][c]
            ) {
                continue;
            }

            dfs(nr, nc, heights, ocean);
        }
    }
};
