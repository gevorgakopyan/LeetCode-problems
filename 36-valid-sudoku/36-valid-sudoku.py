class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        rows = [[0] * 9 for i in range(9)]
        columns = [[0] * 9 for i in range(9)]

        for r in range(9):
            for c in range(9):
                if board[r][c] == '.':
                    continue
                    
                if rows[r][int(board[r][c]) - 1] == 1:
                    return False
                rows[r][int(board[r][c]) - 1] = 1
                
                if columns[int(board[r][c]) - 1][c] == 1:
                    return False
                columns[int(board[r][c]) - 1][c] = 1
        for r in range(0,9,3):
            for c in range(0,9,3):
                seen = set()
                for i in range(r, r + 3):
                    for j in range(c, c + 3):
                        if board[i][j] in seen and board[i][j].isdigit():
                            return False
                        seen.add(board[i][j])
                
        return True
                
