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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res{};
        if(!root)
            return res;
        res=inorderTraversal(root->left);
        res.push_back(root->val);
        vector<int> v=inorderTraversal(root->right);
        res.insert(res.end(),v.begin(),v.end());
        return res;
    }
};