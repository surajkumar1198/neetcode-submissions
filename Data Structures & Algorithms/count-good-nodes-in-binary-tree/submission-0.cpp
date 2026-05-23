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
    void dfs(TreeNode* root,int maxSoFar,int &count){
        if(root==NULL) return;
        if(root->val>=maxSoFar){
           count++;
        }
        maxSoFar=max(root->val,maxSoFar);
        dfs(root->left,maxSoFar,count);
        dfs(root->right,maxSoFar,count);
    }
    int goodNodes(TreeNode* root) {
        if(root->left==NULL and root->right==NULL) return 1;
        if(!root) return 0;
        int count=0;
        int maxSoFar=INT_MIN;
        dfs(root,maxSoFar,count);
        return count;
        
    }
};
