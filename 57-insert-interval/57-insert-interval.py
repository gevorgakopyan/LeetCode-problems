class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        new_start, new_end = newInterval
        idx = 0
        n = len(intervals)
        sol = []
        #if start is bigger 
        while idx < n and new_start > intervals[idx][0]:
            sol.append(intervals[idx])
            idx += 1        
        #no overlap
        if not sol or sol[-1][1] < new_start:
            sol.append(newInterval)
        #ovarlap merge with the last one
        else:
            sol[-1][1] = max(sol[-1][1], new_end)
            
        while idx < n:
            rest = intervals[idx]
            start, end = rest
            idx+=1
            #no overlap
            if start > sol[-1][1]:
                sol.append(rest)
            #overlap
            else:
                sol[-1][1] = max(sol[-1][1], end)
        return sol
                
            