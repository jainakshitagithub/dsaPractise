#include <bits/stdc++.h>
using namespace std;

// Rat in a Maze

//First Approach
// void pathfinder(int i , int j , vector<vector<int>> &arr , int n , vector<vector<int>> &visited , vector<string > &ans , string move){
// if(i == n-1 && j==n-1){
//     ans.push_back(move);
//     return;
// }

// //Downwards
// if(i+1<n && !visited[i+1][j] && arr[i+1][j]==1){
//     visited[i][j]=1;
//     pathfinder(i+1 , j , arr , n , visited , ans , move+'D');
//     visited[i][j]=0;
// }

// //Leftwards
// if(j-1>=0 && !visited[i][j-1] && arr[i][j-1]==1){
//     visited[i][j]=1;
//     pathfinder(i , j-1 , arr , n , visited , ans , move+'L');
//     visited[i][j]=0;
// }

// //Rightwards
// if(j+1<n && !visited[i][j+1] && arr[i][j+1]==1){
//     visited[i][j]=1;
//     pathfinder(i , j+1 , arr , n , visited , ans , move+'R');
//     visited[i][j]=0;
// }

// //Upwards
// if(i-1>=0 && !visited[i-1][j] && arr[i-1][j]==1){
//     visited[i][j]=1;
//     pathfinder(i-1 , j , arr , n , visited , ans , move+'U');
//     visited[i][j]=0;
// }

// }


//Second approach
void pathfinder(int i , int j , vector<vector<int>> &arr , int n , vector<vector<int>> &visited , vector<string > &ans , string move , vector<int> &di ,  vector<int> &dj ){
if(i == n-1 && j==n-1){
    ans.push_back(move);
    return;
}

string pos = "DLRU";
for(int ind=0 ; ind<4 ; ind++ ){
int nexti = i +  di[ind];
int nextj = j + dj[ind];

if(nexti<n && nextj>=0 && nextj<n && nexti>=0 &&  !visited[nexti][nextj] && arr[nexti][nextj]==1)
{
    visited[i][j]=1;
    pathfinder(nexti , nextj , arr , n , visited , ans , move + pos[ind] , di , dj); 
    visited[i][j]=0;
}
}
}

vector<string> findPath(vector<vector<int>> &m, int n){
    vector<vector<int>> visited(n , vector<int> (n , 0));
    vector<string> ans;
    vector<int> di = {1 , 0 , 0 , -1};
    vector<int> dj = {0 , -1 , 1 , 0};

    if(m[0][0]==1)
    // pathfinder(0 , 0 , m , n , visited , ans , ""); //first approach
    pathfinder(0 , 0 , m , n , visited , ans , "" , di , dj );

    return ans;
}

int main()
{
    int n = 4;
    vector<vector<int>> m = { {1, 0, 0, 0},
                              {1, 1, 0, 1},
                              {1, 1, 0, 0},
                              {0, 1, 1, 1}} ;
    vector<string> s  = findPath(m , n);
    for(auto i : s)
    {
        cout<<i<<endl;
    }

                              
                              
return 0;
}