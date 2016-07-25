class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> subsets(vector<int>& nums) {
        if (nums.empty()) {
            return res;
        }
        
        sort(nums.begin(), nums.end());
        
        res.push_back(vector<int>());
        
        vector<int> v;
        
        generate(0, v, nums);
        
        return res;
    }
    
    void generate(int start, vector<int>& v, vector<int>& S) {
        if (start == S.size()) {
            return;
        }
        
        for (int i = start; i < S.size(); i++) {
            v.push_back(S[i]);
            
            res.push_back(v);
            
            generate(i + 1, v, S);
            
            v.pop_back();
        }
    }
};