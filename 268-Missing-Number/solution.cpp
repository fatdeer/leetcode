class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int res = len;
        for (int i = 0; i < len; i++)
        {
            res ^= i;
            res ^= nums[i];
        }
        return res;
    }
};