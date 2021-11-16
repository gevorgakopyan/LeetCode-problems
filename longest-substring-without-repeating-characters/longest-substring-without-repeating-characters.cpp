class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> map;
        int rep = 0, ans= 0;
        for(int i = 0; i< s.length(); i++)
        {
            if(map.find(s[i]) != map.end())
                rep = max(map[s[i]], rep);
             ans = max(ans, i - rep + 1);
             map[s[i]] = i+ 1;
        }
       
        return ans;
    }
    
};