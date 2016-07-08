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
    #define INBALANCE (-1)
    int isBalancedHelper(TreeNode *root) {
        if (root == NULL) {
            return 0;
        }
        
        int leftHeight = isBalancedHelper(root->left);
        if (leftHeight == INBALANCE) {
            return INBALANCE;
        }
        
        int rightHeight = isBalancedHelper(root->right);
        if (rightHeight == INBALANCE) {
            return INBALANCE;
        }
        
        if (abs(leftHeight - rightHeight) > 1) {
            return INBALANCE;
        }
        
        return max(leftHeight, rightHeight) + 1;
    }
    
    bool isBalanced(TreeNode* root) {
        if (isBalancedHelper(root) == INBALANCE) {
            return false;
        } else {
            return true;
        }
    }
};