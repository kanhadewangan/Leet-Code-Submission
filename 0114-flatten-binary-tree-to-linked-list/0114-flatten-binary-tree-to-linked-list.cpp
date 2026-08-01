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
    void preOrder(TreeNode* root, vector<TreeNode*>& nums) {
        if (!root)
            return;
        nums.push_back(root);
        preOrder(root->left, nums);
        preOrder(root->right, nums);
    }
    void flatten(TreeNode* root) {
        if (!root)
            return;
        vector<TreeNode*> nodes;
        preOrder(root, nodes);

        for (int i = 0; i < nodes.size() - 1; i++) {
            nodes[i]->left = nullptr;
            nodes[i]->right = nodes[i + 1];
        }
        nodes.back()->left = nullptr;

        nodes.back()->right = nullptr;
    }
};