func getBigger(x, y int) int {
	if x > y {
		return x
	}
	return y
}

/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func maxDepth(root *TreeNode) int {
    if root == nil {
		return 0
	}
	return 1 + getBigger(maxDepth(root.Left), maxDepth(root.Right))
    
}