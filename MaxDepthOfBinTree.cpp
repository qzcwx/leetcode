/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode *root) {
        if (!root) return 0;
        root->val = 1;
        return depth(root);
    }
    
private:
    int depth(TreeNode* node){
        if (!node) return 0;
        if (node->left ) node->left->val = node->val + 1;
        if (node->right) node->right->val = node->val + 1;
        return max(depth(node->left)+1, depth(node->right)+1);
    }
};
