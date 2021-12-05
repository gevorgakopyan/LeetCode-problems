class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int ans= 0;
        int mat[n][m];
        for(int i = n-1; i >= 0; i--)
        {
            for(int j = m-1; j >= 0; j--)
            {
                if(matrix[i][j] == '0')
                    mat[i][j] = 0;
                else if(n -1 == i || j == m-1)
                    mat[i][j] = 1;
                else
                    mat[i][j] = 1 + min(mat[i][j + 1], min(mat[i+1][j],mat[i+1][j+1]));
                ans = max(ans, mat[i][j] * mat[i][j]);
            }
        }
        return ans;
    }
};