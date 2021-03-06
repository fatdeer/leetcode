/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if (root == NULL)
            return false;
        // got leaf node
        if (root->left == NULL && root->right == NULL)
        {
            if (root->val == sum)
                return true;
            else 
                return false;
        }
        
        if (hasPathSum(root->left, sum - root->val))
            return true;
        if (hasPathSum(root->right, sum - root->val))
            return true;
            
        return false;
    }
};