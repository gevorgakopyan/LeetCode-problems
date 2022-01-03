class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        int l = 0;
        int r = nums.size() - 1;
        if (nums[r] > nums[l]) {
          return nums[0];
        }
        while(l <=r)
        {
            int mid = l + (r - l) / 2;
            if(nums[mid + 1] < nums[mid])
                return nums[mid + 1];
            if(nums[mid - 1] > nums[mid])
                return nums[mid];
            if (nums[l] < nums[mid])
                l = mid+1;
            else
                r = mid - 1;
        }
        return -1;
    }
};