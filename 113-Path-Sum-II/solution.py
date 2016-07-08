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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> res;
        vector<int> cur;
        pathSum(root, sum, cur, res);
        return res;
    }
private:
    void pathSum(TreeNode *root, int gap, vector<int> &cur, vector<vector<int>> &res)
    {
        if (root == nullptr)
            return;
        cur.push_back(root->val);
        if (root->left == nullptr && root->right == nullptr)
        {
            if (gap == root->val)
                res.push_back(cur);
        }
        
        pathSum(root->left, gap - root->val, cur, res);
        pathSum(root->right, gap - root->val, cur, res);
        
        cur.pop_back();
    }
};