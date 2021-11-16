class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = nums[0];
        int maxim = curr;
        for(int i = 1; i< nums.size(); i++)
        {
            curr = max(nums[i] + curr , nums[i]);
            maxim = max(maxim, curr);
        }
        return maxim;
    }
};