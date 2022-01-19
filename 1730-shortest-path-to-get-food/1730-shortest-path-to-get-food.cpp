class Solution {
public:
    int getFood(vector<vector<char>>& grid) {
        int nr = grid.size();
        int nc = grid[0].size();
        int path = -1;
        bool found = false;
        for(int i = 0; i < nr; i++)
        {
            for(int j = 0; j < nc; j++)
            {
                if(grid[i][j] == '*')
                {
                    //make_tuple(startx,starty,0)
                    queue<tuple<int,int,int>> q;
                    q.push(make_tuple(i,j,1));
                    grid[i][j] = 'X';
                    //path = ;
                    while(!q.empty())
                    {

                        tuple<int,int,int> rc = q.front();
                        int row = get<0>(rc);
                        int col = get<1>(rc);
                        int level = get<2>(rc);
                        q.pop();
                        if((row - 1 >= 0 && grid[row-1][col] == '#' )||(row + 1 < nr && grid[row + 1][col] == '#' )||(col - 1 >= 0 && grid[row][col - 1] == '#' )|| (col + 1 < nc && grid[row][col + 1] == '#'))
                        {
                            found = true;
                            path = level;
                            
                            break;
                        }
                    
                        //if(grid[row-1][col] == 'O' || grid[row + 1][col] == 'O' || grid[row][col - 1] == 'O' || grid[row][col + 1] == 'O')
                        if(row - 1 >= 0 && grid[row-1][col] == 'O')
                        {
                            q.push(make_tuple(row -1,col,level+1));
                            grid[row-1][col] = 'X';
                        }
                        if(row + 1 < nr && grid[row+1][col] == 'O')
                        {
                            q.push(make_tuple(row +1,col, level + 1));
                            grid[row+1][col] = 'X';
                        }
                        if(col - 1 >= 0 && grid[row][col - 1] == 'O')
                        {
                            q.push(make_tuple(row,col - 1, level + 1));
                            grid[row][col - 1] = 'X';
                        }
                        if(col + 1 < nc && grid[row][col + 1] == 'O')
                        {
                            q.push(make_tuple(row,col + 1, level + 1));
                            grid[row][col + 1] = 'X';
                        }
                        
                    }
                    break;
                }
            }
        }
        return found ? path : -1;
    }
};