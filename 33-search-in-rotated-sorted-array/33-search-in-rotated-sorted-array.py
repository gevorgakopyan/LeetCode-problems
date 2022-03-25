class Solution:
    def search(self, nums: List[int], target: int) -> int:
        def index(nums: List[int]) -> int:
            if len(nums) == 1:
                return 0
            l = 0
            r = len(nums)-1
            if nums[0] < nums[r]:
                return 0
            while r >= l:
                mid = l + (r - l) // 2
                if nums[mid] > nums[mid + 1]:
                    return mid + 1
                if nums[mid-1] > nums[mid]:
                    return mid
                if nums[mid] > nums[0]:
                    l = mid + 1
                else: 
                    r = mid - 1
            return 0
        def search(l, r):
            while l <=r:
                mid =  (l + r) // 2
                if nums[mid] == target:
                    return mid
                else:
                    if target < nums[mid]:
                        r = mid - 1
                    else:
                        l = mid + 1
            return -1
        #print (index(nums))
        i = index(nums)
        if nums[i] == target:
            return i
        if i == 0:
            return search(0, len(nums) - 1)
        if target < nums[0]:
            return search(i, len(nums) - 1)
        return search(0, i)

        
