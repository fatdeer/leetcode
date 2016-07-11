class Solution {
public:
    int hIndex(vector<int>& citations) {
        if (citations.empty())
            return 0;
            
        sort(citations.begin(), citations.end());
        
        int len = citations.size(), maxH = 0;
        
        for (int i = len - 1; i >= 0; --i) {
            int h = len - i;
            if (citations[i] >= h && h > maxH) {
                maxH = h;
            } else {
                break;
            }
        }
        return maxH;
    }
};