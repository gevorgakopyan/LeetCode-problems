class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        res = []
        ans = [0] * len(temperatures)
        for ind, temp in enumerate(temperatures):
            while res and res[-1][1] < temp:
                currInd, currVal = res.pop()
                ans[currInd] = ind - currInd
            res.append((ind,temp))
        return ans