class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> map;
        int j = 0;
        int ans = 0;
        for( int i = 0; i < s.length(); i++)
        {
            if(map.find(s[i]) != map.end())
                j = max(j, map[s[i]]);
            ans = max(ans, i - j + 1);
            map[s[i]] = i + 1;
        }
        return ans;
    }
};