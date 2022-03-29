class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        dict = {}
        for i in range(len(s)):
            if s[i] in dict:
                dict[s[i]] += 1
            else:
                dict[s[i]] = 1
        for i in range(len(t)):
            if t[i] not in dict:
                return False
            else:
                dict[t[i]] -= 1
        for i in range(len(s)):
            if dict[s[i]] != 0:
                return False
        return True