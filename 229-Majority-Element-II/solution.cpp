class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        k, n, cnts = 3, len(nums), collections.defaultdict(int)
        
        for i in nums:
            cnts[i] += 1
            if len(cnts) == k:
                for j in cnts.keys():
                    cnts[j] -= 1
                    if cnts[j] == 0:
                        del cnts[j]
        
        for i in cnts.keys():
            cnts[i] = 0
        
        for i in nums:
            if i in cnts:
                cnts[i] += 1
        
        result = []
        for i in cnts.keys():
            if cnts[i] > n / k:
                result.append(i)
        
        return result
        