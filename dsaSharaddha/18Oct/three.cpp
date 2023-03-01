#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = 0, col = 0;
    int last_col = matrix[0].size();
    int last_row = matrix.size();
    while (row < last_row && col < last_col)
    {
        for (int i = col; i < last_col; i++)
        {
            ans.push_back(matrix[row][i]);
        }
        row++;
        for (int i = row; i < last_row; i++)
        {
            ans.push_back(matrix[i][last_col-1]);
        }
        last_col--;
        if (row < last_row)
        {
            for (int i = last_col-1; i >= col; i--)
            {
                ans.push_back(matrix[last_row-1][i]);
            }
            last_row--;
        }
        if (col < last_col)
        {
            for (int i = last_row-1; i >= row; i--)
            {
                ans.push_back(matrix[i][col]);
            }
            col++;
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> res = spiralOrder(v);
    for (auto &i : res)
        cout << i << " ";
    return 0;
}