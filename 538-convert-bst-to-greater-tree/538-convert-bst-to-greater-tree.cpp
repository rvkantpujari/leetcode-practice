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
    int dfs(TreeNode* root,int rsum){
        if(root == NULL)
            return 0;
        
        int rightSum = dfs(root->right,rsum), tmp = root->val;
        int leftSum = dfs(root->left, rsum + root->val + rightSum);
        
        root->val = rightSum + root->val + rsum;
        
        return tmp+rightSum+leftSum;
    }
        
    TreeNode* convertBST(TreeNode* root) {
        dfs(root, 0);
        return root;
    }
};