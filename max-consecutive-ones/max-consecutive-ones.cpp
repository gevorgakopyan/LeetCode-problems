class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int initial = 0;
        int second = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums.at(i) == 1)
                initial++;
            if(nums.at(i) == 0 || i == nums.size()-1)
            {
                if(second > initial)
                    initial = 0;
                else
                {
                   second = initial;
                   initial = 0;
                }
            }
                
        }
        return second;
    }
};