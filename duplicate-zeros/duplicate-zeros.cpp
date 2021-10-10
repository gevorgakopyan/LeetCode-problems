class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> copy;
        for(int i=0;i<arr.size();i++)
        {
            if(copy.size() == arr.size() || copy.size() >= arr.size())
                break;
            if(arr[i]==0 && copy.size() != arr.size() -1) copy.push_back(arr.at(i));
            copy.push_back(arr.at(i));
        }
        arr = copy;
    }
};