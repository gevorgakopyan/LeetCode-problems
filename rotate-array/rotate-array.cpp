class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> sol (nums.size(), 0);
        for(int i = 0; i < nums.size(); i++)
        {
                sol[(i + k) % nums.size()] = nums[i];
        }
        for(int i = 0; i < nums.size(); i++)
        {
            nums[i] = sol[i];
        }
    }
};