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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int depth = getHeight(root);
        vector<vector<int>> ret(depth);
        
        if (depth == 0) {
            return ret;
        }
        
        getSolution(ret, root, depth - 1);
        return ret;
    }
    
    void getSolution(vector<vector<int>>& ret, TreeNode* root, int level) {
        if (root == NULL) {
            return;
        }
        
        ret[level].push_back(root->val);
        getSolution(ret, root->left, level - 1);
        getSolution(ret, root->right, level - 1);
    }
    
    int getHeight(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        
        int left = getHeight(root->left);
        int right = getHeight(root->right);
        int height = ((left > right) ? left : right) + 1;
        return height;
    }
};