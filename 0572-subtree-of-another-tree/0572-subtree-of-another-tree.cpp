/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSubtree(TreeNode* s, TreeNode* t) {
    if(!s)
    return t==nullptr; 
    return hp(s,t) ||isSubtree(s->left,t) || isSubtree(s->right,t);
    }
    bool hp(TreeNode* s,TreeNode* t)
    {
    if(s==nullptr && t==nullptr) return true;
    else if(s==nullptr || t==nullptr) return false;
    else if(s->val!=t->val) return false;
    else
    return hp(s->left,t->left) && hp(s->right,t->right);
    }
};