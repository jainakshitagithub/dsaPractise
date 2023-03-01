#include<bits/stdc++.h>
using namespace std;

int findCommon(int mat[4][5] , int m , int n)
{
    map<int, int>  m;
    for(int i= 0 ; i<n ; i++)
    {
        
    }
}

int main(){ 
        int mat[4][5] = {
        { 1, 2, 3, 4, 5 },
        { 2, 4, 5, 8, 10 },
        { 3, 5, 7, 9, 11 },
        { 1, 3, 5, 7, 9 },
    };
    int result = findCommon(mat , 4 , 5);
    if (result == -1)
        cout << "No common element";
    else
        cout << "Common element is " << result;
     return 0;
}