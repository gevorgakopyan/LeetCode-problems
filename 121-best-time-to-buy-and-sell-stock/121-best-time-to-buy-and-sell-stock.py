class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxProfit = 0
        minim = 10000
        for i in range(len(prices)):
            if prices[i] < minim:
                minim = prices[i]
            elif prices[i] - minim > maxProfit:
                maxProfit = prices[i] - minim
        return maxProfit