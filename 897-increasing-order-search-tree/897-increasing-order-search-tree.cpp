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
    void inorder(TreeNode* root, TreeNode*& tmp) {
        if(!root)
            return;
        inorder(root->left, tmp);
        TreeNode* newNode = new TreeNode(root->val);
        tmp->right = newNode;
        tmp = tmp->right;
        inorder(root->right, tmp);
        return;
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* tmp = new TreeNode(0);
        TreeNode* ans = tmp;
        inorder(root, tmp);
        return ans->right;
    }
};