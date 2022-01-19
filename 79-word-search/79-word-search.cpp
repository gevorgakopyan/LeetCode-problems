class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word, int n, int m, int r, int c, int i)
        {
                  
            if( r<0 || c<0 || r>=n || c>=m ||  board[r][c]!=word[i] || board[r][c] == '#')
                return false;
            if(i == word.size() -1)
                return true;
            char x=board[r][c];
            board[r][c]='#';
        
            int check1 = dfs(board, word, n, m, r - 1,c,i+1);
            int check2 = dfs(board, word, n, m, r + 1,c,i+1);
            int check3 = dfs(board, word, n, m, r,c - 1,i+1);
            int check4 = dfs(board, word, n, m, r,c + 1,i+1);
        
            board[r][c] = x;
        
            bool res = check1 || check2 || check3 || check4; 
            
            return res;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size(), m = board[0].size();
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(board[i][j]==word[0])
                    if(dfs(board, word,n,m,i,j,0)) return true;
            }
        }
        return false;
    }
};