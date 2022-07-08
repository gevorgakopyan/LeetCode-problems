class Solution:
    def maxArea(self, height: List[int]) -> int:
        maxAr = 0
        l = 0
        r = len(height) - 1
        while l < r:
            width = r - l
            maxAr = max(maxAr, width * min(height[l],height[r]))
            
            if height[l] < height[r]:
                l += 1
            else:
                r -= 1
        return maxAr
            