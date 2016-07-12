int removeElement(int* nums, int numsSize, int val) {
    if (nums == NULL)
        return 0;
    if (numsSize == 0)
        return 0;
    int left = 0;
    int right = numsSize - 1;
    while(left < right) {
        while(right > 0 &&nums[right] == val) {
            right--;
        }
        if (left >= right) break;
        if (nums[left] == val) {
            nums[left] = nums[right];
            right--;
        }
        left++;
    }
    if (left == right && nums[left] != val)
        left++;
    return left;
}