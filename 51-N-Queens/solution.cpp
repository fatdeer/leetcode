class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<int> placement(n);
        vector<vector<string>> result;
        NQueensHelper(n, 0, &placement, &result);
        return result;
    }
    
    void NQueensHelper(int n, int row, vector<int>* col_placement, vector<vector<string>>* result) {
        if (row == n) {
            result->emplace_back(createOutput(*col_placement));
        } else {
            for (int col = 0; col < n; ++col) {
                (*col_placement)[row] = col;
                if (checkValid(*col_placement, row)) {
                    NQueensHelper(n, row + 1, col_placement, result);
                }
            }
        }
    }
    
    vector<string> createOutput(const vector<int>& col_placement) {
        vector<string> sol;
        for (int row : col_placement) {
            string line(col_placement.size(), '.');
            line[row] = 'Q';
            sol.emplace_back(line);
        }
        return sol;
    }
    
    bool checkValid(const vector<int>& col_placement, int row) {
        for (int i = 0; i < row; ++i) {
            int diff = abs(col_placement[i] - col_placement[row]);
            if (diff == 0 || diff == row - i) {
                return false;
            }
        }
        return true;
    }
};