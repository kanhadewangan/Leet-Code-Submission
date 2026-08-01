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
 void helper(TreeNode* root, long long &prev, bool &ans){
    if(!root) return;
    helper(root->left, prev, ans);
    if(root->val<=prev){
        ans=false;
    }
    prev = root->val;
    helper(root->right, prev, ans);
    
 }
  

    bool isValidBST(TreeNode* root) {
       long long l = LONG_MIN;
       bool ans = true;
       helper(root,l,ans);
       return ans;
    }
};