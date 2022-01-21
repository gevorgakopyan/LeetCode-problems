class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int nr = grid.size();
        int nc = grid[0].size();
        if(nr == 1 && nc == 1 && grid[0][0] == 1)
            return -1;
        int freshOranges = 0;
        int days = 0;
        queue<pair<int,int>> q;
        vector<pair<int,int>> justRotten;
        
        for(int i = 0; i < nr; i++)
        {
            for(int j = 0; j < nc; j++)
            {     
                if(grid[i][j] == 2)
                {
                    q.push({i,j});                    
                }else if(grid[i][j] == 1)
                    freshOranges++;                
            }
        }
        while(!q.empty())
        {            
            pair<int,int> rc = q.front();
            q.pop();
            int r = rc.first;
            int c = rc.second;

            if(r - 1 >= 0 && grid[r-1][c] == 1)
            {
                grid[r-1][c] = 2;
                justRotten.push_back({r -1,c});
                --freshOranges;
            }
            if(r + 1 < nr && grid[r+1][c] == 1)
            {
                grid[r+1][c] = 2;
                justRotten.push_back({r + 1,c});
                --freshOranges;
            }
            if(c - 1 >= 0 && grid[r][c - 1] == 1)
            {
                grid[r][c - 1] = 2;
                justRotten.push_back({r,c - 1});
                --freshOranges;
            }
            if(c + 1 < nc && grid[r][c + 1] == 1)
            {
                grid[r][c + 1] = 2;
                justRotten.push_back({r,c + 1});
                --freshOranges;
            }
            if(q.empty() && justRotten.size() > 0)
            {
                days++;
                for(int i=0; i<justRotten.size(); i++)
                {
                   q.push(justRotten[i]);
                }
                justRotten.clear();
            }
         }

        return freshOranges > 0 ? -1 : days;
    }
};
/*
        for(int i = 0; i < nr; i++)
        {
            for(int j = 0; j < nc; j++)
            {
                if(grid[i][j] == 1)
                    return -1;
                if(grid[i][j] == 0)
                    continue;         
                else
                    notZero = true;
            }
        }

        if(!notZero)
        {
            return 0;
        }
grid[i][j] = 3;
                    while(!q.empty())
                    {
                        pass = false;
                        tuple<int,int,int> rc = q.front();
                        q.pop();
                        int r = get<0>(rc);
                        int c = get<1>(rc);
                        level = get<2>(rc);
                        //days++;
                        if(r - 1 >= 0 && grid[r-1][c] == 1)
                        {
                            grid[r-1][c] = 3;
                            q.push(make_tuple(r -1,c,level+1));
                            pass = true;
                        }
                        if(r + 1 < nr && grid[r+1][c] == 1)
                        {
                            grid[r+1][c] = 3;
                            q.push(make_tuple(r + 1,c,level+1));
                            pass = true;
                        }
                        if(c - 1 >= 0 && grid[r][c - 1] == 1)
                        {
                            grid[r][c - 1] = 3;
                            q.push(make_tuple(r,c + 1,level+1));
                            pass = true;
                        }
                        if(c + 1 < nc && grid[r][c + 1] == 1)
                        {
                            grid[r][c + 1] = 3;
                            q.push(make_tuple(r,c + 1,level+1));
                            pass = true;
                        } */