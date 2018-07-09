
class Solution {
public:
    bool comptree(TreeNode* s,TreeNode* t)
    {
        if(s==NULL&&t==NULL)
            return true;
        if(s==NULL||t==NULL)
            return false;
        
        return (s->val==t->val)&&comptree(s->right,t->right)&&comptree(s->left,t->left);
    }
    bool isSubtree(TreeNode* s, TreeNode* t) {
       
        if(s!=NULL &&(comptree(s,t)|| isSubtree(s->left,t)||isSubtree(s->right,t)))
            return true;
        else
        return false;
    }
};