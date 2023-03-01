#include <bits/stdc++.h>
using namespace std;

void dfs ( int row , int col , vector<vector<char>> &mat ,  vector<vector<int>> &vis , int delrow[] , int delcol[] ){
    vis[row][col]=1 ;
    int n = mat.size();
    int m = mat[0].size();
    for(int i=0 ; i<4 ; i++){
        int nrow = row + delrow[i];
        int ncol = col + delcol[i];
        if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && !vis[nrow][ncol] && mat[nrow][ncol] == 'O'){
            dfs(nrow , ncol , mat , vis , delrow , delcol);
        }
    }
}

vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
{
    vector<vector<int>> vis(n , vector<int> (m , 0));
    int delrow[] = {1 , 0 , 0 , -1};
    int delcol[] = {0 , -1 , 1 , 0};
    for(int j=0 ; j<m ; j++){
        //first row
        if(mat[0][j]=='O' && !vis[0][j]){
            dfs(0 , j , mat , vis , delrow , delcol);
        }
        //Last row
        if(mat[n-1][j]=='O' && !vis[n-1][j]){
            dfs(n-1 , j , mat , vis , delrow , delcol);
        }
    }

    for(int i=0 ; i<n ; i++){
        //First col
        if(mat[i][0] == 'O' && !vis[i][0]){
            dfs(i , 0 , mat, vis , delrow , delcol);
        }
        //Last col
        if(mat[i][m-1] == 'O' && !vis[i][m-1]){
            dfs(i , m-1 , mat , vis , delrow , delcol);
        }
    }

    for(int i=0 ; i<n ; i++){
        for(int j =0 ; j<m ; j++){
            if(mat[i][j]=='O' && !vis[i][j]){
                mat[i][j] = 'X';
            }
        }
    }
    return mat;
}

int main()
{
    vector<vector<char>> mat = { {'X', 'X', 'X', 'X'},
                                 {'X', 'O', 'X', 'X'},
                                 {'X', 'O', 'O', 'X'},
                                 {'X', 'O', 'X', 'X'},
                                 {'X', 'X', 'O', 'O'} } ;
    int n = mat.size();
    int m = mat[0].size();
    vector<vector<char>> res = fill(n , m , mat);

    for(int i=0 ; i<res.size() ; i++){
        for(int j=0 ; j<res[i].size() ; j++)
                cout<<res[i][j]<<" ";        
                cout<<endl;
    }
 return 0;
}