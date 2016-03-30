// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (isBadVersion(mid))
            {
                mid = right - 1;
            }
            else
            {
                mid = left + 1;
            }
        }
        return left;
    }
};