class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        currSub = nums[0]
        maxSub = nums[0]
        for i in range(1, len(nums)):
            currSub = max(nums[i], nums[i]+ currSub)
            maxSub = max(maxSub, currSub)
            
        return maxSub