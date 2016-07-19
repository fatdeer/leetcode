class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) {
            return false;
        }
        
        int rowNumber = 0;
        int colNumber = matrix[0].size() - 1;
        
        while (rowNumber < matrix.size() && colNumber >= 0) {
            if (target < matrix[rowNumber][colNumber]) {
                --colNumber;
            } else if (target > matrix[rowNumber][colNumber]) {
                ++rowNumber;
            } else {
                return true;
            }
        }
        
        return false;
    }
};