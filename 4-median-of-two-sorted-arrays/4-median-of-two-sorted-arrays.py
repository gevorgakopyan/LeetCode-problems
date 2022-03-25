class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        x = 0
        y = 0
        sol = []
        while x < len(nums1) and y < len(nums2):
            if nums1[x] < nums2[y]:
                sol.append(nums1[x])
                x+= 1
            else:
                sol.append(nums2[y])
                y+= 1
        sol.extend(nums1[x:])
        sol.extend(nums2[y:])
        
        if len(sol)%2 != 0:
            return sol[(len(sol)//2)]
        else:
            mid = len(sol)//2
            return (sol[mid]+sol[mid-1])/2