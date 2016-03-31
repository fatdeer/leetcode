class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        len_m = len(matrix)
        len_n = len(matrix[0])
        start, end = 0, len_m * len_n - 1
        while start <= end:
            mid = (start + end) / 2
            value = matrix[mid / len_n][mid % len_n]
            if value == target:
                return True
            elif value > target:
                end = mid - 1
            else:
                start = mid + 1
        return False
        