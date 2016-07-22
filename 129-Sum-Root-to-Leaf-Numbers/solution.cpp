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
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        helper(root, 0, sum);
        return sum;
    }
    
    void helper(TreeNode* root, int partSum, int& sum) {
        if (root == NULL)
            return;
        else if(root->left == NULL && root->right == NULL)
            sum += (10 * partSum + root->val);
        else {
            helper(root->left, 10 * partSum + root->val, sum);
            helper(root->right, 10 * partSum + root->val, sum);
        }
    }
};