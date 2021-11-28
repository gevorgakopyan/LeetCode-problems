class Solution {
public:
    int twoSumLessThanK(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int res = -1;
        int i = 0;
        int j = nums.size()-1;
        while(i < j)
        {
            int sum = nums[i] + nums[j];
            if(sum < k)
            {
              res = max(res, sum);
                i++;
            }
            if(sum >= k)
                j--;
        }
        return res;
    }
};