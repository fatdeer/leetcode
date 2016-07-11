class Solution(object):
    def maxProduct(self, words):
        """
        :type words: List[str]
        :rtype: int
        """
        d = {}
        for w in sorted(words, key=len):
            mask = 0
            for c in set(w):
                mask |= (1 << (ord(c) - 97))
            # If they have the same mask, I will have the word
            # with max length at the end
            d[mask] = len(w)
        return max([d[x] * d[y] for x in d for y in d if not x & y] or [0])
        