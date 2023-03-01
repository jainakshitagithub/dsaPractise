#include <bits/stdc++.h>
using namespace std;

void bfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    vis[row][col] = 1;
    queue<pair<int, int>> q;
    q.push({row, col});
    while (!q.empty())
    {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();

        // traversal of adjacent elements
        for (int delrow = -1; delrow <= 1; delrow++)
        {
            for (int delcol = -1; delcol <= 1; delcol++)
            {
                int nrow = row + delrow;
                int ncol = col + delcol;
                if (nrow >= 0 && ncol >= 0 && nrow < n && ncol < m && !vis[nrow][ncol] && grid[nrow][ncol] == '1')
                {
                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }
    }
}

int numIslands(vector<vector<char>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    int count = 0;
    vector<vector<int>> vis(n, vector<int>(m, 0));
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            if (!vis[row][col] && grid[row][col] == '1')
            {
                count++;
                bfs(row, col, vis, grid);
            }
        }
    }
    return count;
}

int main()
{
    vector<vector<char>> grid = {{'0', '1'}, {'1', '0'}, {'1', '1'}, {'1', '0'}};
    int res = numIslands(grid);
    cout << res;
    return 0;
}