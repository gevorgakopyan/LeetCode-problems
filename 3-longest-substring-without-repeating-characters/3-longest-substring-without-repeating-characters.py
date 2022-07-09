class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        start = 0
        maxSol = 0
        while start < len(s):
            currMax = 0
            char = set()
            pointer = start
            while pointer < len(s) and s[pointer] not in char :
                char.add(s[pointer])
                currMax += 1
                pointer += 1
                
            maxSol = max(maxSol, currMax)
            start += 1
        return maxSol
                