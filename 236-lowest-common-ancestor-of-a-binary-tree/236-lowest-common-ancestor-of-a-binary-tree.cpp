/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* dfs(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        TreeNode* l;
         TreeNode* r;
        if(root == nullptr)
            return nullptr;
        if(root == p || root == q)
            return root;

        l = dfs(root -> left, p , q);
        r = dfs(root -> right, p , q);
        
        if(l && r)
            return root;
        if(l)
            return l;
        else
            return r;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return dfs(root, p , q);
    }
};