class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        res = []
        ans = [0] * len(temperatures)
        for ind, temp in enumerate(temperatures):
            while res and res[-1][0] < temp:
                currVal, currInd = res.pop()
                ans[currInd] = ind - currInd
            res.append((temp,ind))
        return ans