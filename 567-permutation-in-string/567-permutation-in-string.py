class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s1) > len(s2):
            return False
        window = Counter(s2[:len(s1)])
        s1Window = Counter(s1)
        for ind,elem in enumerate(s2):
            if window == s1Window:
                return True
            if ind + len(s1) < len(s2):
                window[elem] -= 1
                window[s2[ind + len(s1)]] += 1
            else:
                return False
        return False