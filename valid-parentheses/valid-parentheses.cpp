class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.size() == 1)
        {
            return false;
        }
        for(int i = 0; i < s.size(); i++)
        {
            if(s.at(i) == '(' || s.at(i) == '[' || s.at(i) == '{')
                st.push(s.at(i));
            else if(st.empty())
                return false;
            else if(s.at(i) == ')' && st.top() != '(' || s.at(i) == ']' && st.top() != '[' || s.at(i) == '}' && st.top() != '{') 
                return false;
            else
                st.pop();
        }
        return st.empty();
    }
};