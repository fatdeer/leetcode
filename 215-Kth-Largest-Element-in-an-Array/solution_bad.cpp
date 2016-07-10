class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        if (k < 1 || k > n)
            return -1;
        int big = nums[0], small = big;
        vector<int> left;
        vector<int> right;
        for (int i = 1; i < n; i++) {
            if (nums[i] > big)
                big = nums[i];
            if (nums[i] < small) 
                small = nums[i];
        }
        int mid = small + (big - small) / 2;
        for (int i = 0; i < n; i++) { 
            if (nums[i] <= mid)
                left.push_back(nums[i]);
            else
                right.push_back(nums[i]);
        }
        if (left.size() == n)
            return nums[0];
        if (left.size() >= n - k + 1)
            return findKthLargest(left, k - right.size());
        else 
            return findKthLargest(right, k);
    }
};