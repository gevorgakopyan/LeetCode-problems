class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        streak = set(nums)
        curr_str = 0
        longest_str = 0

        for num in nums:
            if num - 1 not in streak:
                curr_str = 1
                curr_num = num
                while curr_num + 1 in streak:
                    curr_num += 1
                    curr_str += 1
                longest_str = max(longest_str,curr_str)
                num = curr_num
            
        return longest_str
                
               