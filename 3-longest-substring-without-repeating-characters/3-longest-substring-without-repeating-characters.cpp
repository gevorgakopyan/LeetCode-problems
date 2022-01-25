class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> map;
        int ans=0;
        int j =0;
        for(int i = 0; i < s.size(); i++)
        {
            if(map.find(s[i]) != map.end())
                j = max(j, map[s[i]]);
            ans = max(ans, i - j + 1);
            map[s[i]] = i+1;
        }
        return ans;
    }
};