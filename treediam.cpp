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
   
    vector<int> treefunc(TreeNode* root)
    {
        int diam;
        vector<int> res{-1,-1};
        if(!root)
            return res;
        vector<int> v1=treefunc(root->left),v2=treefunc(root->right);
        diam=max(v1[0]+v2[0]+2,max(v1[1],v2[1]));
        res[1]=diam;
        res[0]=max(v1[0]+1,v2[0]+1);
        return res;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        vector<int> res(2,0);
        if(!root) return res[1];
        res=treefunc(root);
        return res[1];
    }
};