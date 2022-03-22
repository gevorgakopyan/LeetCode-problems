class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxProfit = 0
        currMin = float('inf')
        for i in range(len(prices)):
            currDiff = prices[i] - currMin;
            if prices[i] < currMin:
                currMin = prices[i];
                currDiff = prices[i] - currMin;
            elif currDiff > maxProfit:
                maxProfit = currDiff
        return maxProfit