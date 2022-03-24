class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        length = len(nums)
        l = [0] * length
        r = [0] * length
        sol = [0] * length
        l[0] = 1
        for i in range(1, length):
            l[i] = l[i-1] * nums[i-1]
            
        r[length - 1] = 1
        for i in reversed(range(length-1)):
            r[i] = r[i+1] * nums[i+1]
        for i in range(length):
            sol[i] = r[i] * l[i]
        return sol