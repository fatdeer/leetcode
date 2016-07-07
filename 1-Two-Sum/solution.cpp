class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mapping;
        vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            mapping[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            const int gap = target - nums[i];
            if (mapping.find(gap) != mapping.end())
            {
                if (i ^ mapping[gap])
                {
                    res.push_back(i);
                    res.push_back(mapping[gap]);
                    break;
                }
            }
        }
        return res;
    }
};