class Solution(object):
    def helper(self, candidates, target, current_list, current_index, result):
        """
        :param candidates:
        :param target:
        :param current_list:
        :param current_index:
        :param result:
        :return:
        """
        if target <= 0:
            if target == 0:
                result.append(current_list)
            return -1
        else:
            for i in xrange(current_index, len(candidates)):
                v = candidates[i]
                if self.helper(candidates, target - v, current_list + [v], i, result) == -1:
                    break
        return 0

    def combinationSum(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        candidates.sort()
        res = []
        self.helper(candidates, target, [], 0, res)
        return res