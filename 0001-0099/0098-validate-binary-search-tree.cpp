class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return dfs(root, LONG_MIN, LONG_MAX);
    }

private:
    bool dfs(TreeNode* node, long low, long high) {
        if (node == nullptr) {
            return true;
        }

        if (node->val <= low || node->val >= high) {
            return false;
        }

        return dfs(node->left, low, node->val) &&
               dfs(node->right, node->val, high);
    }
};
