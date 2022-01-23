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
    bool validate(TreeNode* rt, long l, long r)
    {
        if(rt == nullptr)
            return true;
        if(!(rt -> val > l && rt -> val < r))
            return false;
        return validate(rt->left, l, rt -> val) && validate(rt -> right, rt -> val, r);
    }
    bool isValidBST(TreeNode* root) {
        return validate(root, -LONG_MAX, LONG_MAX);
    }
};