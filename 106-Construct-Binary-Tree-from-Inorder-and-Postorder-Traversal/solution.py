# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def buildTree(self, inorder, postorder):
        """
        :type inorder: List[int]
        :type postorder: List[int]
        :rtype: TreeNode
        """
        def buildTreeHelper(indexDict, postorder, inorder, pend, istart, iend):
            if istart == iend:
                return None
            root = TreeNode(postorder[pend - 1])
            rindex = indexDict.get(postorder[pend - 1])
            
            left = buildTreeHelper(indexDict, postorder, inorder, pend - 1 - (iend - rindex - 1), istart, rindex)
            right = buildTreeHelper(indexDict, postorder, inorder, pend - 1, rindex + 1, iend)
            root.left = left
            root.right = right
            return root
        
        if not inorder or not postorder:
            return None
        if len(inorder) != len(postorder):
            return None
        
        indexDict = {}
        
        for i, num in enumerate(inorder):
            indexDict[num] = i
        
        return buildTreeHelper(indexDict, postorder, inorder, len(postorder), 0, len(inorder))
        