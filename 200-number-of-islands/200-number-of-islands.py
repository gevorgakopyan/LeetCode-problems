class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        
        if not grid or not grid[0]:
            return 0
        numIsland = 0
        
        rows, cols = len(grid), len(grid[0])
        seen = set()
        def dfs(r , c):
            if r not in range(rows) or c not in range(cols) or grid[r][c] == "0" or (r,c) in seen:
                return
            seen.add((r,c))
            directions = [[0,1],[0,-1],[1,0],[-1,0]]
            
            for dr, dc in directions:
                dfs(r + dr, c + dc)
                
        for r in range(rows):
            for c in range(cols):
                if grid[r][c] == "1" and (r,c) not in seen:
                    numIsland += 1
                    dfs(r,c)
        return numIsland
