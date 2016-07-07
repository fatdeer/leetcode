# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def rotateRight(self, head, k):
        """
        :type head: ListNode
        :type k: int
        :rtype: ListNode
        """
        len, pre, current = 0, None, head
        while current:
            pre, current = current, current.next
            len += 1

        if not len or not k % len:
            return head

        tail = head
        for _ in xrange(len - k % len - 1):
            tail = tail.next

        next, tail.next, pre.next = tail.next, None, head
        return next
        