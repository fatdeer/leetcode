class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> s;
        heights.push_back(0);
        
        int sum = 0;
        int i = 0;
        while (i < heights.size()) {
            if (s.empty() || heights[i] > heights[s.back()]) {
                s.push_back(i);
                i++;
            } else {
                int t = s.back();
                s.pop_back();
                sum = max(sum, heights[t] * (s.empty() ? i : i - s.back() - 1));
            }
        }
        
        return sum;
    }
};