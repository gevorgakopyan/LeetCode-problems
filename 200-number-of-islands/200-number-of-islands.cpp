class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int nr = grid.size();
        if(!nr) return false;
        int nc = grid[0].size();
        int num_islands = 0;
        for(int i = 0; i < nr; i++)
        {
            for(int j = 0; j < nc; j++)
            {
                if(grid[i][j] == '1')
                {
                    num_islands++;
                    queue<pair<int,int>> q;
                    grid[i][j] = '0';
                    q.push({i,j});
                    while(!q.empty())
                    {
                        pair<int,int> rc = q.front();
                        q.pop();
                        int row = rc.first;
                        int col = rc.second;
                        if(row - 1 >= 0 && grid[row - 1][col] == '1' )
                        {
                            q.push({row-1, col});
                            grid[row - 1][col] = '0';
                        }
                        if(row + 1 < nr && grid[row + 1][col] == '1' )
                        {
                            q.push({row+1, col});
                            grid[row + 1][col] = '0';
                        }
                        if(col - 1 >= 0 && grid[row][col - 1] == '1' )
                        {
                            q.push({row, col - 1});
                            grid[row][col -1] = '0';
                        }
                        if(col + 1 < nc && grid[row][col + 1] == '1' )
                        {
                            q.push({row, col + 1});
                            grid[row][col + 1] = '0';
                        }
                    }
                    
                }
            }
        }
        return num_islands;
    }
};