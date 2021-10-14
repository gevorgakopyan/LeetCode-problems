class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3 = nums1;
        int indx1 = 0, indx2 = 0;
        for(int i = 0; i < m+n; i++)
        {
            if(indx2 >= n ||(indx1 < m && nums3[indx1] < nums2[indx2]))
                nums1[i] = nums3[indx1++];
            else
                nums1[i] = nums2[indx2++];
        }
    }
};