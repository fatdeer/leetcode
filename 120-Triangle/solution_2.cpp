class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        if (triangle.empty()) {
            return 0;
        }
        
        int row = triangle.size();
        
        vector<int> dp;
        de.resize(row);
        
        for (int i = 0; i < dp.size(); i++) {
            dp[i] = triangle[row - 1][i];
        }
        
        for (int i = row - 2; i >= 0; i--) {
            for (int j = 0; j < i + 1; j++) {
                dp[j] = triangle[i][j] + in(triangle[i + 1][j], triangle[i + 1][j + 1]);
            }
        }

        return triangle[0][0];
    }
};