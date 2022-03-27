class Solution:
    def twoSum(self, nums, i , res):
        seen = {}
        j = i + 1
        while j < len(nums):
            complement = - nums[i] - nums[j]
            if complement in seen:
                res.append([nums[i], nums[j], complement])
                while j + 1 < len(nums) and nums[j] == nums[j+1]:
                    j+=1
            seen[nums[j]] = j
            j+=1
        return res
    
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        res = []
        nums.sort()
        for i in range(len(nums)):
            if nums[i] > 0:
                break;
            if i == 0 or nums[i-1] != nums[i]:
                self.twoSum(nums, i , res)
        return res