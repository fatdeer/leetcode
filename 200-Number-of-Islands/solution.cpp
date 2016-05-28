class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.size() == 0)
            return 0;
        int numIld = 0;
        for (int i = 0; i < grid.size(); ++i)
        {
            for (int j = 0; j < grid[0].size(); ++j)
            {
                if (grid[i][j] == '1') {
                    numIld++;
                    dfs(i,j,grid);
                }
            }
        }
        return numIld;
    }
    void dfs(int i, int j, vector<vector<char>>& grid){
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == '0')
            return;
        grid[i][j] = '0';
        dfs(i+1,j,grid);
        dfs(i,j+1,grid);
        dfs(i-1,j,grid);
        dfs(i,j-1,grid);
    }
};