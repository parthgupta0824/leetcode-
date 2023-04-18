class Solution {
public:
    int fans = 0;
    int maxlen(TreeNode *root){
        if(!root)return 0;
        int l = maxlen(root->left);
        int r = maxlen(root->right);
        fans = max(fans,l+r);
        return max(l,r)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int l = maxlen(root->left);
        int r = maxlen(root->right);
        fans = max(fans,(l+r));
        return fans;
    }
};