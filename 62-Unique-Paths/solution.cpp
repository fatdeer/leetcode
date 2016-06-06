class Solution(object):
    def uniquePaths(self, m, n):
        """
        :type m: int
        :type n: int
        :rtype: int
        """
        dp = [1] * n
        for i in xrange(1, m):
            for j in xrange(1, n):
                dp[j] += dp[j-1]
        return dp[-1]
        