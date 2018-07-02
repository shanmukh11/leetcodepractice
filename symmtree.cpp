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
    int checkval(TreeNode* p, TreeNode* q)
    {
            if(!p&&!q)
            {
                return 1;
            }
            if((p&&!q)||(!p&&q))
            {
                return -1;
            }
            if(checkval(p->left,q->right)==-1)
            {
                return -1;
            }
            if(checkval(p->right,q->left)==-1)
            {
                return -1;
            }
            if(p->val!=q->val)
                return -1;
            return 1;
            
    }
    bool isSymmetric(TreeNode* root) {
        if(checkval(root,root)==1)
        {
            return true;
        }
        else return false;
    }
};