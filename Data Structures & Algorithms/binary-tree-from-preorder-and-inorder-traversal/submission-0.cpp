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
    unordered_map<int,int>m;

    TreeNode* constructTree(int l,int r, int &preIndex,vector<int> &preorder){

        if(l>r) return NULL;

        int midIndex=m[preorder[preIndex]];

        TreeNode* root= new TreeNode(preorder[preIndex]);
        preIndex++;
        root->left=constructTree(l,midIndex-1,preIndex,preorder);
        root->right=constructTree(midIndex+1,r,preIndex,preorder);
        return root;


    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++){
            m[inorder[i]]=i;
        }
        int preIndex=0;
        int l=0;
        int r=preorder.size()-1;
        return constructTree(l,r,preIndex,preorder);
        
    }
};
