class Solution {
public:
    bool isMatch(string s, string p) {
        if (*s == 0 || *p == 0) {
            return *s == 0 && *p == 0;
        }

        if (*(p + 1) == 0 || p[1] != '*') {
            if (*s != 0 && (p[0] == s[0] || p[0] == '.')) {
                // Matched a char.
                return isMatch(s + 1, p + 1);
            } else {
                return false;
            }
        } else {
            // Try all possible matches with '*' in p.
            while (*s != 0 && (p[0] == s[0] || p[0] == '.')) {
                if (isMatch(s, p + 2)) {
                    return true;
                }
                ++s;
            }
            return isMatch(s, p + 2);
        }
    }
};