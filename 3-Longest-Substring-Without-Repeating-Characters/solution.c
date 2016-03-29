int lengthOfLongestSubstring(char* s) {
    int longest = 0, currentLength = 0, start = 0, position[128] = {0};

    for (int i = 0; s[i]; position[s[i]] = ++i, currentLength++) {
        if (position[s[i]] > start) {
            longest = (longest > currentLength) ? longest : currentLength;
            start = position[s[i]];
            currentLength = i - position[s[i]];
        }
    }

    return (longest > currentLength) ? longest : currentLength;
}