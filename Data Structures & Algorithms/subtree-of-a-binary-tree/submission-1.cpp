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
    bool sameTree(TreeNode* p, TreeNode*q){
        if(!p and !q) return true;
        if(!p) return false;
        if(!q) return false;
        return p->val==q->val && sameTree(p->left,q->left) && sameTree(p->right,q->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root and !subRoot) return true;
        if(!subRoot) return true;
        if(!root) return false;
        bool same = sameTree(root,subRoot);
        return same or isSubtree(root->left,subRoot) or isSubtree(root->right,subRoot);
        
    }
};
