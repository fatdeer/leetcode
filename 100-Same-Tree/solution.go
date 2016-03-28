/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if (!p && !q)
        return true;
    else
        return p && q && p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}