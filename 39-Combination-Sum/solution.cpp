class Solution {
public:
	vector<vector<int>> ret;
	vector<int> ans;
	void helper(int dep, vector<int>& candidates, int target) {
		if (target == 0)
			ret.push_back(ans);
		if (dep == candidates.size())
			return;
		if (target < candidates[dep])
			return;
		helper(dep + 1, candidates, target);
		for (int i = 1; i <= target / candidates[dep]; ++i) {
			ans.push_back(candidates[dep]);
			helper(dep + 1, candidates, target - i * candidates[dep]);
		}
		while (ans.back() == candidates[dep])
			ans.pop_back();
	}
	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
		ret.clear();
		ans.clear();
		sort(candidates.begin(), candidates.end());
		helper(0, candidates, target);
		return ret;
	}
};