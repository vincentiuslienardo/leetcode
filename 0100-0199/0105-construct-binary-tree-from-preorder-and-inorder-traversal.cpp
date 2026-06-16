class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> index;

        for (int i = 0; i < inorder.size(); i++) {
            index[inorder[i]] = i;
        }

        int preIndex = 0;

        return build(preorder, 0, inorder.size() - 1, preIndex, index);
    }

private:
    TreeNode* build(
        vector<int>& preorder,
        int inLeft,
        int inRight,
        int& preIndex,
        unordered_map<int, int>& index
    ) {
        if (inLeft > inRight) {
            return nullptr;
        }

        int rootVal = preorder[preIndex];
        preIndex++;

        TreeNode* root = new TreeNode(rootVal);

        int mid = index[rootVal];

        root->left = build(preorder, inLeft, mid - 1, preIndex, index);
        root->right = build(preorder, mid + 1, inRight, preIndex, index);

        return root;
    }
};
