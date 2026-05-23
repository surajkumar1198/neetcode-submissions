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
    bool validate(TreeNode*root, long minRange,long maxRange){
        if(!root) return true;
        if( root->val<=minRange || root->val>=maxRange) return false;

        return validate(root->left,minRange,root->val) and validate(root->right,root->val,maxRange);
    }
    bool isValidBST(TreeNode* root) {
        return validate(root,LONG_MIN,LONG_MAX);
    }


    //     bool isValidBST(TreeNode* root) {
    //     return validate(root, LONG_MIN, LONG_MAX);
    // }

    // bool validate(TreeNode* root, long minVal, long maxVal) {
    //     if (!root) return true;

    //     if (root->val <= minVal || root->val >= maxVal)
    //         return false;

    //     return validate(root->left, minVal, root->val) &&
    //            validate(root->right, root->val, maxVal);
    // }
};
