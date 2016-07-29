class Solution {
public:
    int jump(vector<int>& nums) {
        int step = 0;
        int cur = 0;
        int next = 0;
        int n = nums.size();
        
        int i = 0;
        while (i < n) {
            if (cur >= n - 1) {
                break;
            }
            
            while (i <= cur) {
                next = max(next, nums[i] + i);
                i++;
            }
            
            step++;
            cur = next;
        }
        return step;
    }
};