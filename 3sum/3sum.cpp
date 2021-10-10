class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        for(int i = 0; i < nums.size() && nums.at(i) <= 0; i++ )
        {
            if (i == 0 || nums[i - 1] != nums[i]) {
                int low = i + 1;
                int high = nums.size() - 1;
                int sum = 0 - nums[i];
                while (low < high)
                {
                    int value = nums.at(low) + nums.at(high);
                    if(value == sum)
                    {
                        res.push_back({nums.at(i),nums.at(low),nums.at(high)});
                        while (low < high && nums[low] == nums[low+1]) low++;
                        while (low < high && nums[high] == nums[high-1]) high--;
                    
                        low++; 
                        high--;
                        
                    }
                    else if (value < sum)
                        low ++;
                    else if (value > sum)
                        high --;
                }
            }
        }
        return res;
    }
};