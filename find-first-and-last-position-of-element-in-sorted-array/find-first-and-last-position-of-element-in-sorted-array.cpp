class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = -1, end = -1;
        vector<int> sol;
        for(int i=0; i < nums.size(); i++)
        {
            if(nums.at(i) == target && start == -1)
            {
                start = i;
                end = i;
            }else if(nums.at(i) == target && start != -1)
            {
                end = i;
            }     
        }
        sol.push_back(start);
        sol.push_back(end);
        
        return sol;    
    }
};