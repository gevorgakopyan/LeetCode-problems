class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count = Counter(nums)
        frequencyArr = [(c,count[c]) for c in count]
        frequencyArr = sorted(frequencyArr, key= lambda x:x[1],reverse = True)
        return [f[0] for f in frequencyArr[:k]]