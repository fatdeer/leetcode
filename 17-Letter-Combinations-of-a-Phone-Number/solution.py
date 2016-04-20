class Solution(object):
    def letterCombinations(self, digits):
        """
        :type digits: str
        :rtype: List[str]
        """
        if not digits:
            return []

        lookup = ["", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"]

        result = [""]

        for digit in reversed(digits):
            choices = lookup[int(digit)]

            m, n = len(choices), len(result)

            result += [result[i % n] for i in xrange(n, m * n)]

            for i in xrange(m * n):
                result[i] = choices[i / n] + result[i]

        return result