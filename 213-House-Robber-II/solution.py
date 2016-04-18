class Solution(object):
    def rob(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        def _rob(nums):
            pre, cur = 0, 0
            for i in nums:
                pre, cur = cur, max(pre + i, cur)
            return cur
        a, b = _rob(nums[:-1]), _rob(nums[1:])
        
        return nums[0] if len(nums) is 1 else max(a, b)