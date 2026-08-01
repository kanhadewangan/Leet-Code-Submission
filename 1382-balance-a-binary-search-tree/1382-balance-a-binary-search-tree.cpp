/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root, vector<int>& nums) {
        if (!root) return;
        inorder(root->left, nums);
        nums.push_back(root->val);
        inorder(root->right, nums);
    }

    TreeNode* buildTree(vector<int>& nums, int l, int r) {
        int mid = l + (r - l) / 2;
        if (l > r)
            return NULL;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = buildTree(nums, l, mid - 1);
        root->right = buildTree(nums, mid + 1, r);
        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<int> inorderVec;
        inorder(root, inorderVec);

        return buildTree(inorderVec, 0, inorderVec.size() - 1);
    }
};