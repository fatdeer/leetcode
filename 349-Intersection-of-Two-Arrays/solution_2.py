class Solution(object):
    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        nums1 = list(set(nums1))
        nums1.sort()
        L = len(nums1)
        res = set()
        for x in nums2: 
            l, r = 0, L-1

            while l <= r:
                m = (r + l) / 2
                if x > nums1[m]:
                    l = m + 1
                elif x < nums1[m]:
                    r = m - 1
                else: 
                    res.add(x)
                    break

        return list(res)