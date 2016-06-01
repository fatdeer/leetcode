class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> > ans;
        vector<int> row;
        for (int i = 0; i < numRows; ++i)
        {
            row.clear();
            row.push_back(1);
            int j;
            for (j = 1; j <= i / 2; ++j)
                row.push_back(ans[i-1][j]+ans[i-1][j-1]);
            for( ; j < i + 1; ++j)
                row.push_back(row[i - j]);
            ans.push_back(row);
        }
        return ans;
    }
};