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
    
    vector<vector<int>> levelfunc(TreeNode* root,vector<vector<int>> v,int level)
    {
        if(root==NULL) return v;
        if(level==0)
            v[0][0]=root->val;
        else
        {
        if(v.size()-1<level)
        {
            vector<int>temp{root->val};
            v.push_back(temp);
        }
        else
        v[level].push_back(root->val);}
        vector<vector<int>>vleft=levelfunc(root->left,v,level+1);
        vector<vector<int>>vright=levelfunc(root->right,vleft,level+1);
        return vright;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(root==NULL)
            return v;
        vector<int> temp{0};
        v.push_back(temp);
        
        return levelfunc(root,v,0);
    }
};