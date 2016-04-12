class Solution(object):
    def subsets(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        if not nums:
            return []
        ret = []
        nums.sort()
        n = len(nums)
        
        for i in xrange(2**n):
            tmp = []
            for j in xrange(n):
                if i & (1 << j):
                    tmp.append(nums[j])
            ret.append(tmp)
        return ret
