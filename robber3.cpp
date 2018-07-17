/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int rob(TreeNode* root) {
        if(!root) return 0;
        
        int s1=rob(root->left);
        int s2=rob(root->right);
        int s3=0,s4=0,s5=0,s6=0;
        
        if(root->left){
        s3=rob(root->left->left);
        s4=rob(root->left->right);}
        
        if(root->right){
        s5=rob(root->right->left);
        s6=rob(root->right->right);}
        
        int res=max(s1+s2,s3+s4+s5+s6+root->val);
        
        return res;
        
    }
};