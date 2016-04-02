class Solution(object):
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """
        if x < 2:
            return x

        start, end = 1, x / 2

        while start <= end:
            mid = start + (end - start) / 2
            if x / mid < mid:
                end = mid - 1
            else:
                start = mid + 1

        return end
        