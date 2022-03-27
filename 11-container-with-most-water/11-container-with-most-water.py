class Solution:
    def maxArea(self, height: List[int]) -> int:
        maxAr = 0
        l = 0
        r = len(height) - 1
        while r > l:
            rSize = height[r]
            lSize = height[l]
            maxAr = max((min(rSize, lSize) * (r - l)), maxAr)
            if lSize < rSize :
                l += 1
            else:
                r -= 1
        return maxAr