class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> solution;
        for(unsigned int i =0; i< nums.size(); i++)
        {
           for(unsigned int j = 1 ; j< nums.size();j++)
           {
               if((nums.at(i)+nums.at(j))== target && i != j)
               {
                   solution.push_back(i);
                   solution.push_back(j);
                   return solution;
               }    
           }
        }
        return solution;
    }
};