# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def buildTree(self, preorder, inorder):
        """
        :type preorder: List[int]
        :type inorder: List[int]
        :rtype: TreeNode
        """
        def buildTreeHelper(indexDict, preorder, inorder, pstart, istart, iend):
            if istart == iend:
                return None
            root = TreeNode(preorder[pstart])
            rindex = indexDict.get(preorder[pstart])
            
            left = buildTreeHelper(indexDict, preorder, inorder, pstart + 1, istart, rindex)
            right = buildTreeHelper(indexDict, preorder, inorder, pstart + rindex - istart + 1, rindex + 1, iend)
            root.left = left
            root.right = right
            return root
        
        if not inorder or not preorder:
            return None
        if len(inorder) != len(preorder):
            return None
        
        indexDict = {}
        
        #for i in xrange(len(inorder)):
        #    indexDict[inorder[i]]=i
        for i, num in enumerate(inorder):
            indexDict[num] = i
        
        return buildTreeHelper(indexDict, preorder, inorder, 0, 0, len(inorder))
        