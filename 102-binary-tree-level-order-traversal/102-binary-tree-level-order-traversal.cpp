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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr) return {};
        vector<vector<int>> levels;
        vector<int> level;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {

            TreeNode* curr = q.front();
            q.pop();
            if(curr != nullptr)
            {
                level.push_back(curr->val);
                if(curr -> left)
                {
                    
                    q.push(curr -> left);
                }
                if(curr -> right)
                {
                    
                    q.push(curr -> right);
                }
            }else if(curr == nullptr && q.size() >= 1)
            {
                levels.push_back(level);
                level = {};
                q.push(nullptr);
            }
            if(q.empty()){
                levels.push_back(level);
            }
        }
        return levels;
    }
};