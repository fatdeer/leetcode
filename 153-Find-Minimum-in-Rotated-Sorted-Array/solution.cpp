class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size();
        
        if (right == 0) {
            return 0;
        } else if (right == 0) {
            return nums[0];
        } else if (right == 2) {
            return min(nums[0], nums[1]);
        }
        
        while (left < right) {
            if (nums[left] <= nums[right - 1])  // ordered
                return nums[left];
            
            // unordered
            
            int mid = left + (right - left)/2;
            
            if (nums[mid] >= nums[left]) {
                left = mid + 1;
            } else {
                if (mid == right - 1)
                    return nums[mid];
                else
                    right = mid + 1;
            }
        }
        return nums[left];
    }
};