class Solution {
public:
    string originalDigits(string s) {
        vector<int> ch(26,0);
        for(char chars : s)
        {
            ch[chars - 'a'] += 1;
        }
        // one two three four five six seven eight nine
        vector<int> nums(10);
        // unique
        nums[0] = ch['z' - 'a'];
        nums[2] = ch['w' - 'a'];
        nums[4] = ch['u' - 'a'];
        nums[6] = ch['x' - 'a'];
        nums[8] = ch['g' - 'a'];
        // non unique
        nums[1] = ch['o' - 'a'] - nums[0] - nums[2] - nums[4];
        nums[3] = ch['h' - 'a'] - nums[8];
        nums[5] = ch['f' - 'a'] - nums[4];
        nums[7] = ch['s' - 'a'] - nums[6];
        nums[9] = ch['i' - 'a'] - nums[5] - nums[6] - nums[8];
        
        string ans;
        for(int i = 0; i< 10; i++)
            for(int j = 0; j < nums[i]; j++)
            {
                ans+= to_string(i);
            }
        return ans;
    }
};