class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int M = obstacleGrid.size(), N = obstacleGrid[0].size(), row, col;

        if (M  <= 0 || N <= 0) {
            return 0;
        }

        vector<int>  pathN(N + 1, 0);

        for (row = 0, pathN[1] = 1; row < M; ++row)
            for (col = 0; col < N; ++col) {
                pathN[col + 1] = obstacleGrid[row][col] ? 0 : (pathN[col + 1] + pathN[col]);
            }

        return pathN[N];
    }
};