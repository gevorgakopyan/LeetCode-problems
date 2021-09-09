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
    bool sym(TreeNode* left1, TreeNode* right1)
    {
        if(left1 == nullptr && right1 == nullptr)
            return true;
        if(left1 == nullptr || right1 == nullptr)
            return false;
        return (left1->val == right1->val) && sym(left1->left, right1->right) && sym(right1->left, left1->right);
            
    }
    bool isSymmetric(TreeNode* root) {
        return sym(root->left, root->right);
    }
};