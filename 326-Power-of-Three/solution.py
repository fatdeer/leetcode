class Solution(object):
    def __init__(self):
        self.__max_pow3 = 3 ** int(math.log(0x7fffffff) / math.log(3))
    def isPowerOfThree(self, n):
        """
        :type n: int
        :rtype: bool
        """
        #return n > 0 and 1162261467 % n == 0
        
        return n > 0 and self.__max_pow3 % n == 0