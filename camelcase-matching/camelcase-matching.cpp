class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> ans;
        for(int i = 0; i < queries.size(); i++)
        {
            ans.push_back(isMatch(queries[i],pattern, 0,0));
        }
        return ans;
    }
    bool isMatch(string& s, string pattern, int i , int j)
    {
        if(i == s.length())
            return j>= pattern.length();
        if(s[i]==pattern[j])
        {
            return isMatch(s,pattern,i+1,j+1);
        }else{
            if(s[i]>='a' && s[i]<='z')
            {
                return isMatch(s,pattern,i+1,j);
            }else
                return false;
        }
    }
};