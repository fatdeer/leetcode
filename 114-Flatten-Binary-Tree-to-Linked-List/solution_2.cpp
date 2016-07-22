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
    void flatten(TreeNode* root) {
        // like preorder
        
        if (root == NULL)
            return;
            
        vector<TreeNode*> ns;
        TreeNode dummy(0);
        
        TreeNode* n = &dummy;
        
        ns.push_back(root);
        
        while (!ns.empty()) {
            TreeNode* p = ns.back();
            ns.pop_back();
            
            n->right = p;
            n = p;
            
            if (p->right) {
                ns.push_back(p->right);
                p->right = NULL;
            }
            
            if (p->left) {
                ns.push_back(p->left);
                p->left = NULL;
            }
        }
    }
};