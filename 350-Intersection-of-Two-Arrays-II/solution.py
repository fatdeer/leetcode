class Solution(object):
    def intersect(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        c1 = collections.Counter(nums1)
        c2 = collections.Counter(nums2)
        result = []
        for n in c1:
            if n in c2:
                result += [n] * min(c1[n], c2[n])
        return result