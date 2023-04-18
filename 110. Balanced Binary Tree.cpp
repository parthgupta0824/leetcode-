class Solution {
public:
int ans = 1;
    int height (TreeNode *root){
        if(!root)return 0;
        int l = height(root->left);
        int r = height(root->right);
        if(abs(l-r) > 1){
            ans = 0;
        }
        return max(l,r)+1;
    }
    bool isBalanced(TreeNode* root) {
        int x = height(root);
        return ans;
    }
};