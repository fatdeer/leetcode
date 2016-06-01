class Solution:
    # @param {string} s
    # @param {string} t
    # @return {boolean}
    def isIsomorphic(self, s, t):
        return all(map({}.setdefault, a, b) == list(b) for a, b in ((s, t), (t, s)))
        