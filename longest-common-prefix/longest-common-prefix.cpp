class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int smallest = strs[0].size();
        for(int i = 0; i < strs.size(); i++)
        {
            if(strs[i].size() < smallest)
                smallest = strs[i].size();
        }
        string longestCommon = "";
        for(int i = 0; i < smallest; i++)
        {
            char pref = strs[0][i];
            for(int j = 0; j < strs.size(); j++)
            {
                if(strs[j].at(i) == pref)
                    continue;
                else
                    return longestCommon;
            }
            longestCommon += pref;
        }
        return longestCommon;
    }
};