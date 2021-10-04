class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count =0;
        for(int num : nums)
        {
            string strNum = to_string(num);
            if(strNum.length()%2 == 0)
                count++;
        }
        return count;
    }
};