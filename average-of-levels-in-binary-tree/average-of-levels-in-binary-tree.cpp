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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> sol;
        queue<TreeNode*> q;
        q.push(root);
        double sum = 0;
        while(!q.empty())
        {
            sum = 0;
            double size = q.size();
            for(int i = 0; i < size; i++)
            {
                TreeNode* curr = q.front();
                q.pop();
                sum+= curr -> val;
                if(curr -> left != nullptr)
                    q.push(curr->left);
                if(curr -> right != nullptr)
                    q.push(curr-> right);
            }
            double average = sum / size;
            sol.push_back(average);
        }
        return sol;
    }
};