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
    void traverse(vector<int> &bt, TreeNode* r)
    {
        if(!r)
            return;
        traverse(bt, r->left);
        bt.push_back(r->val);
        traverse(bt, r->right);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> bt;
        traverse(bt, root);
        return bt;
    }
};