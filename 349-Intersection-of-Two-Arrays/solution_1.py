class Solution(object):
    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        if not nums1 or not nums2: 
            return []
        res =[]
        for x in nums1:
            for y in nums2:
                if x == y:
                    if x not in res:
                        res.append(x)
        return res