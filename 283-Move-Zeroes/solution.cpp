class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int i = nums.size() - 1; i > -1; i--)
        {
            if (nums[i] == 0) {
                nums.erase(nums.begin() + i);
                nums.push_back(0);
            }
        }
    }
};