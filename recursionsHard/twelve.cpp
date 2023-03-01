#include<bits/stdc++.h>
using namespace std;

// Longest Possible Route in a Matrix with Hurdles

void solve(vector<vector<int>>  arr , vector<vector<int>>  vis ,int r , int c, int i , int j , int path, int x , int y  , int &ans , vector<int>di , vector<int> dj)
{
if(i==x && j==y){

    max(ans , path);
}

for(int ind=0 ; ind<4 ; ind++)
{
    int nexti = i + di[ind];

    
    int nextj = j+ dj[ind];
    if(nexti>=0 && nexti<r && nextj>=0 && nextj<c && !vis[nexti][nextj] && arr[nexti][nextj]==1){
        vis[i][j]==1;
        solve(arr , vis , r , c , i , j , path+1 , x , y , ans , di , dj);
        vis[i][j]==0;
    }
}



}

void findLongestPath(vector<vector<int>>  mat , int i , int j , int x , int y)
{
vector<vector<int>> visited(3 , vector<int> (10 , 0));
vector<int> di = {1,0,0,-1};
vector<int> dj = {0,-1,1,0};

// bool visited[3][10];
// memset(visited , false , sizeof visited);

int ans =  0;
solve(mat , visited , 3 , 10 , 0 , 0 ,0, x , y , ans , di ,dj);
cout<<ans;


}
int main(){ 
    int R = 3;
    int C = 10;

       vector<vector<int>>  mat= { { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
                      { 1, 1, 0, 1, 1, 0, 1, 1, 0, 1 },
                      { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 } };
 
    // find longest path with source (0, 0) and
    // destination (1, 7)
    findLongestPath(mat, 0, 0, 1, 7);
     return 0;
}