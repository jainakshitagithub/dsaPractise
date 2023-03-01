#include <bits/stdc++.h>
using namespace std;

// N-Queens Backtracking

//This is not optimal appraoch

// bool isSafe(int row, int col, vector<string> &block, int n)
// {
//     int duprow = row;
//     int dupcol = col;

//     while (row >= 0 && col >= 0)
//     {
//         if (block[row][col] == 'Q')
//             return false;
//         row--;
//         col--;
//     }

//     row = duprow;
//     col = dupcol;

//     while (col >= 0)
//     {
//         if (block[row][col] == 'Q')
//             return false;
//         col--;
//     }

//      row = duprow;
//     col = dupcol;

//     while (row < n && col >= 0)
//     {
//         if (block[row][col] == 'Q')
//             return false;
//         row++;
//         col--;
//     }
//     return true;
// }

// void nQueens(int n, int col, vector<string> &block, vector<vector<string>> &ans)
// {
//     if (col == n)
//     {
//         ans.push_back(block);
//         return;
//     }

//     for (int row = 0; row < n; row++)
//     {
//         if (isSafe(row, col, block, n))
//         {
//             block[row][col] = 'Q';
//             nQueens(n, col + 1, block, ans);
//             block[row][col] = '.';
//         }
//     }
// }

// vector<vector<string>> solveNQueens(int n)
// {
//     string s(n, '.');
//     vector<string> block(n);
//     for (int i = 0; i < n; i++)
//     {
//         block[i] = s;
//     }

//     vector<vector<string>> ans;
//     nQueens(n, 0, block, ans);
//     return ans;
// }

void solve(int n, int col, vector<string> &block, vector<vector<string>> &ans , vector<int> left , vector<int> lowerDiagonal , vector<int> upperDiagonal)
{
if(col==n){
ans.push_back(block);
return;
}

for(int row = 0 ; row<n ; row++)
{
    if(left[row]==0 && lowerDiagonal[row+col]==0 && upperDiagonal[n-1 + col-row]==0)
    {
        block[row][col] = 'Q';
        left[row] = 1;
        lowerDiagonal[row+col]=1;
        upperDiagonal[n-1 + col-row] = 1;
        solve(n , col+1 , block , ans , left , lowerDiagonal , upperDiagonal);
        block[row][col] = '.';
        left[row] = 0;
        lowerDiagonal[row+col] = 0;
        upperDiagonal[n-1 + col-row] = 0;
    }
}
}

vector<vector<string>> solveNQueens(int n)
{
    string s(n, '.');
    vector<string> block(n);
    for (int i = 0; i < n; i++)
    {
        block[i] = s;
    }
    vector<int> left(n , 0);
    vector<int> lowerDiagonal(2*n-1 , 0);
    vector<int> upperDiagonal(2*n-1 , 0);

    vector<vector<string>> ans;
    solve(n, 0, block, ans , left , lowerDiagonal , upperDiagonal);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<string>> res = solveNQueens(n);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}