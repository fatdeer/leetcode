# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def levelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        if not root:
            return []
        ans, currLevel, nextLevel = [], [root], []
        while currLevel:
            ans.append(list(x.val for x in currLevel))
            for node in currLevel:
                if node.left:
                    nextLevel.append(node.left)
                if node.right:
                    nextLevel.append(node.right)
            currLevel, nextLevel = nextLevel, []
        return ans
        