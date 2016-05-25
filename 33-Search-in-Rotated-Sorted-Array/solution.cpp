class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        if not nums:
            return -1

        low, high = 0, len(nums)

        while low < high:
            mid = low + (high - low) / 2
            if target == nums[mid]:
                return mid

            if nums[low] < nums[mid]:
                if nums[low] <= target < nums[mid]:
                    high = mid
                else:
                    low = mid + 1
            else:
                if nums[mid] < target <= nums[high - 1]:
                    low = mid + 1
                else:
                    high = mid
        
        return -1