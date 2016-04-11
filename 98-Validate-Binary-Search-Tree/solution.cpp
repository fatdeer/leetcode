# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def isValidBST(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """

        def dfs(root, pre=[-float('inf'), True]):
            if root and dfs(root.left, pre) and pre[1]:
                pre[:] = [root.val, root.val > pre[0]]
                dfs(root.right, pre)
            return pre[1]

        return dfs(root)