class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size() - 2; ++i) {
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                int sum = 
                if ( == 0) {
                    curr.push_back(nums[i]);
                    curr.push_back(nums[j]);
                    curr.push_back(nums[k]);
                    ret.push_back(curr); ++j; --k;

                    while (j < k && nums[j - 1] == nums[j]) {++j;
                    }

                    while (j < k && nums[k] == nums[k + 1]) {--k;
                    }
                } else if (nums[i] + nums[j] + nums[k] < 0) {++j;
                } else {--k;
                }
            }

            while (i < nums.size() - 1 && nums[i] == nums[i + 1]) {++i;
            }
        }
        return ret;
    }
};
        
    }
};