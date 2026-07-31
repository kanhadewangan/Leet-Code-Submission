/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
  bool helper(TreeNode* root, long long l , long long r){
    if(root==NULL )return true;
    if(root->val>=r or root->val<=l ) return false;
    return  helper(root->left, l, root->val) and helper(root->right, root->val, r);
  }

    bool isValidBST(TreeNode* root) {
       long long l = LONG_MIN;
       long long r = LONG_MAX;
       return helper(root, l ,r);
    }
};