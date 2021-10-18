class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = nums[0];
        int max_arr = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            curr = max(nums[i], curr + nums[i]);
            max_arr = max(max_arr, curr);
        }
        return max_arr;
    }
};