class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> sol;
        unordered_set<int> set;
        for(int num : nums)
            set.insert(num);
        for(int i = 0; i < nums.size(); i++)
        {
            if(set.find(i+1) == set.end())
                sol.push_back(i+1);
        }
        return sol;
    }
};