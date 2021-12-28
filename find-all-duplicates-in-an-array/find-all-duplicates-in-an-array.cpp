class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> sol;
        for(int i =0; i< nums.size(); i++)
        {
            if(mp.find(nums[i]) != mp.end())
               sol.push_back(nums[i]);
            else
               mp[nums[i]] = 1;
        }
        return sol;
    }
};