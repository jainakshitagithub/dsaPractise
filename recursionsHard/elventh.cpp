#include<bits/stdc++.h>
using namespace std;

bool isPossible(int node , int n , bool graph[101][101] , int color[] ,  int col)
{
    for(int i=0 ; i<n ; i++)
    {
        if(i!=node && graph[i][node]==1 && color[i] == col )return false;
    }
    return true;
}

bool solve(int node , int n , int m , bool graph[101][101] , int color[])
{
    if(node == n)return true;

    for(int col=1 ; col<=m ; col++)
    {
    
        if(isPossible( node ,  n ,  graph , color ,  col))
        {
            color[node] = col;
            if(solve(node+1 , n , m , graph , color))return true;
            color[node] = 0;

        }
    }
    return false;
}

   bool graphColoring(bool graph[101][101], int m, int n) {
        // your code here
       int color[n] = {0};
       bool res =  solve(0 , n , m , graph , color);
       return res;
    }

int main(){ 
    int m = 3 , n = 4 , e=5;
    int edges[101][101] = {(0,1) , (1,2) , (2,3) , (3,0) , (0,2)};
    bool graph[101][101];
    graph[0][1] = 1;
    graph[0][2] = 1;
    graph[0][3] = 1;
    graph[1][0] = 1;
    graph[1][2] = 1;
    graph[3][0] = 1;
    graph[3][2] = 1;
    bool ans = graphColoring(graph , m , n);
    cout<<ans<<endl;

     return 0;
}