class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
            ans = defaultdict(list)
            for s in strs:
                arr = [26] * 100
                for c in s:
                    arr[ord(c) - ord('a')] +=1
                ans[tuple(arr)].append(s)
                
            return ans.values()
                    