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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        TreeNode* cur, * prev;
        cur = root;

        while (cur != NULL) {
            if (cur->left == NULL) {
                result.push_back(cur->val);
                // prev = cur;
                cur = cur->right;

            } else {
                TreeNode* node = cur->left;

                while (node->right != NULL && node->right != cur) {
                    node = node->right;
                }

                if (node->right == NULL) {
                    result.push_back(cur->val);
                    node->right = cur;
                    // prev = cur;
                    cur = cur->left;

                } else {
                    node->right = NULL;
                    cur = cur->right;
                }
            }
        }

        return result;
    }
};