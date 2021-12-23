class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();
        if(size == 0)
            return 0;
        if(size == 1)
            return nums[0];
        int sol[size + 2];
        sol[0] = 0;
        sol[1] = 0;
        for(int i = 2; i < size + 2; i++)
        {
            sol[i] = max(sol[i-1], sol[i-2] + nums[i - 2]);
        }
        return sol[size + 1];
    }
};