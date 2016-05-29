int maxSubArray(int* nums, int numsSize) {
    int res = 0, sum = nums[0];

    for (int i = 0; i < numsSize; i++) {
        if (res > 0) {
            res += nums[i];

        } else {
            res = nums[i];
        }

        if (res > sum) {
            sum = res;
        }
    }

    return sum;
}