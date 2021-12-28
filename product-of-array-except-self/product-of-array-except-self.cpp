class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pref (nums.size(), 1);
        vector<int> suf (nums.size(), 1);
        vector<int> sol;
        for(int i = 1; i < nums.size(); i++)
        {
            pref[i] = pref[i-1] * nums[i - 1];
        }
        for(int i = nums.size() - 2; i >= 0; i--)
        {
            suf[i] = suf[i+1] * nums[i+1];
        }
        for(int i = 0; i < nums.size(); i++){
            sol.push_back(suf[i] * pref[i]);
        }
        return sol;
    }
};