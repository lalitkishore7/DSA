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
private:
    void fun(TreeNode* root){

        if(root == nullptr) return;

        TreeNode* node1 = root->left;
        root->left = root->right;
        root->right = node1;

        fun(root->left);
        fun(root->right);

    }
public:
    TreeNode* invertTree(TreeNode* root) {

        fun(root);

        return root;

        
        
    }
};
