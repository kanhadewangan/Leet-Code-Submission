
class Solution {
public:
   void helper(TreeNode*root ,string path, vector<string>&paths){
    if(!root) return ;

    path+=to_string(root->val);

    if(!root->left and !root->right){
        paths.push_back(path);
        return;
    }
    path+="->";
    helper(root->left, path, paths);
    helper(root->right, path, paths);

   }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        helper(root, "", paths);
        return paths;
      
    }
};