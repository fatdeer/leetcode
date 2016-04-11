int search(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize;
    while (left < right)
    {
        const int mid = (left + right) / 2;
        if (nums[mid] == target)
            return mid;
        if (nums[left] < nums[mid])
        {
            if (nums[left] <= target && target < nums[mid])
                right = mid;
            else
                left = mid + 1;
        }
        else
        {
            if (nums[mid] < target && target <= nums[right - 1])
                left = mid + 1;
            else
                right = mid;
        }
    }
    return -1;
}