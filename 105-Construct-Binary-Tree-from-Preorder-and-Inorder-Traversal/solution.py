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
        def buildTreeHelper(preorder, pstart, inorder, istart, iend, indexDict):
            if istart > iend:
                return None
            root = TreeNode(preorder[pstart])
            rindex = indexDict.get(preorder[pstart])
            
            left = buildTreeHelper(preorder, pstart + 1, inorder, istart, rindex - 1, indexDict)
            right = buildTreeHelper(preorder, pstart + rindex - istart + 1, inorder, rindex + 1, iend, indexDict)
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
        
        return buildTreeHelper(preorder, 0, inorder, 0, len(inorder) - 1, indexDict)
        