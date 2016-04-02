class Solution(object):
    def findMin(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        left, right = 0, len(nums) - 1

        while left < right and nums[left] >= nums[right]:
            mid = left + (right - left) / 2

            if nums[mid] >= nums[left]:
                left = mid + 1
            else:
                right = mid

        return nums[left]
        