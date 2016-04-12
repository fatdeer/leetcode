class Solution(object):
    def subsetsWithDup(self, nums):
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
            if tmp not in ret:
                ret.append(tmp)
        return ret
        