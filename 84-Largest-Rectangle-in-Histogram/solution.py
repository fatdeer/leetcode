class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        heights.push_back(0);
        
        int sum = 0;
        int i = 0;
        while (i < heights.size()) {
            if (s.empty() || heights[i] > heights[s.top()]) {
                s.push(i);
                i++;
            } else {
                int t = s.top();
                s.pop();
                sum = max(sum, heights[t] * (s.empty() ? i : i - s.top() - 1));
            }
        }
        
        return sum;
    }
};