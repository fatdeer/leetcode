class Solution(object):
    def integerBreak(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n == 2:
            return 1
        if n == 3:
            return 2
        t = n % 3
        if t == 0:
            return int(math.pow(3, n / 3))
        if t == 1:
            return int(math.pow(3, (n - 4) / 3) * 4)
        if t == 2:
            return int(math.pow(3, (n - 2) / 3) * 2)