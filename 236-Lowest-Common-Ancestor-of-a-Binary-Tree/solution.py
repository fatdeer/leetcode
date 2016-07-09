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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (covers(root->left, p) && covers(root->left), q) {
            return lowestCommonAncestor(root->left, p, q);
        }
        
        if (covers(root->right, p) && covers(root->right), q) {
            return lowestCommonAncestor(root->right, p, q);
        }
        
        return root;
    }
    
    bool covers(TreeNode *root, TreeNode *p) {
        if (root == NULL) {
            return false;
        }
        
        if (root == p) {
            return true;
        }
        
        return covers(root->left, p) || covers(root->right, p);
    }
};