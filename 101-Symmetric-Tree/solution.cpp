/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
typedef struct TreeNode xx;
bool xxx(xx* a, xx* b) {
    if (a == NULL && b == NULL) return true;
    return (a && b && (a->val == b->val) && xxx(a->left, b->right) && xxx(a->right, b->left));
}

bool isSymmetric(struct TreeNode* root) {
    return root == NULL || xxx(root->left, root->right);
}
