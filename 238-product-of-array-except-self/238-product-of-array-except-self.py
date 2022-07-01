class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        length = len(nums)
        r = 1
        sol = [0] * length
        sol[0] = 1
        for i in range(1, length):
            sol[i] = sol[i-1] * nums[i-1]
        for i in reversed(range(length)):
            sol[i] *= r
            r *= nums[i]
            
        return sol