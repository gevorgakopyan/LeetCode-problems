class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        start = 0
        maxSol = 0
        seen = dict()
        for charInd in range(len(s)):
            if s[charInd] in seen:
                start = max(seen[s[charInd]],start)
            seen[s[charInd]] = charInd + 1
            maxSol = max(maxSol, charInd - start + 1)
        return maxSol
                