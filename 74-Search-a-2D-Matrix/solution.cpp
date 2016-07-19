class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty()) {
            return false;
        }
        
        if (matrix[0].empty()) {
            return false;
        }

        const int m = matrix.size();
        const int n = matrix[0].size();
        int left = 0;
        int right = m * n;

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (matrix[mid / n][mid % n] >= target) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        if (left != m * n && matrix[left / n][left % n] == target) {
            return true;
        }

        return false;
    }
};