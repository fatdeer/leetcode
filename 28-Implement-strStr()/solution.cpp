class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        if not needle:
            return 0

        return self.KMP(haystack, needle)

    def KMP(self, text, pattern):
        len_text = len(text)
        len_pattern = len(pattern)
        prefix = self.getPrefix(pattern)
        j = -1
        for i in xrange(len_text):
            while j > -1 and pattern[j + 1] != text[i]:
                j = prefix[j]
            if pattern[j + 1] == text[i]:
                j += 1
            if j == len_pattern - 1:
                return i - j
        return -1

    def getPrefix(self, pattern):
        len_pattern = len(pattern)
        next = [-1] * len_pattern
        j = -1
        for i in xrange(1, len_pattern):
            while j > -1 and pattern[j + 1] != pattern[i]:
                j = next[j]
            if pattern[j + 1] == pattern[i]:
                j += 1
            next[i] = j
        return next
        