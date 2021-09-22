class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> mp;
        for(int i = 0; i < nums.size(); i++)
        {
            int number = nums.at(i);
            if(mp.find(number) != mp.end())
                return true;
            else
                mp.insert(number);
        }
        return false;
    }
};