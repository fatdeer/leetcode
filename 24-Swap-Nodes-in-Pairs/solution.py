# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def swapPairs(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        cur = dummy = ListNode(0)
        cur.next = head
        while cur.next and cur.next.next:
            cur.next.next.next, cur.next.next, cur.next, cur = \
                cur.next, cur.next.next.next, cur.next.next, cur.next
        return dummy.next
        