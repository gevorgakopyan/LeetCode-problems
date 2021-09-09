class Solution {
public:
    string truncateSentence(string s, int k) {
        int words =0, amount_of_letters = 0;
        string newWord;
        for(int i=1; i<= s.size();i++)
        {
            if(s[i-1] == ' ')
                words++;
            if(words == k || i == s.size())
            {
               amount_of_letters = i;
               break;
            } 
        }
        for(int i=0; i< amount_of_letters;i++)
            newWord += s[i];
        if(newWord[newWord.size()-1] == ' ')
            newWord.pop_back();
        return newWord;
    }
};