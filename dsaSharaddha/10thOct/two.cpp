#include <bits/stdc++.h>
using namespace std;

void fill0X(int m, int n)
{
    char arr[m][n];
    int row_start = 0, column_start = 0, row_end = m - 1, column_end = n - 1;
    char c = 'X';
    while (row_start <= row_end && column_start <= column_end)
    {
        for (int i = column_start; i <= column_end; i++)
        {
            arr[row_start][i] = c;
        }
        row_start++;

        for (int i = row_start; i <= row_end; i++)
        {
            arr[i][column_end] = c;
        }
        column_end--;

        if (row_start <= row_end)
        {
            for (int i = column_end; i >= column_start; i--)
            {
                arr[row_end][i] = c;
            }
            row_end--;
        }

        if (column_start <= column_end)
        {
            for (int i = row_end; i >= row_start; i--)
            {
                arr[i][column_start] = c;
            }
            column_start++;
        }

        c = (c == 'X') ? '0' : 'X';
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int row, col;
    cin >> row;
    cin >> col;
    fill0X(row, col);
    return 0;
}