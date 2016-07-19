class Solution(object):
    def findPeakElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if not nums:
            return -1

        left, right = 0, len(nums) - 1

        while left + 1 < right:
            mid = left + (right - left) / 2
            if nums[mid] < nums[mid - 1]:
                right = mid
            elif nums[mid] < nums[mid + 1]:
                left = mid
            else:
                return mid

        mid = left if nums[left] > nums[right] else right

        return mid
        