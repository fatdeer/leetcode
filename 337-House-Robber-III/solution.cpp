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
    int rob(TreeNode* root) {
        vector<int> ret = getMoney(root);
        return max(ret[0], ret[1]);
    }
    
    vector<int> getMoney(TreeNode* node) {
        vector<int> ret(2, 0);
        if (!node)
            return ret;
        vector<int> lRet = getMoney(node->left);
        vector<int> rRet = getMoney(node->right);
        
        ret[0] = lRet[1] + rRet[1] + node->val;
        ret[1] = max(lRet[0], lRet[1]) + max(rRet[0], rRet[1]);
        return ret;
    }
};