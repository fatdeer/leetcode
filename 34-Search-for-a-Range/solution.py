class Solution(object):
    def searchRange(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        ret = [-1, -1]
        if not nums:
            return ret

        left, right = 0, len(nums) - 1

        while left + 1 < right:
            mid = (left + right) / 2
            if nums[mid] == target:
                right = mid
            elif nums[mid] < target:
                left = mid
            else:
                right = mid

        if nums[left] == target:
            ret[0] = left
        elif nums[right] == target:
            ret[0] = right

        left, right = 0, len(nums) - 1

        while left + 1 < right:
            mid = (left + right) / 2

            if nums[mid] == target:
                left = mid
            elif nums[mid] < target:
                left = mid
            else:
                right = mid

        if nums[right] == target:
            ret[1] = right
        elif nums[left] == target:
            ret[1] = left

        return ret
        