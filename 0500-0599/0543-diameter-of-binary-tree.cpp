class Solution {
private:
    int best = 0;

    int height(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        int left = height(root->left);
        int right = height(root->right);

        best = max(best, left + right);

        return 1 + max(left, right);
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return best;
    }
};
