class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ret;
        
        if (candidates.size() == 0 || target < 0) {
            return ret;
        }
        
        vector<int> curr;
        
        sort(candidates.begin(), candidates.end());
        
        backtracking(ret, curr, candidates, target, 0);
        
        return ret;
    }
    
    void backtracking(vector<vector<int>>& ret, vector<int> curr, vector<int> num, int target, int level) {
        if (target == 0) {
            ret.push_back(curr);
            return;
        } else if (target < 0) {
            return;
        }
        
        for (int i = level; i < num.size(); i++) {
            target -= num[i];
            curr.push_back(num[i]);
            backtracking(ret, curr, num, target, i + 1);
            curr.pop_back();
            target += num[i];
            while (i < num.size() - 1 && num[i] == num[i + 1]) {
                i++;
            }
        }
    }
};