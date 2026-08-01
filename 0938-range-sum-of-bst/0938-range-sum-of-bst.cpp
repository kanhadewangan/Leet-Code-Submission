
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root) return 0;
        int leftTree = rangeSumBST(root->left, low, high);
        int rightTree = rangeSumBST(root->right, low, high);
        int ans = leftTree+ rightTree;
        if(root->val>=low and root->val<=high){
            ans+=root->val;
        }
        return ans;
        

        
    }
};