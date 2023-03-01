#include <bits/stdc++.h>
using namespace std;

// bool search(int i, int j, vector<vector<char>> &board, vector<vector<bool>> visited, string word, int idx)
// {
//     if (idx = word.length() - 1)
//         return true;
//     int n = board.size();
//     int di[] = {1, 0, 0, -1};
//     int dj[] = {0, -1, 1, 0};
//     for (int ind = 0; ind < 4; ind++)
//     {
//         int nexti = i + di[ind];
//         int nextj = j + dj[ind];
//         if (nexti >= 0 && nexti < n && nextj >= 0 && nextj < board[0].size() && !visited[nexti][nextj] && board[nexti][nextj] == word[idx])
//         {
//             visited[i][j] = 1;
//             search(nexti, nextj, board, visited, word, idx + 1);
//             visited[i][j] = 0;
//         }
//     }
//     return false;
// }

bool search(int i, int j, vector<vector<char>> &board, vector<vector<bool>> visited, string word, int idx)
{
    if (idx = word.length() - 1)
        return true;
    int n = board.size();
    // Downwards
    if (i + 1 < n && board[i + 1][j] == word[idx] && !visited[i + 1][j])
    {
        visited[i][j] = 1;
        if (search(i + 1, j, board, visited, word, idx + 1))
            return true;
        visited[i][j] = 0;
    }
    // Leftwards
    if (j - 1 >= 0 && board[i][j - 1] == word[idx] && !visited[i][j - 1])
    {
        visited[i][j] = 1;
        if (search(i, j - 1, board, visited, word, idx + 1))
            return true;
        visited[i][j] = 0;
    }
    // Righwards
    if (j + 1 < n && board[i][j + 1] == word[idx] && !visited[i][j + 1])
    {
        visited[i][j] = 1;
        if (search(i, j + 1, board, visited, word, idx + 1))
            return true;
        visited[i][j] = 0;
    }
    //Upwards
    if (i-1 > 0 && board[i-1][j] == word[idx] && !visited[i-1][j])
    {
        visited[i][j] = 1;
        if (search(i-1, j, board, visited, word, idx + 1))
            return true;
        visited[i][j] = 0;
    }
    return false;
}

bool exist(vector<vector<char>> &board, string word)
{
    int n = board.size();
    vector<vector<bool>> visited(n, vector<bool>(board[0].size(), 0));
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            if (word[0] == board[i][j] && search(i, j, board, visited, word, 1))
                return true;
        }
    }
    return false;
}

int main()
{
    vector<vector<char>> board = {{'A', 'B', 'C', 'E'}, {'S', 'F', 'C', 'S'}, {'A', 'D', 'E', 'E'}};
    string word = "ABCB";
    bool res = exist(board, word);
    cout << res << endl;
    return 0;
}